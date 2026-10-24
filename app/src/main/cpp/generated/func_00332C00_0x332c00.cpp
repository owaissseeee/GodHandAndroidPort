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

// Function: func_00332C00
// Address: 0x332c00 - 0x332d78
void func_00332C00_0x332c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00332C00_0x332c00");
#endif

    switch (ctx->pc) {
        case 0x332c50u: goto label_332c50;
        case 0x332c70u: goto label_332c70;
        case 0x332c84u: goto label_332c84;
        case 0x332ca4u: goto label_332ca4;
        case 0x332cb4u: goto label_332cb4;
        case 0x332cbcu: goto label_332cbc;
        case 0x332cc4u: goto label_332cc4;
        case 0x332cccu: goto label_332ccc;
        case 0x332cd8u: goto label_332cd8;
        case 0x332cf0u: goto label_332cf0;
        case 0x332cf8u: goto label_332cf8;
        default: break;
    }

    ctx->pc = 0x332c00u;

    // 0x332c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x332c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x332c04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x332c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x332c08: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x332c08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332c0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x332c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x332c10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x332c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x332c14: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x332c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x332c18: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x332c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x332c1c: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x332C1Cu;
    {
        const bool branch_taken_0x332c1c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x332C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332C1Cu;
        // 0x332c20: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332c1c) {
            ctx->pc = 0x332C30u;
            goto label_332c30;
        }
    }
    ctx->pc = 0x332C24u;
    // 0x332c24: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x332c24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x332c28: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x332C28u;
    {
        const bool branch_taken_0x332c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332C28u;
        // 0x332c2c: 0x24a54380  addiu       $a1, $a1, 0x4380 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332c28) {
            ctx->pc = 0x332C68u;
            goto label_332c68;
        }
    }
    ctx->pc = 0x332C30u;
label_332c30:
    // 0x332c30: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x332C30u;
    {
        const bool branch_taken_0x332c30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x332C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332C30u;
        // 0x332c34: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332c30) {
            ctx->pc = 0x332C48u;
            goto label_332c48;
        }
    }
    ctx->pc = 0x332C38u;
    // 0x332c38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x332c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332c3c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x332C3Cu;
    {
        const bool branch_taken_0x332c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332C3Cu;
        // 0x332c40: 0x24a543a8  addiu       $a1, $a1, 0x43A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332c3c) {
            ctx->pc = 0x332C68u;
            goto label_332c68;
        }
    }
    ctx->pc = 0x332C44u;
    // 0x332c44: 0x0  nop
    ctx->pc = 0x332c44u;
    // NOP
label_332c48:
    // 0x332c48: 0xc0ccaea  jal         func_332BA8
    ctx->pc = 0x332C48u;
    SET_GPR_U32(ctx, 31, 0x332C50u);
    ctx->pc = 0x332BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332BA8u, 0x332C48u, 0x332C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332C50u;
label_332c50:
    // 0x332c50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x332c50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332c54: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x332C54u;
    {
        const bool branch_taken_0x332c54 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x332C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332C54u;
        // 0x332c58: 0x26330020  addiu       $s3, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332c54) {
            ctx->pc = 0x332C78u;
            goto label_332c78;
        }
    }
    ctx->pc = 0x332C5Cu;
    // 0x332c5c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x332c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x332c60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x332c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332c64: 0x24a543d0  addiu       $a1, $a1, 0x43D0
    ctx->pc = 0x332c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17360));
label_332c68:
    // 0x332c68: 0xc0cca02  jal         func_332808
    ctx->pc = 0x332C68u;
    SET_GPR_U32(ctx, 31, 0x332C70u);
    ctx->pc = 0x332808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332808u, 0x332C68u, 0x332C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332C70u;
label_332c70:
    // 0x332c70: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x332C70u;
    {
        const bool branch_taken_0x332c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332C70u;
        // 0x332c74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332c70) {
            ctx->pc = 0x332D58u;
            goto label_332d58;
        }
    }
    ctx->pc = 0x332C78u;
label_332c78:
    // 0x332c78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x332c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332c7c: 0xc0ccf00  jal         func_333C00
    ctx->pc = 0x332C7Cu;
    SET_GPR_U32(ctx, 31, 0x332C84u);
    ctx->pc = 0x332C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332C7Cu;
    // 0x332c80: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333C00u, 0x332C7Cu, 0x332C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332C84u;
label_332c84:
    // 0x332c84: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x332c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x332c88: 0x14a0001f  bnez        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x332C88u;
    {
        const bool branch_taken_0x332c88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x332C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332C88u;
        // 0x332c8c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332c88) {
            ctx->pc = 0x332D08u;
            goto label_332d08;
        }
    }
    ctx->pc = 0x332C90u;
    // 0x332c90: 0x3c10003e  lui         $s0, 0x3E
    ctx->pc = 0x332c90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)62 << 16));
    // 0x332c94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x332c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332c98: 0x26109c90  addiu       $s0, $s0, -0x6370
    ctx->pc = 0x332c98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941840));
    // 0x332c9c: 0xc0ccce4  jal         func_333390
    ctx->pc = 0x332C9Cu;
    SET_GPR_U32(ctx, 31, 0x332CA4u);
    ctx->pc = 0x332CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332C9Cu;
    // 0x332ca0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333390u, 0x332C9Cu, 0x332CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332CA4u;
label_332ca4:
    // 0x332ca4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x332ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x332ca8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x332ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332cac: 0xc0c9832  jal         func_3260C8
    ctx->pc = 0x332CACu;
    SET_GPR_U32(ctx, 31, 0x332CB4u);
    ctx->pc = 0x332CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332CACu;
    // 0x332cb0: 0x24844400  addiu       $a0, $a0, 0x4400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x332CACu, 0x332CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332CB4u;
label_332cb4:
    // 0x332cb4: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x332CB4u;
    SET_GPR_U32(ctx, 31, 0x332CBCu);
    ctx->pc = 0x332CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332CB4u;
    // 0x332cb8: 0x34048300  ori         $a0, $zero, 0x8300 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33536);
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x332CB4u, 0x332CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332CBCu;
label_332cbc:
    // 0x332cbc: 0xc0e6368  jal         func_398DA0
    ctx->pc = 0x332CBCu;
    SET_GPR_U32(ctx, 31, 0x332CC4u);
    ctx->pc = 0x332CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332CBCu;
    // 0x332cc0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DA0u, 0x332CBCu, 0x332CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332CC4u;
label_332cc4:
    // 0x332cc4: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x332CC4u;
    SET_GPR_U32(ctx, 31, 0x332CCCu);
    ctx->pc = 0x332CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332CC4u;
    // 0x332cc8: 0x34048301  ori         $a0, $zero, 0x8301 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33537);
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x332CC4u, 0x332CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332CCCu;
label_332ccc:
    // 0x332ccc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x332cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332cd0: 0xc0cca0e  jal         func_332838
    ctx->pc = 0x332CD0u;
    SET_GPR_U32(ctx, 31, 0x332CD8u);
    ctx->pc = 0x332CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332CD0u;
    // 0x332cd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332838u, 0x332CD0u, 0x332CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332CD8u;
label_332cd8:
    // 0x332cd8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x332CD8u;
    {
        const bool branch_taken_0x332cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x332cd8) {
            ctx->pc = 0x332CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x332CD8u;
            // 0x332cdc: 0xa2200001  sb          $zero, 0x1($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x332D00u;
            goto label_332d00;
        }
    }
    ctx->pc = 0x332CE0u;
    // 0x332ce0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x332ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x332ce4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x332ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332ce8: 0xc0cca02  jal         func_332808
    ctx->pc = 0x332CE8u;
    SET_GPR_U32(ctx, 31, 0x332CF0u);
    ctx->pc = 0x332CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332CE8u;
    // 0x332cec: 0x24a54428  addiu       $a1, $a1, 0x4428 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332808u, 0x332CE8u, 0x332CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332CF0u;
label_332cf0:
    // 0x332cf0: 0xc0ccaf8  jal         func_332BE0
    ctx->pc = 0x332CF0u;
    SET_GPR_U32(ctx, 31, 0x332CF8u);
    ctx->pc = 0x332CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332CF0u;
    // 0x332cf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332BE0u, 0x332CF0u, 0x332CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332CF8u;
label_332cf8:
    // 0x332cf8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x332CF8u;
    {
        const bool branch_taken_0x332cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332CF8u;
        // 0x332cfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332cf8) {
            ctx->pc = 0x332D58u;
            goto label_332d58;
        }
    }
    ctx->pc = 0x332D00u;
label_332d00:
    // 0x332d00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x332D00u;
    {
        const bool branch_taken_0x332d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332D00u;
        // 0x332d04: 0x8e250024  lw          $a1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332d00) {
            ctx->pc = 0x332D10u;
            goto label_332d10;
        }
    }
    ctx->pc = 0x332D08u;
label_332d08:
    // 0x332d08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x332d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332d0c: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x332d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_332d10:
    // 0x332d10: 0x24a207ff  addiu       $v0, $a1, 0x7FF
    ctx->pc = 0x332d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2047));
    // 0x332d14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x332d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332d18: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x332d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x332d1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x332d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332d20: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x332d20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x332d24: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x332d24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x332d28: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x332d28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x332d2c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x332d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x332d30: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x332d30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x332d34: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x332d34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x332d38: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x332d38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x332d3c: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x332d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x332d40: 0x16840004  bne         $s4, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x332D40u;
    {
        const bool branch_taken_0x332d40 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        ctx->pc = 0x332D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332D40u;
        // 0x332d44: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332d40) {
            ctx->pc = 0x332D54u;
            goto label_332d54;
        }
    }
    ctx->pc = 0x332D48u;
    // 0x332d48: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x332d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x332d4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x332d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x332d50: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x332d50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_332d54:
    // 0x332d54: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x332d54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_332d58:
    // 0x332d58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x332d58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332d5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x332d5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x332d60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x332d60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332d64: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x332d64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x332d68: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x332d68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x332d6c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x332d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x332d70: 0x3e00008  jr          $ra
    ctx->pc = 0x332D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332D70u;
        // 0x332d74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332D78u;
}
