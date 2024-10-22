# Statement:
You remain as the last human present in a base on an apocolytic battlefield. While scrolling through the files of the Gestalt Project, you notice some random gibberish with keys attached to them. You quickly realize that these might be the key to save yourself and get reinforcements. <br>
You have to try and write a code in such a way that the gibberish can be translated into mail addresses using the key that follow the following pattern:
- Any valid mail address should have a local name and a domain name, that is seperated by a ``@``
- There are can be periods(``.``) in between the local name, but that rule does not apply to the domain name.<br>
If you apply a '``.``' to the local name, you have shorten the local name by removing the periods.<br>
<b>For example:</b>
    ```
    garchomp.poke@pokemonhelp.com and garchomppoke@pokemonhelp.com will be sent to the same mail address. Therefore, you can have return back garchomppoke@pokemonhelp.com
    ```
- There can be a plus sign(``+``) as well to the local name, but everything after the first plus is considered as redundant.
- The domain name should end with a ``.com``, ``.org``, ``.net`` or ``.edu``.
- Everything apart from lower case alphabets, numbers, ``_``, ``<``, ``>`` and ``-`` in the middle of the local name will not be considered. The mail also cannot start with special characters the mentioned special characters ['``_``','``-``','``<``','``>``']
- The domain name should only contain letters and '``.``'s

Your task is to find how many valid mail addresses you can send to call for reinforcements.<br>
Use the key to decipher the mail addresses and return back the mail address if it is valid, and return ``"Invalid"`` if the mail address is not a correct one.


# Input format:
The input should consist of a string of characters, along with their attached key to decipher the string of characters that can be used to check if the mail addresses are valid or not.<br>

# Output Format:
The output should return the string that contains the proper mail address after it has been deciphered and all the conditions have been checked for a proper mail address.<br>

# Constraints:
- Each emails contains exactly one '@' character.
- Domain names must contain at least one character before ``.com``, ``.net``, ``.org`` or ``.edu`` suffix.
- Mails should only consist of lowercase characters. The output should be "``Invalid``" otherwise.

# Sample:
## Example 1:
Input:
```
Mail: wttsnq58@rfnq.twl
Key: e
```
Output:
```
Output: roonil03@mail.com
```
## Example 2:
Input:
```
Mail: yvupuzl}luz{hyz@ishkl.ul{
Key: g
```
Output:
```
Output: roninsevenstars@blade.net
```
## Example 3:
Input:
```
Mail: ulyhuvlghhvwxdu|.frph
Key: c
```
Output:
```
Output: Invalid
```
- <i>Explaination:</i> The address ``riversideestuary.come`` is not a valid mail address. Hence it returns "``Invalid``"

# Link:
<h3>
- <a href="https://leetcode.com/problems/unique-email-addresses/description/">Unique Email Addresses</a><br>
- <a href="https://medium.com/@clevergrlco/deciphering-secrets-exploring-the-intriguing-world-of-rot-ciphers-3de01bcc449b">Ciphers</a>
</h3>

# Edited By:
Aryan <i>"Roonil03"</i> Vivek
