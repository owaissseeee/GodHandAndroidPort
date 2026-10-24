#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: ExecStart__15cR301CannonGame
// Address: 0x79bb68 - 0x79bf40
void ExecStart__15cR301CannonGame_0x79bb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExecStart__15cR301CannonGame_0x79bb68");
#endif

    switch (ctx->pc) {
        case 0x79bb68u: goto label_79bb68;
        case 0x79bb6cu: goto label_79bb6c;
        case 0x79bb70u: goto label_79bb70;
        case 0x79bb74u: goto label_79bb74;
        case 0x79bb78u: goto label_79bb78;
        case 0x79bb7cu: goto label_79bb7c;
        case 0x79bb80u: goto label_79bb80;
        case 0x79bb84u: goto label_79bb84;
        case 0x79bb88u: goto label_79bb88;
        case 0x79bb8cu: goto label_79bb8c;
        case 0x79bb90u: goto label_79bb90;
        case 0x79bb94u: goto label_79bb94;
        case 0x79bb98u: goto label_79bb98;
        case 0x79bb9cu: goto label_79bb9c;
        case 0x79bba0u: goto label_79bba0;
        case 0x79bba4u: goto label_79bba4;
        case 0x79bba8u: goto label_79bba8;
        case 0x79bbacu: goto label_79bbac;
        case 0x79bbb0u: goto label_79bbb0;
        case 0x79bbb4u: goto label_79bbb4;
        case 0x79bbb8u: goto label_79bbb8;
        case 0x79bbbcu: goto label_79bbbc;
        case 0x79bbc0u: goto label_79bbc0;
        case 0x79bbc4u: goto label_79bbc4;
        case 0x79bbc8u: goto label_79bbc8;
        case 0x79bbccu: goto label_79bbcc;
        case 0x79bbd0u: goto label_79bbd0;
        case 0x79bbd4u: goto label_79bbd4;
        case 0x79bbd8u: goto label_79bbd8;
        case 0x79bbdcu: goto label_79bbdc;
        case 0x79bbe0u: goto label_79bbe0;
        case 0x79bbe4u: goto label_79bbe4;
        case 0x79bbe8u: goto label_79bbe8;
        case 0x79bbecu: goto label_79bbec;
        case 0x79bbf0u: goto label_79bbf0;
        case 0x79bbf4u: goto label_79bbf4;
        case 0x79bbf8u: goto label_79bbf8;
        case 0x79bbfcu: goto label_79bbfc;
        case 0x79bc00u: goto label_79bc00;
        case 0x79bc04u: goto label_79bc04;
        case 0x79bc08u: goto label_79bc08;
        case 0x79bc0cu: goto label_79bc0c;
        case 0x79bc10u: goto label_79bc10;
        case 0x79bc14u: goto label_79bc14;
        case 0x79bc18u: goto label_79bc18;
        case 0x79bc1cu: goto label_79bc1c;
        case 0x79bc20u: goto label_79bc20;
        case 0x79bc24u: goto label_79bc24;
        case 0x79bc28u: goto label_79bc28;
        case 0x79bc2cu: goto label_79bc2c;
        case 0x79bc30u: goto label_79bc30;
        case 0x79bc34u: goto label_79bc34;
        case 0x79bc38u: goto label_79bc38;
        case 0x79bc3cu: goto label_79bc3c;
        case 0x79bc40u: goto label_79bc40;
        case 0x79bc44u: goto label_79bc44;
        case 0x79bc48u: goto label_79bc48;
        case 0x79bc4cu: goto label_79bc4c;
        case 0x79bc50u: goto label_79bc50;
        case 0x79bc54u: goto label_79bc54;
        case 0x79bc58u: goto label_79bc58;
        case 0x79bc5cu: goto label_79bc5c;
        case 0x79bc60u: goto label_79bc60;
        case 0x79bc64u: goto label_79bc64;
        case 0x79bc68u: goto label_79bc68;
        case 0x79bc6cu: goto label_79bc6c;
        case 0x79bc70u: goto label_79bc70;
        case 0x79bc74u: goto label_79bc74;
        case 0x79bc78u: goto label_79bc78;
        case 0x79bc7cu: goto label_79bc7c;
        case 0x79bc80u: goto label_79bc80;
        case 0x79bc84u: goto label_79bc84;
        case 0x79bc88u: goto label_79bc88;
        case 0x79bc8cu: goto label_79bc8c;
        case 0x79bc90u: goto label_79bc90;
        case 0x79bc94u: goto label_79bc94;
        case 0x79bc98u: goto label_79bc98;
        case 0x79bc9cu: goto label_79bc9c;
        case 0x79bca0u: goto label_79bca0;
        case 0x79bca4u: goto label_79bca4;
        case 0x79bca8u: goto label_79bca8;
        case 0x79bcacu: goto label_79bcac;
        case 0x79bcb0u: goto label_79bcb0;
        case 0x79bcb4u: goto label_79bcb4;
        case 0x79bcb8u: goto label_79bcb8;
        case 0x79bcbcu: goto label_79bcbc;
        case 0x79bcc0u: goto label_79bcc0;
        case 0x79bcc4u: goto label_79bcc4;
        case 0x79bcc8u: goto label_79bcc8;
        case 0x79bcccu: goto label_79bccc;
        case 0x79bcd0u: goto label_79bcd0;
        case 0x79bcd4u: goto label_79bcd4;
        case 0x79bcd8u: goto label_79bcd8;
        case 0x79bcdcu: goto label_79bcdc;
        case 0x79bce0u: goto label_79bce0;
        case 0x79bce4u: goto label_79bce4;
        case 0x79bce8u: goto label_79bce8;
        case 0x79bcecu: goto label_79bcec;
        case 0x79bcf0u: goto label_79bcf0;
        case 0x79bcf4u: goto label_79bcf4;
        case 0x79bcf8u: goto label_79bcf8;
        case 0x79bcfcu: goto label_79bcfc;
        case 0x79bd00u: goto label_79bd00;
        case 0x79bd04u: goto label_79bd04;
        case 0x79bd08u: goto label_79bd08;
        case 0x79bd0cu: goto label_79bd0c;
        case 0x79bd10u: goto label_79bd10;
        case 0x79bd14u: goto label_79bd14;
        case 0x79bd18u: goto label_79bd18;
        case 0x79bd1cu: goto label_79bd1c;
        case 0x79bd20u: goto label_79bd20;
        case 0x79bd24u: goto label_79bd24;
        case 0x79bd28u: goto label_79bd28;
        case 0x79bd2cu: goto label_79bd2c;
        case 0x79bd30u: goto label_79bd30;
        case 0x79bd34u: goto label_79bd34;
        case 0x79bd38u: goto label_79bd38;
        case 0x79bd3cu: goto label_79bd3c;
        case 0x79bd40u: goto label_79bd40;
        case 0x79bd44u: goto label_79bd44;
        case 0x79bd48u: goto label_79bd48;
        case 0x79bd4cu: goto label_79bd4c;
        case 0x79bd50u: goto label_79bd50;
        case 0x79bd54u: goto label_79bd54;
        case 0x79bd58u: goto label_79bd58;
        case 0x79bd5cu: goto label_79bd5c;
        case 0x79bd60u: goto label_79bd60;
        case 0x79bd64u: goto label_79bd64;
        case 0x79bd68u: goto label_79bd68;
        case 0x79bd6cu: goto label_79bd6c;
        case 0x79bd70u: goto label_79bd70;
        case 0x79bd74u: goto label_79bd74;
        case 0x79bd78u: goto label_79bd78;
        case 0x79bd7cu: goto label_79bd7c;
        case 0x79bd80u: goto label_79bd80;
        case 0x79bd84u: goto label_79bd84;
        case 0x79bd88u: goto label_79bd88;
        case 0x79bd8cu: goto label_79bd8c;
        case 0x79bd90u: goto label_79bd90;
        case 0x79bd94u: goto label_79bd94;
        case 0x79bd98u: goto label_79bd98;
        case 0x79bd9cu: goto label_79bd9c;
        case 0x79bda0u: goto label_79bda0;
        case 0x79bda4u: goto label_79bda4;
        case 0x79bda8u: goto label_79bda8;
        case 0x79bdacu: goto label_79bdac;
        case 0x79bdb0u: goto label_79bdb0;
        case 0x79bdb4u: goto label_79bdb4;
        case 0x79bdb8u: goto label_79bdb8;
        case 0x79bdbcu: goto label_79bdbc;
        case 0x79bdc0u: goto label_79bdc0;
        case 0x79bdc4u: goto label_79bdc4;
        case 0x79bdc8u: goto label_79bdc8;
        case 0x79bdccu: goto label_79bdcc;
        case 0x79bdd0u: goto label_79bdd0;
        case 0x79bdd4u: goto label_79bdd4;
        case 0x79bdd8u: goto label_79bdd8;
        case 0x79bddcu: goto label_79bddc;
        case 0x79bde0u: goto label_79bde0;
        case 0x79bde4u: goto label_79bde4;
        case 0x79bde8u: goto label_79bde8;
        case 0x79bdecu: goto label_79bdec;
        case 0x79bdf0u: goto label_79bdf0;
        case 0x79bdf4u: goto label_79bdf4;
        case 0x79bdf8u: goto label_79bdf8;
        case 0x79bdfcu: goto label_79bdfc;
        case 0x79be00u: goto label_79be00;
        case 0x79be04u: goto label_79be04;
        case 0x79be08u: goto label_79be08;
        case 0x79be0cu: goto label_79be0c;
        case 0x79be10u: goto label_79be10;
        case 0x79be14u: goto label_79be14;
        case 0x79be18u: goto label_79be18;
        case 0x79be1cu: goto label_79be1c;
        case 0x79be20u: goto label_79be20;
        case 0x79be24u: goto label_79be24;
        case 0x79be28u: goto label_79be28;
        case 0x79be2cu: goto label_79be2c;
        case 0x79be30u: goto label_79be30;
        case 0x79be34u: goto label_79be34;
        case 0x79be38u: goto label_79be38;
        case 0x79be3cu: goto label_79be3c;
        case 0x79be40u: goto label_79be40;
        case 0x79be44u: goto label_79be44;
        case 0x79be48u: goto label_79be48;
        case 0x79be4cu: goto label_79be4c;
        case 0x79be50u: goto label_79be50;
        case 0x79be54u: goto label_79be54;
        case 0x79be58u: goto label_79be58;
        case 0x79be5cu: goto label_79be5c;
        case 0x79be60u: goto label_79be60;
        case 0x79be64u: goto label_79be64;
        case 0x79be68u: goto label_79be68;
        case 0x79be6cu: goto label_79be6c;
        case 0x79be70u: goto label_79be70;
        case 0x79be74u: goto label_79be74;
        case 0x79be78u: goto label_79be78;
        case 0x79be7cu: goto label_79be7c;
        case 0x79be80u: goto label_79be80;
        case 0x79be84u: goto label_79be84;
        case 0x79be88u: goto label_79be88;
        case 0x79be8cu: goto label_79be8c;
        case 0x79be90u: goto label_79be90;
        case 0x79be94u: goto label_79be94;
        case 0x79be98u: goto label_79be98;
        case 0x79be9cu: goto label_79be9c;
        case 0x79bea0u: goto label_79bea0;
        case 0x79bea4u: goto label_79bea4;
        case 0x79bea8u: goto label_79bea8;
        case 0x79beacu: goto label_79beac;
        case 0x79beb0u: goto label_79beb0;
        case 0x79beb4u: goto label_79beb4;
        case 0x79beb8u: goto label_79beb8;
        case 0x79bebcu: goto label_79bebc;
        case 0x79bec0u: goto label_79bec0;
        case 0x79bec4u: goto label_79bec4;
        case 0x79bec8u: goto label_79bec8;
        case 0x79beccu: goto label_79becc;
        case 0x79bed0u: goto label_79bed0;
        case 0x79bed4u: goto label_79bed4;
        case 0x79bed8u: goto label_79bed8;
        case 0x79bedcu: goto label_79bedc;
        case 0x79bee0u: goto label_79bee0;
        case 0x79bee4u: goto label_79bee4;
        case 0x79bee8u: goto label_79bee8;
        case 0x79beecu: goto label_79beec;
        case 0x79bef0u: goto label_79bef0;
        case 0x79bef4u: goto label_79bef4;
        case 0x79bef8u: goto label_79bef8;
        case 0x79befcu: goto label_79befc;
        case 0x79bf00u: goto label_79bf00;
        case 0x79bf04u: goto label_79bf04;
        case 0x79bf08u: goto label_79bf08;
        case 0x79bf0cu: goto label_79bf0c;
        case 0x79bf10u: goto label_79bf10;
        case 0x79bf14u: goto label_79bf14;
        case 0x79bf18u: goto label_79bf18;
        case 0x79bf1cu: goto label_79bf1c;
        case 0x79bf20u: goto label_79bf20;
        case 0x79bf24u: goto label_79bf24;
        case 0x79bf28u: goto label_79bf28;
        case 0x79bf2cu: goto label_79bf2c;
        case 0x79bf30u: goto label_79bf30;
        case 0x79bf34u: goto label_79bf34;
        case 0x79bf38u: goto label_79bf38;
        case 0x79bf3cu: goto label_79bf3c;
        default: break;
    }

    ctx->pc = 0x79bb68u;

label_79bb68:
    // 0x79bb68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79bb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_79bb6c:
    // 0x79bb6c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79bb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_79bb70:
    // 0x79bb70: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79bb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_79bb74:
    // 0x79bb74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79bb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79bb78:
    // 0x79bb78: 0xc0b6dac  jal         func_2DB6B0
label_79bb7c:
    if (ctx->pc == 0x79BB7Cu) {
        ctx->pc = 0x79BB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB78u;
        // 0x79bb7c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BB80u;
        goto label_79bb80;
    }
    ctx->pc = 0x79BB78u;
    SET_GPR_U32(ctx, 31, 0x79BB80u);
    ctx->pc = 0x79BB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BB78u;
    // 0x79bb7c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79BB78u, 0x79BB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BB80u;
label_79bb80:
    // 0x79bb80: 0x104000eb  beqz        $v0, . + 4 + (0xEB << 2)
label_79bb84:
    if (ctx->pc == 0x79BB84u) {
        ctx->pc = 0x79BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB80u;
        // 0x79bb84: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BB88u;
        goto label_79bb88;
    }
    ctx->pc = 0x79BB80u;
    {
        const bool branch_taken_0x79bb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB80u;
        // 0x79bb84: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb80) {
            ctx->pc = 0x79BF30u;
            goto label_79bf30;
        }
    }
    ctx->pc = 0x79BB88u;
label_79bb88:
    // 0x79bb88: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x79bb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_79bb8c:
    // 0x79bb8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79bb8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79bb90:
    // 0x79bb90: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x79bb90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_79bb94:
    // 0x79bb94: 0x104000e6  beqz        $v0, . + 4 + (0xE6 << 2)
label_79bb98:
    if (ctx->pc == 0x79BB98u) {
        ctx->pc = 0x79BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB94u;
        // 0x79bb98: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BB9Cu;
        goto label_79bb9c;
    }
    ctx->pc = 0x79BB94u;
    {
        const bool branch_taken_0x79bb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB94u;
        // 0x79bb98: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb94) {
            ctx->pc = 0x79BF30u;
            goto label_79bf30;
        }
    }
    ctx->pc = 0x79BB9Cu;
label_79bb9c:
    // 0x79bb9c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x79bb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_79bba0:
    // 0x79bba0: 0x2442dea0  addiu       $v0, $v0, -0x2160
    ctx->pc = 0x79bba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958752));
label_79bba4:
    // 0x79bba4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79bba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79bba8:
    // 0x79bba8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79bba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79bbac:
    // 0x79bbac: 0x800008  jr          $a0
label_79bbb0:
    if (ctx->pc == 0x79BBB0u) {
        ctx->pc = 0x79BBB4u;
        goto label_79bbb4;
    }
    ctx->pc = 0x79BBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BBACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79BBB4u;
label_79bbb4:
    // 0x79bbb4: 0xc1e74ae  jal         func_79D2B8
label_79bbb8:
    if (ctx->pc == 0x79BBB8u) {
        ctx->pc = 0x79BBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BBB4u;
        // 0x79bbb8: 0x26240100  addiu       $a0, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BBBCu;
        goto label_79bbbc;
    }
    ctx->pc = 0x79BBB4u;
    SET_GPR_U32(ctx, 31, 0x79BBBCu);
    ctx->pc = 0x79BBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BBB4u;
    // 0x79bbb8: 0x26240100  addiu       $a0, $s1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79D2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79D2B8u, 0x79BBB4u, 0x79BBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BBBCu;
label_79bbbc:
    // 0x79bbbc: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x79bbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_79bbc0:
    // 0x79bbc0: 0xae200074  sw          $zero, 0x74($s1)
    ctx->pc = 0x79bbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
label_79bbc4:
    // 0x79bbc4: 0xa220008c  sb          $zero, 0x8C($s1)
    ctx->pc = 0x79bbc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 140), (uint8_t)GPR_U32(ctx, 0));
label_79bbc8:
    // 0x79bbc8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x79bbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_79bbcc:
    // 0x79bbcc: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x79bbccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
label_79bbd0:
    // 0x79bbd0: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x79bbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
label_79bbd4:
    // 0x79bbd4: 0xae200080  sw          $zero, 0x80($s1)
    ctx->pc = 0x79bbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
label_79bbd8:
    // 0x79bbd8: 0xae200084  sw          $zero, 0x84($s1)
    ctx->pc = 0x79bbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
label_79bbdc:
    // 0x79bbdc: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x79bbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
label_79bbe0:
    // 0x79bbe0: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x79bbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
label_79bbe4:
    // 0x79bbe4: 0xc07e804  jal         func_1FA010
label_79bbe8:
    if (ctx->pc == 0x79BBE8u) {
        ctx->pc = 0x79BBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BBE4u;
        // 0x79bbe8: 0xae220078  sw          $v0, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BBECu;
        goto label_79bbec;
    }
    ctx->pc = 0x79BBE4u;
    SET_GPR_U32(ctx, 31, 0x79BBECu);
    ctx->pc = 0x79BBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BBE4u;
    // 0x79bbe8: 0xae220078  sw          $v0, 0x78($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x79BBE4u, 0x79BBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BBECu;
label_79bbec:
    // 0x79bbec: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x79bbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_79bbf0:
    // 0x79bbf0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x79bbf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_79bbf4:
    // 0x79bbf4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_79bbf8:
    if (ctx->pc == 0x79BBF8u) {
        ctx->pc = 0x79BBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BBF4u;
        // 0x79bbf8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BBFCu;
        goto label_79bbfc;
    }
    ctx->pc = 0x79BBF4u;
    {
        const bool branch_taken_0x79bbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BBF4u;
        // 0x79bbf8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bbf4) {
            ctx->pc = 0x79BC14u;
            goto label_79bc14;
        }
    }
    ctx->pc = 0x79BBFCu;
label_79bbfc:
    // 0x79bbfc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79bbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_79bc00:
    // 0x79bc00: 0x2442ded0  addiu       $v0, $v0, -0x2130
    ctx->pc = 0x79bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958800));
label_79bc04:
    // 0x79bc04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79bc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79bc08:
    // 0x79bc08: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79bc08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79bc0c:
    // 0x79bc0c: 0x800008  jr          $a0
label_79bc10:
    if (ctx->pc == 0x79BC10u) {
        ctx->pc = 0x79BC14u;
        goto label_79bc14;
    }
    ctx->pc = 0x79BC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79BC14u: goto label_79bc14;
            case 0x79BC2Cu: goto label_79bc2c;
            case 0x79BC3Cu: goto label_79bc3c;
            case 0x79BC4Cu: goto label_79bc4c;
            case 0x79BC5Cu: goto label_79bc5c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BC0Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79BC14u;
label_79bc14:
    // 0x79bc14: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x79bc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_79bc18:
    // 0x79bc18: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79bc1c:
    // 0x79bc1c: 0xae23006c  sw          $v1, 0x6C($s1)
    ctx->pc = 0x79bc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 3));
label_79bc20:
    // 0x79bc20: 0xa222008d  sb          $v0, 0x8D($s1)
    ctx->pc = 0x79bc20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 141), (uint8_t)GPR_U32(ctx, 2));
label_79bc24:
    // 0x79bc24: 0x10000013  b           . + 4 + (0x13 << 2)
label_79bc28:
    if (ctx->pc == 0x79BC28u) {
        ctx->pc = 0x79BC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC24u;
        // 0x79bc28: 0xae230088  sw          $v1, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BC2Cu;
        goto label_79bc2c;
    }
    ctx->pc = 0x79BC24u;
    {
        const bool branch_taken_0x79bc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC24u;
        // 0x79bc28: 0xae230088  sw          $v1, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bc24) {
            ctx->pc = 0x79BC74u;
            goto label_79bc74;
        }
    }
    ctx->pc = 0x79BC2Cu;
label_79bc2c:
    // 0x79bc2c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x79bc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_79bc30:
    // 0x79bc30: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x79bc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_79bc34:
    // 0x79bc34: 0x1000000c  b           . + 4 + (0xC << 2)
label_79bc38:
    if (ctx->pc == 0x79BC38u) {
        ctx->pc = 0x79BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC34u;
        // 0x79bc38: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BC3Cu;
        goto label_79bc3c;
    }
    ctx->pc = 0x79BC34u;
    {
        const bool branch_taken_0x79bc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC34u;
        // 0x79bc38: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bc34) {
            ctx->pc = 0x79BC68u;
            goto label_79bc68;
        }
    }
    ctx->pc = 0x79BC3Cu;
label_79bc3c:
    // 0x79bc3c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x79bc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_79bc40:
    // 0x79bc40: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x79bc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_79bc44:
    // 0x79bc44: 0x10000008  b           . + 4 + (0x8 << 2)
label_79bc48:
    if (ctx->pc == 0x79BC48u) {
        ctx->pc = 0x79BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC44u;
        // 0x79bc48: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BC4Cu;
        goto label_79bc4c;
    }
    ctx->pc = 0x79BC44u;
    {
        const bool branch_taken_0x79bc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC44u;
        // 0x79bc48: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bc44) {
            ctx->pc = 0x79BC68u;
            goto label_79bc68;
        }
    }
    ctx->pc = 0x79BC4Cu;
label_79bc4c:
    // 0x79bc4c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x79bc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_79bc50:
    // 0x79bc50: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x79bc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_79bc54:
    // 0x79bc54: 0x10000004  b           . + 4 + (0x4 << 2)
label_79bc58:
    if (ctx->pc == 0x79BC58u) {
        ctx->pc = 0x79BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC54u;
        // 0x79bc58: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BC5Cu;
        goto label_79bc5c;
    }
    ctx->pc = 0x79BC54u;
    {
        const bool branch_taken_0x79bc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC54u;
        // 0x79bc58: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bc54) {
            ctx->pc = 0x79BC68u;
            goto label_79bc68;
        }
    }
    ctx->pc = 0x79BC5Cu;
label_79bc5c:
    // 0x79bc5c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x79bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_79bc60:
    // 0x79bc60: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x79bc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_79bc64:
    // 0x79bc64: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x79bc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_79bc68:
    // 0x79bc68: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x79bc68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
label_79bc6c:
    // 0x79bc6c: 0xae23006c  sw          $v1, 0x6C($s1)
    ctx->pc = 0x79bc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 3));
label_79bc70:
    // 0x79bc70: 0xa224008d  sb          $a0, 0x8D($s1)
    ctx->pc = 0x79bc70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 141), (uint8_t)GPR_U32(ctx, 4));
label_79bc74:
    // 0x79bc74: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x79bc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_79bc78:
    // 0x79bc78: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x79bc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_79bc7c:
    // 0x79bc7c: 0xc0b6dac  jal         func_2DB6B0
label_79bc80:
    if (ctx->pc == 0x79BC80u) {
        ctx->pc = 0x79BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC7Cu;
        // 0x79bc80: 0xae22009c  sw          $v0, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BC84u;
        goto label_79bc84;
    }
    ctx->pc = 0x79BC7Cu;
    SET_GPR_U32(ctx, 31, 0x79BC84u);
    ctx->pc = 0x79BC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BC7Cu;
    // 0x79bc80: 0xae22009c  sw          $v0, 0x9C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79BC7Cu, 0x79BC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BC84u;
label_79bc84:
    // 0x79bc84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79bc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79bc88:
    // 0x79bc88: 0xc042f30  jal         func_10BCC0
label_79bc8c:
    if (ctx->pc == 0x79BC8Cu) {
        ctx->pc = 0x79BC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC88u;
        // 0x79bc8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BC90u;
        goto label_79bc90;
    }
    ctx->pc = 0x79BC88u;
    SET_GPR_U32(ctx, 31, 0x79BC90u);
    ctx->pc = 0x79BC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BC88u;
    // 0x79bc8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BCC0u, 0x79BC88u, 0x79BC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BC90u;
label_79bc90:
    // 0x79bc90: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x79bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_79bc94:
    // 0x79bc94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79bc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_79bc98:
    // 0x79bc98: 0xae220098  sw          $v0, 0x98($s1)
    ctx->pc = 0x79bc98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
label_79bc9c:
    // 0x79bc9c: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x79bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_79bca0:
    // 0x79bca0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x79bca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_79bca4:
    // 0x79bca4: 0xae22009c  sw          $v0, 0x9C($s1)
    ctx->pc = 0x79bca4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
label_79bca8:
    // 0x79bca8: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x79bca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_79bcac:
    // 0x79bcac: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79bcacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_79bcb0:
    // 0x79bcb0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x79bcb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79bcb4:
    // 0x79bcb4: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x79bcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
label_79bcb8:
    // 0x79bcb8: 0xc0b0a92  jal         func_2C2A48
label_79bcbc:
    if (ctx->pc == 0x79BCBCu) {
        ctx->pc = 0x79BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCB8u;
        // 0x79bcbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BCC0u;
        goto label_79bcc0;
    }
    ctx->pc = 0x79BCB8u;
    SET_GPR_U32(ctx, 31, 0x79BCC0u);
    ctx->pc = 0x79BCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BCB8u;
    // 0x79bcbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79BCB8u, 0x79BCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BCC0u;
label_79bcc0:
    // 0x79bcc0: 0xc0b6dac  jal         func_2DB6B0
label_79bcc4:
    if (ctx->pc == 0x79BCC4u) {
        ctx->pc = 0x79BCC8u;
        goto label_79bcc8;
    }
    ctx->pc = 0x79BCC0u;
    SET_GPR_U32(ctx, 31, 0x79BCC8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79BCC0u, 0x79BCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BCC8u;
label_79bcc8:
    // 0x79bcc8: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79bcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79bccc:
    // 0x79bccc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79bcccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79bcd0:
    // 0x79bcd0: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x79bcd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_79bcd4:
    // 0x79bcd4: 0x8c660074  lw          $a2, 0x74($v1)
    ctx->pc = 0x79bcd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_79bcd8:
    // 0x79bcd8: 0xc0f809  jalr        $a2
label_79bcdc:
    if (ctx->pc == 0x79BCDCu) {
        ctx->pc = 0x79BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCD8u;
        // 0x79bcdc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BCE0u;
        goto label_79bce0;
    }
    ctx->pc = 0x79BCD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x79BCE0u);
        ctx->pc = 0x79BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCD8u;
        // 0x79bcdc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BCD8u, 0x79BCE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79BCE0u;
label_79bce0:
    // 0x79bce0: 0xc0b6dac  jal         func_2DB6B0
label_79bce4:
    if (ctx->pc == 0x79BCE4u) {
        ctx->pc = 0x79BCE8u;
        goto label_79bce8;
    }
    ctx->pc = 0x79BCE0u;
    SET_GPR_U32(ctx, 31, 0x79BCE8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79BCE0u, 0x79BCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BCE8u;
label_79bce8:
    // 0x79bce8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x79bce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_79bcec:
    // 0x79bcec: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x79bcecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_79bcf0:
    // 0x79bcf0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79bcf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79bcf4:
    // 0x79bcf4: 0x10000081  b           . + 4 + (0x81 << 2)
label_79bcf8:
    if (ctx->pc == 0x79BCF8u) {
        ctx->pc = 0x79BCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCF4u;
        // 0x79bcf8: 0xe4400104  swc1        $f0, 0x104($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BCFCu;
        goto label_79bcfc;
    }
    ctx->pc = 0x79BCF4u;
    {
        const bool branch_taken_0x79bcf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCF4u;
        // 0x79bcf8: 0xe4400104  swc1        $f0, 0x104($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bcf4) {
            ctx->pc = 0x79BEFCu;
            goto label_79befc;
        }
    }
    ctx->pc = 0x79BCFCu;
label_79bcfc:
    // 0x79bcfc: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x79bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_79bd00:
    // 0x79bd00: 0x1000008a  b           . + 4 + (0x8A << 2)
label_79bd04:
    if (ctx->pc == 0x79BD04u) {
        ctx->pc = 0x79BD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD00u;
        // 0x79bd04: 0xae220098  sw          $v0, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BD08u;
        goto label_79bd08;
    }
    ctx->pc = 0x79BD00u;
    {
        const bool branch_taken_0x79bd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD00u;
        // 0x79bd04: 0xae220098  sw          $v0, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bd00) {
            ctx->pc = 0x79BF2Cu;
            goto label_79bf2c;
        }
    }
    ctx->pc = 0x79BD08u;
label_79bd08:
    // 0x79bd08: 0x9e22009c  lwu         $v0, 0x9C($s1)
    ctx->pc = 0x79bd08u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_79bd0c:
    // 0x79bd0c: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x79bd0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
label_79bd10:
    // 0x79bd10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79bd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_79bd14:
    // 0x79bd14: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
label_79bd18:
    if (ctx->pc == 0x79BD18u) {
        ctx->pc = 0x79BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD14u;
        // 0x79bd18: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BD1Cu;
        goto label_79bd1c;
    }
    ctx->pc = 0x79BD14u;
    {
        const bool branch_taken_0x79bd14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD14u;
        // 0x79bd18: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bd14) {
            ctx->pc = 0x79BF2Cu;
            goto label_79bf2c;
        }
    }
    ctx->pc = 0x79BD1Cu;
label_79bd1c:
    // 0x79bd1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79bd1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79bd20:
    // 0x79bd20: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x79bd20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
label_79bd24:
    // 0x79bd24: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x79bd24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_79bd28:
    // 0x79bd28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79bd28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79bd2c:
    // 0x79bd2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79bd2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79bd30:
    // 0x79bd30: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x79bd30u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
label_79bd34:
    // 0x79bd34: 0xc0c1c82  jal         func_307208
label_79bd38:
    if (ctx->pc == 0x79BD38u) {
        ctx->pc = 0x79BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD34u;
        // 0x79bd38: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BD3Cu;
        goto label_79bd3c;
    }
    ctx->pc = 0x79BD34u;
    SET_GPR_U32(ctx, 31, 0x79BD3Cu);
    ctx->pc = 0x79BD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BD34u;
    // 0x79bd38: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x79BD34u, 0x79BD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BD3Cu;
label_79bd3c:
    // 0x79bd3c: 0x10000070  b           . + 4 + (0x70 << 2)
label_79bd40:
    if (ctx->pc == 0x79BD40u) {
        ctx->pc = 0x79BD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD3Cu;
        // 0x79bd40: 0x8e220098  lw          $v0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BD44u;
        goto label_79bd44;
    }
    ctx->pc = 0x79BD3Cu;
    {
        const bool branch_taken_0x79bd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD3Cu;
        // 0x79bd40: 0x8e220098  lw          $v0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bd3c) {
            ctx->pc = 0x79BF00u;
            goto label_79bf00;
        }
    }
    ctx->pc = 0x79BD44u;
label_79bd44:
    // 0x79bd44: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x79bd44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_79bd48:
    // 0x79bd48: 0x24647470  addiu       $a0, $v1, 0x7470
    ctx->pc = 0x79bd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 29808));
label_79bd4c:
    // 0x79bd4c: 0x9082001c  lbu         $v0, 0x1C($a0)
    ctx->pc = 0x79bd4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
label_79bd50:
    // 0x79bd50: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x79bd50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_79bd54:
    // 0x79bd54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79bd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_79bd58:
    // 0x79bd58: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
label_79bd5c:
    if (ctx->pc == 0x79BD5Cu) {
        ctx->pc = 0x79BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD58u;
        // 0x79bd5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BD60u;
        goto label_79bd60;
    }
    ctx->pc = 0x79BD58u;
    {
        const bool branch_taken_0x79bd58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD58u;
        // 0x79bd5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bd58) {
            ctx->pc = 0x79BF2Cu;
            goto label_79bf2c;
        }
    }
    ctx->pc = 0x79BD60u;
label_79bd60:
    // 0x79bd60: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x79bd60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_79bd64:
    // 0x79bd64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79bd64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79bd68:
    // 0x79bd68: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x79bd68u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
label_79bd6c:
    // 0x79bd6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79bd6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79bd70:
    // 0x79bd70: 0xc0c1c82  jal         func_307208
label_79bd74:
    if (ctx->pc == 0x79BD74u) {
        ctx->pc = 0x79BD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD70u;
        // 0x79bd74: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BD78u;
        goto label_79bd78;
    }
    ctx->pc = 0x79BD70u;
    SET_GPR_U32(ctx, 31, 0x79BD78u);
    ctx->pc = 0x79BD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BD70u;
    // 0x79bd74: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x79BD70u, 0x79BD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BD78u;
label_79bd78:
    // 0x79bd78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79bd78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_79bd7c:
    // 0x79bd7c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x79bd7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_79bd80:
    // 0x79bd80: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x79bd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_79bd84:
    // 0x79bd84: 0x3c01c0ad  lui         $at, 0xC0AD
    ctx->pc = 0x79bd84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49325 << 16));
label_79bd88:
    // 0x79bd88: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x79bd88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_79bd8c:
    // 0x79bd8c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x79bd8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_79bd90:
    // 0x79bd90: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79bd90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79bd94:
    // 0x79bd94: 0x3c0140c5  lui         $at, 0x40C5
    ctx->pc = 0x79bd94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16581 << 16));
label_79bd98:
    // 0x79bd98: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x79bd98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_79bd9c:
    // 0x79bd9c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x79bd9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_79bda0:
    // 0x79bda0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79bda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_79bda4:
    // 0x79bda4: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x79bda4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
label_79bda8:
    // 0x79bda8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79bda8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_79bdac:
    // 0x79bdac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79bdacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79bdb0:
    // 0x79bdb0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79bdb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79bdb4:
    // 0x79bdb4: 0x3c01c0c2  lui         $at, 0xC0C2
    ctx->pc = 0x79bdb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49346 << 16));
label_79bdb8:
    // 0x79bdb8: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x79bdb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_79bdbc:
    // 0x79bdbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79bdbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79bdc0:
    // 0x79bdc0: 0x3c0140c4  lui         $at, 0x40C4
    ctx->pc = 0x79bdc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16580 << 16));
label_79bdc4:
    // 0x79bdc4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79bdc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_79bdc8:
    // 0x79bdc8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79bdc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_79bdcc:
    // 0x79bdcc: 0x3c0141e4  lui         $at, 0x41E4
    ctx->pc = 0x79bdccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16868 << 16));
label_79bdd0:
    // 0x79bdd0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x79bdd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_79bdd4:
    // 0x79bdd4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79bdd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_79bdd8:
    // 0x79bdd8: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x79bdd8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_79bddc:
    // 0x79bddc: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x79bddcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_79bde0:
    // 0x79bde0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x79bde0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_79bde4:
    // 0x79bde4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x79bde4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_79bde8:
    // 0x79bde8: 0xe7a6000c  swc1        $f6, 0xC($sp)
    ctx->pc = 0x79bde8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_79bdec:
    // 0x79bdec: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x79bdecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_79bdf0:
    // 0x79bdf0: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x79bdf0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79bdf4:
    // 0x79bdf4: 0xc1e7424  jal         func_79D090
label_79bdf8:
    if (ctx->pc == 0x79BDF8u) {
        ctx->pc = 0x79BDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BDF4u;
        // 0x79bdf8: 0xe446000c  swc1        $f6, 0xC($v0) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BDFCu;
        goto label_79bdfc;
    }
    ctx->pc = 0x79BDF4u;
    SET_GPR_U32(ctx, 31, 0x79BDFCu);
    ctx->pc = 0x79BDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BDF4u;
    // 0x79bdf8: 0xe446000c  swc1        $f6, 0xC($v0) (Delay Slot)
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x79D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79D090u, 0x79BDF4u, 0x79BDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BDFCu;
label_79bdfc:
    // 0x79bdfc: 0x10000040  b           . + 4 + (0x40 << 2)
label_79be00:
    if (ctx->pc == 0x79BE00u) {
        ctx->pc = 0x79BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BDFCu;
        // 0x79be00: 0x8e220098  lw          $v0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BE04u;
        goto label_79be04;
    }
    ctx->pc = 0x79BDFCu;
    {
        const bool branch_taken_0x79bdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BDFCu;
        // 0x79be00: 0x8e220098  lw          $v0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bdfc) {
            ctx->pc = 0x79BF00u;
            goto label_79bf00;
        }
    }
    ctx->pc = 0x79BE04u;
label_79be04:
    // 0x79be04: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x79be04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_79be08:
    // 0x79be08: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x79be08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_79be0c:
    // 0x79be0c: 0x1000003c  b           . + 4 + (0x3C << 2)
label_79be10:
    if (ctx->pc == 0x79BE10u) {
        ctx->pc = 0x79BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE0Cu;
        // 0x79be10: 0xae2300a0  sw          $v1, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BE14u;
        goto label_79be14;
    }
    ctx->pc = 0x79BE0Cu;
    {
        const bool branch_taken_0x79be0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE0Cu;
        // 0x79be10: 0xae2300a0  sw          $v1, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79be0c) {
            ctx->pc = 0x79BF00u;
            goto label_79bf00;
        }
    }
    ctx->pc = 0x79BE14u;
label_79be14:
    // 0x79be14: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x79be14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_79be18:
    // 0x79be18: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_79be1c:
    if (ctx->pc == 0x79BE1Cu) {
        ctx->pc = 0x79BE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE18u;
        // 0x79be1c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BE20u;
        goto label_79be20;
    }
    ctx->pc = 0x79BE18u;
    {
        const bool branch_taken_0x79be18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE18u;
        // 0x79be1c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79be18) {
            ctx->pc = 0x79BE68u;
            goto label_79be68;
        }
    }
    ctx->pc = 0x79BE20u;
label_79be20:
    // 0x79be20: 0x3c080074  lui         $t0, 0x74
    ctx->pc = 0x79be20u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)116 << 16));
label_79be24:
    // 0x79be24: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x79be24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_79be28:
    // 0x79be28: 0x8d027a78  lw          $v0, 0x7A78($t0)
    ctx->pc = 0x79be28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 31352)));
label_79be2c:
    // 0x79be2c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x79be2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_79be30:
    // 0x79be30: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x79be30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
label_79be34:
    // 0x79be34: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x79be34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
label_79be38:
    // 0x79be38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79be38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_79be3c:
    // 0x79be3c: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x79be3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
label_79be40:
    // 0x79be40: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x79be40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_79be44:
    // 0x79be44: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x79be44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_79be48:
    // 0x79be48: 0x26240100  addiu       $a0, $s1, 0x100
    ctx->pc = 0x79be48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_79be4c:
    // 0x79be4c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x79be4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_79be50:
    // 0x79be50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79be50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79be54:
    // 0x79be54: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x79be54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_79be58:
    // 0x79be58: 0xc1e768c  jal         func_79DA30
label_79be5c:
    if (ctx->pc == 0x79BE5Cu) {
        ctx->pc = 0x79BE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE58u;
        // 0x79be5c: 0xad027a78  sw          $v0, 0x7A78($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 31352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BE60u;
        goto label_79be60;
    }
    ctx->pc = 0x79BE58u;
    SET_GPR_U32(ctx, 31, 0x79BE60u);
    ctx->pc = 0x79BE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BE58u;
    // 0x79be5c: 0xad027a78  sw          $v0, 0x7A78($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 31352), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79DA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79DA30u, 0x79BE58u, 0x79BE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BE60u;
label_79be60:
    // 0x79be60: 0x10000027  b           . + 4 + (0x27 << 2)
label_79be64:
    if (ctx->pc == 0x79BE64u) {
        ctx->pc = 0x79BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE60u;
        // 0x79be64: 0x8e220098  lw          $v0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BE68u;
        goto label_79be68;
    }
    ctx->pc = 0x79BE60u;
    {
        const bool branch_taken_0x79be60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE60u;
        // 0x79be64: 0x8e220098  lw          $v0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79be60) {
            ctx->pc = 0x79BF00u;
            goto label_79bf00;
        }
    }
    ctx->pc = 0x79BE68u;
label_79be68:
    // 0x79be68: 0x10000030  b           . + 4 + (0x30 << 2)
label_79be6c:
    if (ctx->pc == 0x79BE6Cu) {
        ctx->pc = 0x79BE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE68u;
        // 0x79be6c: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BE70u;
        goto label_79be70;
    }
    ctx->pc = 0x79BE68u;
    {
        const bool branch_taken_0x79be68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE68u;
        // 0x79be6c: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79be68) {
            ctx->pc = 0x79BF2Cu;
            goto label_79bf2c;
        }
    }
    ctx->pc = 0x79BE70u;
label_79be70:
    // 0x79be70: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79be70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_79be74:
    // 0x79be74: 0x3404f000  ori         $a0, $zero, 0xF000
    ctx->pc = 0x79be74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
label_79be78:
    // 0x79be78: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x79be78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
label_79be7c:
    // 0x79be7c: 0x244574a0  addiu       $a1, $v0, 0x74A0
    ctx->pc = 0x79be7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
label_79be80:
    // 0x79be80: 0xdca301a0  ld          $v1, 0x1A0($a1)
    ctx->pc = 0x79be80u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 416)));
label_79be84:
    // 0x79be84: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79be84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_79be88:
    // 0x79be88: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_79be8c:
    if (ctx->pc == 0x79BE8Cu) {
        ctx->pc = 0x79BE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE88u;
        // 0x79be8c: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BE90u;
        goto label_79be90;
    }
    ctx->pc = 0x79BE88u;
    {
        const bool branch_taken_0x79be88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE88u;
        // 0x79be8c: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79be88) {
            ctx->pc = 0x79BF2Cu;
            goto label_79bf2c;
        }
    }
    ctx->pc = 0x79BE90u;
label_79be90:
    // 0x79be90: 0x8ca305d8  lw          $v1, 0x5D8($a1)
    ctx->pc = 0x79be90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1496)));
label_79be94:
    // 0x79be94: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79be94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_79be98:
    // 0x79be98: 0x3c04bfff  lui         $a0, 0xBFFF
    ctx->pc = 0x79be98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49151 << 16));
label_79be9c:
    // 0x79be9c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x79be9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_79bea0:
    // 0x79bea0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x79bea0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_79bea4:
    // 0x79bea4: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x79bea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
label_79bea8:
    // 0x79bea8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79bea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_79beac:
    // 0x79beac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79beacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_79beb0:
    // 0x79beb0: 0x3c04efff  lui         $a0, 0xEFFF
    ctx->pc = 0x79beb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61439 << 16));
label_79beb4:
    // 0x79beb4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x79beb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_79beb8:
    // 0x79beb8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x79beb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_79bebc:
    // 0x79bebc: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x79bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
label_79bec0:
    // 0x79bec0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79bec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_79bec4:
    // 0x79bec4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79bec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_79bec8:
    // 0x79bec8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79bec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_79becc:
    // 0x79becc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x79beccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_79bed0:
    // 0x79bed0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79bed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_79bed4:
    // 0x79bed4: 0xaca305d8  sw          $v1, 0x5D8($a1)
    ctx->pc = 0x79bed4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1496), GPR_U32(ctx, 3));
label_79bed8:
    // 0x79bed8: 0x26300100  addiu       $s0, $s1, 0x100
    ctx->pc = 0x79bed8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_79bedc:
    // 0x79bedc: 0xc0b42ae  jal         func_2D0AB8
label_79bee0:
    if (ctx->pc == 0x79BEE0u) {
        ctx->pc = 0x79BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BEDCu;
        // 0x79bee0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BEE4u;
        goto label_79bee4;
    }
    ctx->pc = 0x79BEDCu;
    SET_GPR_U32(ctx, 31, 0x79BEE4u);
    ctx->pc = 0x79BEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BEDCu;
    // 0x79bee0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x79BEDCu, 0x79BEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BEE4u;
label_79bee4:
    // 0x79bee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79bee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79bee8:
    // 0x79bee8: 0xc1e768c  jal         func_79DA30
label_79beec:
    if (ctx->pc == 0x79BEECu) {
        ctx->pc = 0x79BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BEE8u;
        // 0x79beec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BEF0u;
        goto label_79bef0;
    }
    ctx->pc = 0x79BEE8u;
    SET_GPR_U32(ctx, 31, 0x79BEF0u);
    ctx->pc = 0x79BEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BEE8u;
    // 0x79beec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79DA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79DA30u, 0x79BEE8u, 0x79BEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BEF0u;
label_79bef0:
    // 0x79bef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79bef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79bef4:
    // 0x79bef4: 0xc1e754a  jal         func_79D528
label_79bef8:
    if (ctx->pc == 0x79BEF8u) {
        ctx->pc = 0x79BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BEF4u;
        // 0x79bef8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BEFCu;
        goto label_79befc;
    }
    ctx->pc = 0x79BEF4u;
    SET_GPR_U32(ctx, 31, 0x79BEFCu);
    ctx->pc = 0x79BEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BEF4u;
    // 0x79bef8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79D528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79D528u, 0x79BEF4u, 0x79BEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BEFCu;
label_79befc:
    // 0x79befc: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x79befcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_79bf00:
    // 0x79bf00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_79bf04:
    // 0x79bf04: 0x10000009  b           . + 4 + (0x9 << 2)
label_79bf08:
    if (ctx->pc == 0x79BF08u) {
        ctx->pc = 0x79BF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF04u;
        // 0x79bf08: 0xae220098  sw          $v0, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BF0Cu;
        goto label_79bf0c;
    }
    ctx->pc = 0x79BF04u;
    {
        const bool branch_taken_0x79bf04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF04u;
        // 0x79bf08: 0xae220098  sw          $v0, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf04) {
            ctx->pc = 0x79BF2Cu;
            goto label_79bf2c;
        }
    }
    ctx->pc = 0x79BF0Cu;
label_79bf0c:
    // 0x79bf0c: 0x9e220100  lwu         $v0, 0x100($s1)
    ctx->pc = 0x79bf0cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 256)));
label_79bf10:
    // 0x79bf10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79bf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_79bf14:
    // 0x79bf14: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x79bf14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_79bf18:
    // 0x79bf18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_79bf1c:
    if (ctx->pc == 0x79BF1Cu) {
        ctx->pc = 0x79BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF18u;
        // 0x79bf1c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BF20u;
        goto label_79bf20;
    }
    ctx->pc = 0x79BF18u;
    {
        const bool branch_taken_0x79bf18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF18u;
        // 0x79bf1c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf18) {
            ctx->pc = 0x79BF2Cu;
            goto label_79bf2c;
        }
    }
    ctx->pc = 0x79BF20u;
label_79bf20:
    // 0x79bf20: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x79bf20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_79bf24:
    // 0x79bf24: 0xae220094  sw          $v0, 0x94($s1)
    ctx->pc = 0x79bf24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
label_79bf28:
    // 0x79bf28: 0xae200098  sw          $zero, 0x98($s1)
    ctx->pc = 0x79bf28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
label_79bf2c:
    // 0x79bf2c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79bf2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_79bf30:
    // 0x79bf30: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79bf30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_79bf34:
    // 0x79bf34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79bf34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79bf38:
    // 0x79bf38: 0x3e00008  jr          $ra
label_79bf3c:
    if (ctx->pc == 0x79BF3Cu) {
        ctx->pc = 0x79BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF38u;
        // 0x79bf3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BF40u;
        goto label_fallthrough_0x79bf38;
    }
    ctx->pc = 0x79BF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF38u;
        // 0x79bf3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79bf38:
    ctx->pc = 0x79BF40u;
}
} // namespace gh_r301
