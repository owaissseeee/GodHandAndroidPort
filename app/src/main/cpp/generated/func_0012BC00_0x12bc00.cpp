#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_0012BC00
// Address: 0x12bc00 - 0x12bf50
void func_0012BC00_0x12bc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012BC00_0x12bc00");
#endif

    switch (ctx->pc) {
        case 0x12bc00u: goto label_12bc00;
        case 0x12bc04u: goto label_12bc04;
        case 0x12bc08u: goto label_12bc08;
        case 0x12bc0cu: goto label_12bc0c;
        case 0x12bc10u: goto label_12bc10;
        case 0x12bc14u: goto label_12bc14;
        case 0x12bc18u: goto label_12bc18;
        case 0x12bc1cu: goto label_12bc1c;
        case 0x12bc20u: goto label_12bc20;
        case 0x12bc24u: goto label_12bc24;
        case 0x12bc28u: goto label_12bc28;
        case 0x12bc2cu: goto label_12bc2c;
        case 0x12bc30u: goto label_12bc30;
        case 0x12bc34u: goto label_12bc34;
        case 0x12bc38u: goto label_12bc38;
        case 0x12bc3cu: goto label_12bc3c;
        case 0x12bc40u: goto label_12bc40;
        case 0x12bc44u: goto label_12bc44;
        case 0x12bc48u: goto label_12bc48;
        case 0x12bc4cu: goto label_12bc4c;
        case 0x12bc50u: goto label_12bc50;
        case 0x12bc54u: goto label_12bc54;
        case 0x12bc58u: goto label_12bc58;
        case 0x12bc5cu: goto label_12bc5c;
        case 0x12bc60u: goto label_12bc60;
        case 0x12bc64u: goto label_12bc64;
        case 0x12bc68u: goto label_12bc68;
        case 0x12bc6cu: goto label_12bc6c;
        case 0x12bc70u: goto label_12bc70;
        case 0x12bc74u: goto label_12bc74;
        case 0x12bc78u: goto label_12bc78;
        case 0x12bc7cu: goto label_12bc7c;
        case 0x12bc80u: goto label_12bc80;
        case 0x12bc84u: goto label_12bc84;
        case 0x12bc88u: goto label_12bc88;
        case 0x12bc8cu: goto label_12bc8c;
        case 0x12bc90u: goto label_12bc90;
        case 0x12bc94u: goto label_12bc94;
        case 0x12bc98u: goto label_12bc98;
        case 0x12bc9cu: goto label_12bc9c;
        case 0x12bca0u: goto label_12bca0;
        case 0x12bca4u: goto label_12bca4;
        case 0x12bca8u: goto label_12bca8;
        case 0x12bcacu: goto label_12bcac;
        case 0x12bcb0u: goto label_12bcb0;
        case 0x12bcb4u: goto label_12bcb4;
        case 0x12bcb8u: goto label_12bcb8;
        case 0x12bcbcu: goto label_12bcbc;
        case 0x12bcc0u: goto label_12bcc0;
        case 0x12bcc4u: goto label_12bcc4;
        case 0x12bcc8u: goto label_12bcc8;
        case 0x12bcccu: goto label_12bccc;
        case 0x12bcd0u: goto label_12bcd0;
        case 0x12bcd4u: goto label_12bcd4;
        case 0x12bcd8u: goto label_12bcd8;
        case 0x12bcdcu: goto label_12bcdc;
        case 0x12bce0u: goto label_12bce0;
        case 0x12bce4u: goto label_12bce4;
        case 0x12bce8u: goto label_12bce8;
        case 0x12bcecu: goto label_12bcec;
        case 0x12bcf0u: goto label_12bcf0;
        case 0x12bcf4u: goto label_12bcf4;
        case 0x12bcf8u: goto label_12bcf8;
        case 0x12bcfcu: goto label_12bcfc;
        case 0x12bd00u: goto label_12bd00;
        case 0x12bd04u: goto label_12bd04;
        case 0x12bd08u: goto label_12bd08;
        case 0x12bd0cu: goto label_12bd0c;
        case 0x12bd10u: goto label_12bd10;
        case 0x12bd14u: goto label_12bd14;
        case 0x12bd18u: goto label_12bd18;
        case 0x12bd1cu: goto label_12bd1c;
        case 0x12bd20u: goto label_12bd20;
        case 0x12bd24u: goto label_12bd24;
        case 0x12bd28u: goto label_12bd28;
        case 0x12bd2cu: goto label_12bd2c;
        case 0x12bd30u: goto label_12bd30;
        case 0x12bd34u: goto label_12bd34;
        case 0x12bd38u: goto label_12bd38;
        case 0x12bd3cu: goto label_12bd3c;
        case 0x12bd40u: goto label_12bd40;
        case 0x12bd44u: goto label_12bd44;
        case 0x12bd48u: goto label_12bd48;
        case 0x12bd4cu: goto label_12bd4c;
        case 0x12bd50u: goto label_12bd50;
        case 0x12bd54u: goto label_12bd54;
        case 0x12bd58u: goto label_12bd58;
        case 0x12bd5cu: goto label_12bd5c;
        case 0x12bd60u: goto label_12bd60;
        case 0x12bd64u: goto label_12bd64;
        case 0x12bd68u: goto label_12bd68;
        case 0x12bd6cu: goto label_12bd6c;
        case 0x12bd70u: goto label_12bd70;
        case 0x12bd74u: goto label_12bd74;
        case 0x12bd78u: goto label_12bd78;
        case 0x12bd7cu: goto label_12bd7c;
        case 0x12bd80u: goto label_12bd80;
        case 0x12bd84u: goto label_12bd84;
        case 0x12bd88u: goto label_12bd88;
        case 0x12bd8cu: goto label_12bd8c;
        case 0x12bd90u: goto label_12bd90;
        case 0x12bd94u: goto label_12bd94;
        case 0x12bd98u: goto label_12bd98;
        case 0x12bd9cu: goto label_12bd9c;
        case 0x12bda0u: goto label_12bda0;
        case 0x12bda4u: goto label_12bda4;
        case 0x12bda8u: goto label_12bda8;
        case 0x12bdacu: goto label_12bdac;
        case 0x12bdb0u: goto label_12bdb0;
        case 0x12bdb4u: goto label_12bdb4;
        case 0x12bdb8u: goto label_12bdb8;
        case 0x12bdbcu: goto label_12bdbc;
        case 0x12bdc0u: goto label_12bdc0;
        case 0x12bdc4u: goto label_12bdc4;
        case 0x12bdc8u: goto label_12bdc8;
        case 0x12bdccu: goto label_12bdcc;
        case 0x12bdd0u: goto label_12bdd0;
        case 0x12bdd4u: goto label_12bdd4;
        case 0x12bdd8u: goto label_12bdd8;
        case 0x12bddcu: goto label_12bddc;
        case 0x12bde0u: goto label_12bde0;
        case 0x12bde4u: goto label_12bde4;
        case 0x12bde8u: goto label_12bde8;
        case 0x12bdecu: goto label_12bdec;
        case 0x12bdf0u: goto label_12bdf0;
        case 0x12bdf4u: goto label_12bdf4;
        case 0x12bdf8u: goto label_12bdf8;
        case 0x12bdfcu: goto label_12bdfc;
        case 0x12be00u: goto label_12be00;
        case 0x12be04u: goto label_12be04;
        case 0x12be08u: goto label_12be08;
        case 0x12be0cu: goto label_12be0c;
        case 0x12be10u: goto label_12be10;
        case 0x12be14u: goto label_12be14;
        case 0x12be18u: goto label_12be18;
        case 0x12be1cu: goto label_12be1c;
        case 0x12be20u: goto label_12be20;
        case 0x12be24u: goto label_12be24;
        case 0x12be28u: goto label_12be28;
        case 0x12be2cu: goto label_12be2c;
        case 0x12be30u: goto label_12be30;
        case 0x12be34u: goto label_12be34;
        case 0x12be38u: goto label_12be38;
        case 0x12be3cu: goto label_12be3c;
        case 0x12be40u: goto label_12be40;
        case 0x12be44u: goto label_12be44;
        case 0x12be48u: goto label_12be48;
        case 0x12be4cu: goto label_12be4c;
        case 0x12be50u: goto label_12be50;
        case 0x12be54u: goto label_12be54;
        case 0x12be58u: goto label_12be58;
        case 0x12be5cu: goto label_12be5c;
        case 0x12be60u: goto label_12be60;
        case 0x12be64u: goto label_12be64;
        case 0x12be68u: goto label_12be68;
        case 0x12be6cu: goto label_12be6c;
        case 0x12be70u: goto label_12be70;
        case 0x12be74u: goto label_12be74;
        case 0x12be78u: goto label_12be78;
        case 0x12be7cu: goto label_12be7c;
        case 0x12be80u: goto label_12be80;
        case 0x12be84u: goto label_12be84;
        case 0x12be88u: goto label_12be88;
        case 0x12be8cu: goto label_12be8c;
        case 0x12be90u: goto label_12be90;
        case 0x12be94u: goto label_12be94;
        case 0x12be98u: goto label_12be98;
        case 0x12be9cu: goto label_12be9c;
        case 0x12bea0u: goto label_12bea0;
        case 0x12bea4u: goto label_12bea4;
        case 0x12bea8u: goto label_12bea8;
        case 0x12beacu: goto label_12beac;
        case 0x12beb0u: goto label_12beb0;
        case 0x12beb4u: goto label_12beb4;
        case 0x12beb8u: goto label_12beb8;
        case 0x12bebcu: goto label_12bebc;
        case 0x12bec0u: goto label_12bec0;
        case 0x12bec4u: goto label_12bec4;
        case 0x12bec8u: goto label_12bec8;
        case 0x12beccu: goto label_12becc;
        case 0x12bed0u: goto label_12bed0;
        case 0x12bed4u: goto label_12bed4;
        case 0x12bed8u: goto label_12bed8;
        case 0x12bedcu: goto label_12bedc;
        case 0x12bee0u: goto label_12bee0;
        case 0x12bee4u: goto label_12bee4;
        case 0x12bee8u: goto label_12bee8;
        case 0x12beecu: goto label_12beec;
        case 0x12bef0u: goto label_12bef0;
        case 0x12bef4u: goto label_12bef4;
        case 0x12bef8u: goto label_12bef8;
        case 0x12befcu: goto label_12befc;
        case 0x12bf00u: goto label_12bf00;
        case 0x12bf04u: goto label_12bf04;
        case 0x12bf08u: goto label_12bf08;
        case 0x12bf0cu: goto label_12bf0c;
        case 0x12bf10u: goto label_12bf10;
        case 0x12bf14u: goto label_12bf14;
        case 0x12bf18u: goto label_12bf18;
        case 0x12bf1cu: goto label_12bf1c;
        case 0x12bf20u: goto label_12bf20;
        case 0x12bf24u: goto label_12bf24;
        case 0x12bf28u: goto label_12bf28;
        case 0x12bf2cu: goto label_12bf2c;
        case 0x12bf30u: goto label_12bf30;
        case 0x12bf34u: goto label_12bf34;
        case 0x12bf38u: goto label_12bf38;
        case 0x12bf3cu: goto label_12bf3c;
        case 0x12bf40u: goto label_12bf40;
        case 0x12bf44u: goto label_12bf44;
        case 0x12bf48u: goto label_12bf48;
        case 0x12bf4cu: goto label_12bf4c;
        default: break;
    }

    ctx->pc = 0x12bc00u;

label_12bc00:
    // 0x12bc00: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x12bc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_12bc04:
    // 0x12bc04: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x12bc04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_12bc08:
    // 0x12bc08: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x12bc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_12bc0c:
    // 0x12bc0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12bc0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12bc10:
    // 0x12bc10: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x12bc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_12bc14:
    // 0x12bc14: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x12bc14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12bc18:
    // 0x12bc18: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x12bc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_12bc1c:
    // 0x12bc1c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12bc1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12bc20:
    // 0x12bc20: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x12bc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_12bc24:
    // 0x12bc24: 0x240403be  addiu       $a0, $zero, 0x3BE
    ctx->pc = 0x12bc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 958));
label_12bc28:
    // 0x12bc28: 0xc0c3ea6  jal         func_30FA98
label_12bc2c:
    if (ctx->pc == 0x12BC2Cu) {
        ctx->pc = 0x12BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC28u;
        // 0x12bc2c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BC30u;
        goto label_12bc30;
    }
    ctx->pc = 0x12BC28u;
    SET_GPR_U32(ctx, 31, 0x12BC30u);
    ctx->pc = 0x12BC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BC28u;
    // 0x12bc2c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x12BC28u, 0x12BC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BC30u;
label_12bc30:
    // 0x12bc30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12bc30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12bc34:
    // 0x12bc34: 0x524000bf  beql        $s2, $zero, . + 4 + (0xBF << 2)
label_12bc38:
    if (ctx->pc == 0x12BC38u) {
        ctx->pc = 0x12BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC34u;
        // 0x12bc38: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BC3Cu;
        goto label_12bc3c;
    }
    ctx->pc = 0x12BC34u;
    {
        const bool branch_taken_0x12bc34 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bc34) {
            ctx->pc = 0x12BC38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BC34u;
            // 0x12bc38: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BF34u;
            goto label_12bf34;
        }
    }
    ctx->pc = 0x12BC3Cu;
label_12bc3c:
    // 0x12bc3c: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x12bc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
label_12bc40:
    // 0x12bc40: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x12bc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_12bc44:
    // 0x12bc44: 0x2663ffd7  addiu       $v1, $s3, -0x29
    ctx->pc = 0x12bc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967255));
label_12bc48:
    // 0x12bc48: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x12bc48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_12bc4c:
    // 0x12bc4c: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x12bc4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_12bc50:
    // 0x12bc50: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_12bc54:
    if (ctx->pc == 0x12BC54u) {
        ctx->pc = 0x12BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC50u;
        // 0x12bc54: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BC58u;
        goto label_12bc58;
    }
    ctx->pc = 0x12BC50u;
    {
        const bool branch_taken_0x12bc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC50u;
        // 0x12bc54: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bc50) {
            ctx->pc = 0x12BC74u;
            goto label_12bc74;
        }
    }
    ctx->pc = 0x12BC58u;
label_12bc58:
    // 0x12bc58: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x12bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_12bc5c:
    // 0x12bc5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12bc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_12bc60:
    // 0x12bc60: 0x2442d180  addiu       $v0, $v0, -0x2E80
    ctx->pc = 0x12bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955392));
label_12bc64:
    // 0x12bc64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12bc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12bc68:
    // 0x12bc68: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x12bc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_12bc6c:
    // 0x12bc6c: 0x800008  jr          $a0
label_12bc70:
    if (ctx->pc == 0x12BC70u) {
        ctx->pc = 0x12BC74u;
        goto label_12bc74;
    }
    ctx->pc = 0x12BC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12BC74u: goto label_12bc74;
            case 0x12BC8Cu: goto label_12bc8c;
            case 0x12BCE4u: goto label_12bce4;
            case 0x12BD3Cu: goto label_12bd3c;
            case 0x12BDE8u: goto label_12bde8;
            case 0x12BDFCu: goto label_12bdfc;
            case 0x12BE5Cu: goto label_12be5c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BC6Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12BC74u;
label_12bc74:
    // 0x12bc74: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x12bc74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_12bc78:
    // 0x12bc78: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12bc78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_12bc7c:
    // 0x12bc7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12bc7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12bc80:
    // 0x12bc80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12bc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12bc84:
    // 0x12bc84: 0x10000079  b           . + 4 + (0x79 << 2)
label_12bc88:
    if (ctx->pc == 0x12BC88u) {
        ctx->pc = 0x12BC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC84u;
        // 0x12bc88: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BC8Cu;
        goto label_12bc8c;
    }
    ctx->pc = 0x12BC84u;
    {
        const bool branch_taken_0x12bc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC84u;
        // 0x12bc88: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bc84) {
            ctx->pc = 0x12BE6Cu;
            goto label_12be6c;
        }
    }
    ctx->pc = 0x12BC8Cu;
label_12bc8c:
    // 0x12bc8c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x12bc8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_12bc90:
    // 0x12bc90: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12bc90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_12bc94:
    // 0x12bc94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12bc94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12bc98:
    // 0x12bc98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12bc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12bc9c:
    // 0x12bc9c: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x12bc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12bca0:
    // 0x12bca0: 0xc051e62  jal         func_147988
label_12bca4:
    if (ctx->pc == 0x12BCA4u) {
        ctx->pc = 0x12BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BCA0u;
        // 0x12bca4: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BCA8u;
        goto label_12bca8;
    }
    ctx->pc = 0x12BCA0u;
    SET_GPR_U32(ctx, 31, 0x12BCA8u);
    ctx->pc = 0x12BCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BCA0u;
    // 0x12bca4: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x12BCA0u, 0x12BCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BCA8u;
label_12bca8:
    // 0x12bca8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12bca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_12bcac:
    // 0x12bcac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12bcacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12bcb0:
    // 0x12bcb0: 0xc0c28ac  jal         func_30A2B0
label_12bcb4:
    if (ctx->pc == 0x12BCB4u) {
        ctx->pc = 0x12BCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BCB0u;
        // 0x12bcb4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BCB8u;
        goto label_12bcb8;
    }
    ctx->pc = 0x12BCB0u;
    SET_GPR_U32(ctx, 31, 0x12BCB8u);
    ctx->pc = 0x12BCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BCB0u;
    // 0x12bcb4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x12BCB0u, 0x12BCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BCB8u;
label_12bcb8:
    // 0x12bcb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12bcb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12bcbc:
    // 0x12bcbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12bcbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12bcc0:
    // 0x12bcc0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12bcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_12bcc4:
    // 0x12bcc4: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x12bcc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_12bcc8:
    // 0x12bcc8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x12bcc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_12bccc:
    // 0x12bccc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12bcccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12bcd0:
    // 0x12bcd0: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x12bcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_12bcd4:
    // 0x12bcd4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x12bcd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_12bcd8:
    // 0x12bcd8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x12bcd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12bcdc:
    // 0x12bcdc: 0x10000071  b           . + 4 + (0x71 << 2)
label_12bce0:
    if (ctx->pc == 0x12BCE0u) {
        ctx->pc = 0x12BCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BCDCu;
        // 0x12bce0: 0xe7a10044  swc1        $f1, 0x44($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BCE4u;
        goto label_12bce4;
    }
    ctx->pc = 0x12BCDCu;
    {
        const bool branch_taken_0x12bcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BCDCu;
        // 0x12bce0: 0xe7a10044  swc1        $f1, 0x44($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bcdc) {
            ctx->pc = 0x12BEA4u;
            goto label_12bea4;
        }
    }
    ctx->pc = 0x12BCE4u;
label_12bce4:
    // 0x12bce4: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x12bce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_12bce8:
    // 0x12bce8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12bce8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_12bcec:
    // 0x12bcec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12bcecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12bcf0:
    // 0x12bcf0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12bcf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12bcf4:
    // 0x12bcf4: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x12bcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12bcf8:
    // 0x12bcf8: 0xc051e62  jal         func_147988
label_12bcfc:
    if (ctx->pc == 0x12BCFCu) {
        ctx->pc = 0x12BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BCF8u;
        // 0x12bcfc: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BD00u;
        goto label_12bd00;
    }
    ctx->pc = 0x12BCF8u;
    SET_GPR_U32(ctx, 31, 0x12BD00u);
    ctx->pc = 0x12BCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BCF8u;
    // 0x12bcfc: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x12BCF8u, 0x12BD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BD00u;
label_12bd00:
    // 0x12bd00: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12bd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_12bd04:
    // 0x12bd04: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12bd04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12bd08:
    // 0x12bd08: 0xc0c28ac  jal         func_30A2B0
label_12bd0c:
    if (ctx->pc == 0x12BD0Cu) {
        ctx->pc = 0x12BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD08u;
        // 0x12bd0c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BD10u;
        goto label_12bd10;
    }
    ctx->pc = 0x12BD08u;
    SET_GPR_U32(ctx, 31, 0x12BD10u);
    ctx->pc = 0x12BD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BD08u;
    // 0x12bd0c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x12BD08u, 0x12BD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BD10u;
label_12bd10:
    // 0x12bd10: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12bd10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_12bd14:
    // 0x12bd14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12bd14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12bd18:
    // 0x12bd18: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12bd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_12bd1c:
    // 0x12bd1c: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x12bd1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_12bd20:
    // 0x12bd20: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x12bd20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_12bd24:
    // 0x12bd24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12bd24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12bd28:
    // 0x12bd28: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x12bd28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_12bd2c:
    // 0x12bd2c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x12bd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_12bd30:
    // 0x12bd30: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x12bd30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12bd34:
    // 0x12bd34: 0x1000005b  b           . + 4 + (0x5B << 2)
label_12bd38:
    if (ctx->pc == 0x12BD38u) {
        ctx->pc = 0x12BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD34u;
        // 0x12bd38: 0xe7a10044  swc1        $f1, 0x44($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BD3Cu;
        goto label_12bd3c;
    }
    ctx->pc = 0x12BD34u;
    {
        const bool branch_taken_0x12bd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD34u;
        // 0x12bd38: 0xe7a10044  swc1        $f1, 0x44($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd34) {
            ctx->pc = 0x12BEA4u;
            goto label_12bea4;
        }
    }
    ctx->pc = 0x12BD3Cu;
label_12bd3c:
    // 0x12bd3c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x12bd3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_12bd40:
    // 0x12bd40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12bd40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12bd44:
    // 0x12bd44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12bd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12bd48:
    // 0x12bd48: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x12bd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12bd4c:
    // 0x12bd4c: 0xc051e62  jal         func_147988
label_12bd50:
    if (ctx->pc == 0x12BD50u) {
        ctx->pc = 0x12BD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD4Cu;
        // 0x12bd50: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BD54u;
        goto label_12bd54;
    }
    ctx->pc = 0x12BD4Cu;
    SET_GPR_U32(ctx, 31, 0x12BD54u);
    ctx->pc = 0x12BD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BD4Cu;
    // 0x12bd50: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x12BD4Cu, 0x12BD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BD54u;
label_12bd54:
    // 0x12bd54: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12bd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_12bd58:
    // 0x12bd58: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12bd58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12bd5c:
    // 0x12bd5c: 0xc0c28ac  jal         func_30A2B0
label_12bd60:
    if (ctx->pc == 0x12BD60u) {
        ctx->pc = 0x12BD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD5Cu;
        // 0x12bd60: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BD64u;
        goto label_12bd64;
    }
    ctx->pc = 0x12BD5Cu;
    SET_GPR_U32(ctx, 31, 0x12BD64u);
    ctx->pc = 0x12BD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BD5Cu;
    // 0x12bd60: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x12BD5Cu, 0x12BD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BD64u;
label_12bd64:
    // 0x12bd64: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12bd64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_12bd68:
    // 0x12bd68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12bd68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12bd6c:
    // 0x12bd6c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12bd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_12bd70:
    // 0x12bd70: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x12bd70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_12bd74:
    // 0x12bd74: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x12bd74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_12bd78:
    // 0x12bd78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12bd78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12bd7c:
    // 0x12bd7c: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x12bd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_12bd80:
    // 0x12bd80: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x12bd80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_12bd84:
    // 0x12bd84: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x12bd84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12bd88:
    // 0x12bd88: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x12bd88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_12bd8c:
    // 0x12bd8c: 0xc0c28ac  jal         func_30A2B0
label_12bd90:
    if (ctx->pc == 0x12BD90u) {
        ctx->pc = 0x12BD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD8Cu;
        // 0x12bd90: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BD94u;
        goto label_12bd94;
    }
    ctx->pc = 0x12BD8Cu;
    SET_GPR_U32(ctx, 31, 0x12BD94u);
    ctx->pc = 0x12BD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BD8Cu;
    // 0x12bd90: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x12BD8Cu, 0x12BD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BD94u;
label_12bd94:
    // 0x12bd94: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x12bd94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_12bd98:
    // 0x12bd98: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x12bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_12bd9c:
    // 0x12bd9c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x12bd9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_12bda0:
    // 0x12bda0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_12bda4:
    if (ctx->pc == 0x12BDA4u) {
        ctx->pc = 0x12BDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDA0u;
        // 0x12bda4: 0xafa30060  sw          $v1, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BDA8u;
        goto label_12bda8;
    }
    ctx->pc = 0x12BDA0u;
    {
        const bool branch_taken_0x12bda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDA0u;
        // 0x12bda4: 0xafa30060  sw          $v1, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bda0) {
            ctx->pc = 0x12BDB4u;
            goto label_12bdb4;
        }
    }
    ctx->pc = 0x12BDA8u;
label_12bda8:
    // 0x12bda8: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x12bda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_12bdac:
    // 0x12bdac: 0x10000002  b           . + 4 + (0x2 << 2)
label_12bdb0:
    if (ctx->pc == 0x12BDB0u) {
        ctx->pc = 0x12BDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDACu;
        // 0x12bdb0: 0x8c420028  lw          $v0, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BDB4u;
        goto label_12bdb4;
    }
    ctx->pc = 0x12BDACu;
    {
        const bool branch_taken_0x12bdac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDACu;
        // 0x12bdb0: 0x8c420028  lw          $v0, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bdac) {
            ctx->pc = 0x12BDB8u;
            goto label_12bdb8;
        }
    }
    ctx->pc = 0x12BDB4u;
label_12bdb4:
    // 0x12bdb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12bdb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12bdb8:
    // 0x12bdb8: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_12bdbc:
    if (ctx->pc == 0x12BDBCu) {
        ctx->pc = 0x12BDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDB8u;
        // 0x12bdbc: 0x27b10040  addiu       $s1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BDC0u;
        goto label_12bdc0;
    }
    ctx->pc = 0x12BDB8u;
    {
        const bool branch_taken_0x12bdb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDB8u;
        // 0x12bdbc: 0x27b10040  addiu       $s1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bdb8) {
            ctx->pc = 0x12BEB0u;
            goto label_12beb0;
        }
    }
    ctx->pc = 0x12BDC0u;
label_12bdc0:
    // 0x12bdc0: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x12bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_12bdc4:
    // 0x12bdc4: 0x5222003b  beql        $s1, $v0, . + 4 + (0x3B << 2)
label_12bdc8:
    if (ctx->pc == 0x12BDC8u) {
        ctx->pc = 0x12BDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDC4u;
        // 0x12bdc8: 0x8e430214  lw          $v1, 0x214($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BDCCu;
        goto label_12bdcc;
    }
    ctx->pc = 0x12BDC4u;
    {
        const bool branch_taken_0x12bdc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x12bdc4) {
            ctx->pc = 0x12BDC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BDC4u;
            // 0x12bdc8: 0x8e430214  lw          $v1, 0x214($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BEB4u;
            goto label_12beb4;
        }
    }
    ctx->pc = 0x12BDCCu;
label_12bdcc:
    // 0x12bdcc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12bdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12bdd0:
    // 0x12bdd0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x12bdd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_12bdd4:
    // 0x12bdd4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12bdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12bdd8:
    // 0x12bdd8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x12bdd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_12bddc:
    // 0x12bddc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12bddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12bde0:
    // 0x12bde0: 0x10000033  b           . + 4 + (0x33 << 2)
label_12bde4:
    if (ctx->pc == 0x12BDE4u) {
        ctx->pc = 0x12BDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDE0u;
        // 0x12bde4: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BDE8u;
        goto label_12bde8;
    }
    ctx->pc = 0x12BDE0u;
    {
        const bool branch_taken_0x12bde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDE0u;
        // 0x12bde4: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bde0) {
            ctx->pc = 0x12BEB0u;
            goto label_12beb0;
        }
    }
    ctx->pc = 0x12BDE8u;
label_12bde8:
    // 0x12bde8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x12bde8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_12bdec:
    // 0x12bdec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12bdecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12bdf0:
    // 0x12bdf0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12bdf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12bdf4:
    // 0x12bdf4: 0x1000001d  b           . + 4 + (0x1D << 2)
label_12bdf8:
    if (ctx->pc == 0x12BDF8u) {
        ctx->pc = 0x12BDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDF4u;
        // 0x12bdf8: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BDFCu;
        goto label_12bdfc;
    }
    ctx->pc = 0x12BDF4u;
    {
        const bool branch_taken_0x12bdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDF4u;
        // 0x12bdf8: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bdf4) {
            ctx->pc = 0x12BE6Cu;
            goto label_12be6c;
        }
    }
    ctx->pc = 0x12BDFCu;
label_12bdfc:
    // 0x12bdfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12bdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12be00:
    // 0x12be00: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
label_12be04:
    if (ctx->pc == 0x12BE04u) {
        ctx->pc = 0x12BE08u;
        goto label_12be08;
    }
    ctx->pc = 0x12BE00u;
    {
        const bool branch_taken_0x12be00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x12be00) {
            ctx->pc = 0x12BE20u;
            goto label_12be20;
        }
    }
    ctx->pc = 0x12BE08u;
label_12be08:
    // 0x12be08: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_12be0c:
    if (ctx->pc == 0x12BE0Cu) {
        ctx->pc = 0x12BE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE08u;
        // 0x12be0c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE10u;
        goto label_12be10;
    }
    ctx->pc = 0x12BE08u;
    {
        const bool branch_taken_0x12be08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE08u;
        // 0x12be0c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be08) {
            ctx->pc = 0x12BE18u;
            goto label_12be18;
        }
    }
    ctx->pc = 0x12BE10u;
label_12be10:
    // 0x12be10: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
label_12be14:
    if (ctx->pc == 0x12BE14u) {
        ctx->pc = 0x12BE18u;
        goto label_12be18;
    }
    ctx->pc = 0x12BE10u;
    {
        const bool branch_taken_0x12be10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x12be10) {
            ctx->pc = 0x12BE34u;
            goto label_12be34;
        }
    }
    ctx->pc = 0x12BE18u;
label_12be18:
    // 0x12be18: 0x1000000b  b           . + 4 + (0xB << 2)
label_12be1c:
    if (ctx->pc == 0x12BE1Cu) {
        ctx->pc = 0x12BE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE18u;
        // 0x12be1c: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE20u;
        goto label_12be20;
    }
    ctx->pc = 0x12BE18u;
    {
        const bool branch_taken_0x12be18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE18u;
        // 0x12be1c: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be18) {
            ctx->pc = 0x12BE48u;
            goto label_12be48;
        }
    }
    ctx->pc = 0x12BE20u;
label_12be20:
    // 0x12be20: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x12be20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_12be24:
    // 0x12be24: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12be24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_12be28:
    // 0x12be28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12be28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12be2c:
    // 0x12be2c: 0x10000006  b           . + 4 + (0x6 << 2)
label_12be30:
    if (ctx->pc == 0x12BE30u) {
        ctx->pc = 0x12BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE2Cu;
        // 0x12be30: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE34u;
        goto label_12be34;
    }
    ctx->pc = 0x12BE2Cu;
    {
        const bool branch_taken_0x12be2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE2Cu;
        // 0x12be30: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be2c) {
            ctx->pc = 0x12BE48u;
            goto label_12be48;
        }
    }
    ctx->pc = 0x12BE34u;
label_12be34:
    // 0x12be34: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x12be34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
label_12be38:
    // 0x12be38: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12be38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_12be3c:
    // 0x12be3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12be3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12be40:
    // 0x12be40: 0x0  nop
    ctx->pc = 0x12be40u;
    // NOP
label_12be44:
    // 0x12be44: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x12be44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_12be48:
    // 0x12be48: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x12be48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_12be4c:
    // 0x12be4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12be4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12be50:
    // 0x12be50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12be50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12be54:
    // 0x12be54: 0x10000005  b           . + 4 + (0x5 << 2)
label_12be58:
    if (ctx->pc == 0x12BE58u) {
        ctx->pc = 0x12BE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE54u;
        // 0x12be58: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE5Cu;
        goto label_12be5c;
    }
    ctx->pc = 0x12BE54u;
    {
        const bool branch_taken_0x12be54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE54u;
        // 0x12be58: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be54) {
            ctx->pc = 0x12BE6Cu;
            goto label_12be6c;
        }
    }
    ctx->pc = 0x12BE5Cu;
label_12be5c:
    // 0x12be5c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x12be5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_12be60:
    // 0x12be60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12be60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12be64:
    // 0x12be64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12be64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12be68:
    // 0x12be68: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x12be68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12be6c:
    // 0x12be6c: 0xc051e62  jal         func_147988
label_12be70:
    if (ctx->pc == 0x12BE70u) {
        ctx->pc = 0x12BE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE6Cu;
        // 0x12be70: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE74u;
        goto label_12be74;
    }
    ctx->pc = 0x12BE6Cu;
    SET_GPR_U32(ctx, 31, 0x12BE74u);
    ctx->pc = 0x12BE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BE6Cu;
    // 0x12be70: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x12BE6Cu, 0x12BE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE74u;
label_12be74:
    // 0x12be74: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12be74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_12be78:
    // 0x12be78: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12be78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12be7c:
    // 0x12be7c: 0xc0c28ac  jal         func_30A2B0
label_12be80:
    if (ctx->pc == 0x12BE80u) {
        ctx->pc = 0x12BE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE7Cu;
        // 0x12be80: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE84u;
        goto label_12be84;
    }
    ctx->pc = 0x12BE7Cu;
    SET_GPR_U32(ctx, 31, 0x12BE84u);
    ctx->pc = 0x12BE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BE7Cu;
    // 0x12be80: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x12BE7Cu, 0x12BE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE84u;
label_12be84:
    // 0x12be84: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x12be84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_12be88:
    // 0x12be88: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x12be88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_12be8c:
    // 0x12be8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12be8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12be90:
    // 0x12be90: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12be90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_12be94:
    // 0x12be94: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x12be94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_12be98:
    // 0x12be98: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x12be98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_12be9c:
    // 0x12be9c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x12be9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_12bea0:
    // 0x12bea0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x12bea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12bea4:
    // 0x12bea4: 0xc0c28ac  jal         func_30A2B0
label_12bea8:
    if (ctx->pc == 0x12BEA8u) {
        ctx->pc = 0x12BEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BEA4u;
        // 0x12bea8: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BEACu;
        goto label_12beac;
    }
    ctx->pc = 0x12BEA4u;
    SET_GPR_U32(ctx, 31, 0x12BEACu);
    ctx->pc = 0x12BEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BEA4u;
    // 0x12bea8: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x12BEA4u, 0x12BEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BEACu;
label_12beac:
    // 0x12beac: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x12beacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_12beb0:
    // 0x12beb0: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x12beb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_12beb4:
    // 0x12beb4: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x12beb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_12beb8:
    // 0x12beb8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x12beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_12bebc:
    // 0x12bebc: 0x40f809  jalr        $v0
label_12bec0:
    if (ctx->pc == 0x12BEC0u) {
        ctx->pc = 0x12BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BEBCu;
        // 0x12bec0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BEC4u;
        goto label_12bec4;
    }
    ctx->pc = 0x12BEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12BEC4u);
        ctx->pc = 0x12BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BEBCu;
        // 0x12bec0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BEBCu, 0x12BEC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12BEC4u;
label_12bec4:
    // 0x12bec4: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x12bec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_12bec8:
    // 0x12bec8: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
label_12becc:
    if (ctx->pc == 0x12BECCu) {
        ctx->pc = 0x12BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BEC8u;
        // 0x12becc: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BED0u;
        goto label_12bed0;
    }
    ctx->pc = 0x12BEC8u;
    {
        const bool branch_taken_0x12bec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x12BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BEC8u;
        // 0x12becc: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bec8) {
            ctx->pc = 0x12BEE8u;
            goto label_12bee8;
        }
    }
    ctx->pc = 0x12BED0u;
label_12bed0:
    // 0x12bed0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x12bed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_12bed4:
    // 0x12bed4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x12bed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12bed8:
    // 0x12bed8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x12bed8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_12bedc:
    // 0x12bedc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x12bedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12bee0:
    // 0x12bee0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x12bee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_12bee4:
    // 0x12bee4: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x12bee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_12bee8:
    // 0x12bee8: 0x26430490  addiu       $v1, $s2, 0x490
    ctx->pc = 0x12bee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
label_12beec:
    // 0x12beec: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_12bef0:
    if (ctx->pc == 0x12BEF0u) {
        ctx->pc = 0x12BEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BEECu;
        // 0x12bef0: 0x26420100  addiu       $v0, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BEF4u;
        goto label_12bef4;
    }
    ctx->pc = 0x12BEECu;
    {
        const bool branch_taken_0x12beec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12beec) {
            ctx->pc = 0x12BEF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BEECu;
            // 0x12bef0: 0x26420100  addiu       $v0, $s2, 0x100 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BF10u;
            goto label_12bf10;
        }
    }
    ctx->pc = 0x12BEF4u;
label_12bef4:
    // 0x12bef4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12bef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12bef8:
    // 0x12bef8: 0xe6400490  swc1        $f0, 0x490($s2)
    ctx->pc = 0x12bef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1168), bits); }
label_12befc:
    // 0x12befc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12befcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12bf00:
    // 0x12bf00: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x12bf00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_12bf04:
    // 0x12bf04: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12bf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12bf08:
    // 0x12bf08: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x12bf08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_12bf0c:
    // 0x12bf0c: 0x26420100  addiu       $v0, $s2, 0x100
    ctx->pc = 0x12bf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
label_12bf10:
    // 0x12bf10: 0xae400100  sw          $zero, 0x100($s2)
    ctx->pc = 0x12bf10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 0));
label_12bf14:
    // 0x12bf14: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x12bf14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_12bf18:
    // 0x12bf18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12bf18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12bf1c:
    // 0x12bf1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12bf1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12bf20:
    // 0x12bf20: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x12bf20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12bf24:
    // 0x12bf24: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x12bf24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_12bf28:
    // 0x12bf28: 0xc06ed52  jal         func_1BB548
label_12bf2c:
    if (ctx->pc == 0x12BF2Cu) {
        ctx->pc = 0x12BF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF28u;
        // 0x12bf2c: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BF30u;
        goto label_12bf30;
    }
    ctx->pc = 0x12BF28u;
    SET_GPR_U32(ctx, 31, 0x12BF30u);
    ctx->pc = 0x12BF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BF28u;
    // 0x12bf2c: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB548u, 0x12BF28u, 0x12BF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BF30u;
label_12bf30:
    // 0x12bf30: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x12bf30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_12bf34:
    // 0x12bf34: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x12bf34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_12bf38:
    // 0x12bf38: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x12bf38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_12bf3c:
    // 0x12bf3c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x12bf3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_12bf40:
    // 0x12bf40: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x12bf40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_12bf44:
    // 0x12bf44: 0x3e00008  jr          $ra
label_12bf48:
    if (ctx->pc == 0x12BF48u) {
        ctx->pc = 0x12BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF44u;
        // 0x12bf48: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BF4Cu;
        goto label_12bf4c;
    }
    ctx->pc = 0x12BF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF44u;
        // 0x12bf48: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BF4Cu;
label_12bf4c:
    // 0x12bf4c: 0x0  nop
    ctx->pc = 0x12bf4cu;
    // NOP
    ctx->pc = 0x12bf50u;
}
