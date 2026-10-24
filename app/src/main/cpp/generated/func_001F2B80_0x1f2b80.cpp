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

// Function: func_001F2B80
// Address: 0x1f2b80 - 0x1f2cf0
void func_001F2B80_0x1f2b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F2B80_0x1f2b80");
#endif

    switch (ctx->pc) {
        case 0x1f2bd4u: goto label_1f2bd4;
        case 0x1f2be4u: goto label_1f2be4;
        case 0x1f2bf4u: goto label_1f2bf4;
        case 0x1f2c04u: goto label_1f2c04;
        case 0x1f2c14u: goto label_1f2c14;
        case 0x1f2c24u: goto label_1f2c24;
        case 0x1f2c34u: goto label_1f2c34;
        case 0x1f2c90u: goto label_1f2c90;
        case 0x1f2ca0u: goto label_1f2ca0;
        case 0x1f2cb0u: goto label_1f2cb0;
        case 0x1f2cc0u: goto label_1f2cc0;
        default: break;
    }

    ctx->pc = 0x1f2b80u;

    // 0x1f2b80: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1f2b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1f2b84: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1f2b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1f2b88: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f2b88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b8c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1f2b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1f2b90: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1f2b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1f2b94: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f2b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b98: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1f2b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x1f2b9c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1f2b9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ba0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1f2ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1f2ba4: 0x267603c4  addiu       $s6, $s3, 0x3C4
    ctx->pc = 0x1f2ba4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 964));
    // 0x1f2ba8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1f2ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1f2bac: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1f2bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2bb0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f2bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1f2bb4: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x1f2bb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2bb8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1f2bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x1f2bbc: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1f2bbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2bc0: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1f2bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x1f2bc4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1f2bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2bc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f2bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f2bcc: 0xc0b5952  jal         func_2D6548
    ctx->pc = 0x1F2BCCu;
    SET_GPR_U32(ctx, 31, 0x1F2BD4u);
    ctx->pc = 0x1F2BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2BCCu;
    // 0x1f2bd0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6548u, 0x1F2BCCu, 0x1F2BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2BD4u;
label_1f2bd4:
    // 0x1f2bd4: 0x26770440  addiu       $s7, $s3, 0x440
    ctx->pc = 0x1f2bd4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1088));
    // 0x1f2bd8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1f2bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2bdc: 0xc0b5952  jal         func_2D6548
    ctx->pc = 0x1F2BDCu;
    SET_GPR_U32(ctx, 31, 0x1F2BE4u);
    ctx->pc = 0x1F2BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2BDCu;
    // 0x1f2be0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6548u, 0x1F2BDCu, 0x1F2BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2BE4u;
label_1f2be4:
    // 0x1f2be4: 0x267e04bc  addiu       $fp, $s3, 0x4BC
    ctx->pc = 0x1f2be4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 1212));
    // 0x1f2be8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f2be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2bec: 0xc0b5952  jal         func_2D6548
    ctx->pc = 0x1F2BECu;
    SET_GPR_U32(ctx, 31, 0x1F2BF4u);
    ctx->pc = 0x1F2BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2BECu;
    // 0x1f2bf0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6548u, 0x1F2BECu, 0x1F2BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2BF4u;
label_1f2bf4:
    // 0x1f2bf4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2bf8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f2bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f2bfc: 0xc07ca70  jal         func_1F29C0
    ctx->pc = 0x1F2BFCu;
    SET_GPR_U32(ctx, 31, 0x1F2C04u);
    ctx->pc = 0x1F2C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2BFCu;
    // 0x1f2c00: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29C0u, 0x1F2BFCu, 0x1F2C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C04u;
label_1f2c04:
    // 0x1f2c04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2c08: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1f2c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f2c0c: 0xc07ca70  jal         func_1F29C0
    ctx->pc = 0x1F2C0Cu;
    SET_GPR_U32(ctx, 31, 0x1F2C14u);
    ctx->pc = 0x1F2C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2C0Cu;
    // 0x1f2c10: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29C0u, 0x1F2C0Cu, 0x1F2C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C14u;
label_1f2c14:
    // 0x1f2c14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2c18: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1f2c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1f2c1c: 0xc07ca70  jal         func_1F29C0
    ctx->pc = 0x1F2C1Cu;
    SET_GPR_U32(ctx, 31, 0x1F2C24u);
    ctx->pc = 0x1F2C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2C1Cu;
    // 0x1f2c20: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29C0u, 0x1F2C1Cu, 0x1F2C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C24u;
label_1f2c24:
    // 0x1f2c24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f2c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2c28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2c2c: 0xc07ca70  jal         func_1F29C0
    ctx->pc = 0x1F2C2Cu;
    SET_GPR_U32(ctx, 31, 0x1F2C34u);
    ctx->pc = 0x1F2C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2C2Cu;
    // 0x1f2c30: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29C0u, 0x1F2C2Cu, 0x1F2C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C34u;
label_1f2c34:
    // 0x1f2c34: 0x12400023  beqz        $s2, . + 4 + (0x23 << 2)
    ctx->pc = 0x1F2C34u;
    {
        const bool branch_taken_0x1f2c34 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C34u;
        // 0x1f2c38: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2c34) {
            ctx->pc = 0x1F2CC4u;
            goto label_1f2cc4;
        }
    }
    ctx->pc = 0x1F2C3Cu;
    // 0x1f2c3c: 0x16800022  bnez        $s4, . + 4 + (0x22 << 2)
    ctx->pc = 0x1F2C3Cu;
    {
        const bool branch_taken_0x1f2c3c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C3Cu;
        // 0x1f2c40: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2c3c) {
            ctx->pc = 0x1F2CC8u;
            goto label_1f2cc8;
        }
    }
    ctx->pc = 0x1F2C44u;
    // 0x1f2c44: 0x2aa2000a  slti        $v0, $s5, 0xA
    ctx->pc = 0x1f2c44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1f2c48: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1F2C48u;
    {
        const bool branch_taken_0x1f2c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C48u;
        // 0x1f2c4c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2c48) {
            ctx->pc = 0x1F2CC8u;
            goto label_1f2cc8;
        }
    }
    ctx->pc = 0x1F2C50u;
    // 0x1f2c50: 0x2410ff00  addiu       $s0, $zero, -0x100
    ctx->pc = 0x1f2c50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1f2c54: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f2c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f2c58: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1f2c58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x1f2c5c: 0x708024  and         $s0, $v1, $s0
    ctx->pc = 0x1f2c5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x1f2c60: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1f2c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1f2c64: 0x3610008a  ori         $s0, $s0, 0x8A
    ctx->pc = 0x1f2c64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)138);
    // 0x1f2c68: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1f2c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1f2c6c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1f2c6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1f2c70: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1f2c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2c74: 0x36102600  ori         $s0, $s0, 0x2600
    ctx->pc = 0x1f2c74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)9728);
    // 0x1f2c78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f2c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2c7c: 0x3210268a  andi        $s0, $s0, 0x268A
    ctx->pc = 0x1f2c7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)9866);
    // 0x1f2c80: 0x2058025  or          $s0, $s0, $a1
    ctx->pc = 0x1f2c80u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
    // 0x1f2c84: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f2c84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f2c88: 0xc0b5a26  jal         func_2D6898
    ctx->pc = 0x1F2C88u;
    SET_GPR_U32(ctx, 31, 0x1F2C90u);
    ctx->pc = 0x1F2C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2C88u;
    // 0x1f2c8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6898u, 0x1F2C88u, 0x1F2C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C90u;
label_1f2c90:
    // 0x1f2c90: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1f2c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2c94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2c98: 0xc0b5a26  jal         func_2D6898
    ctx->pc = 0x1F2C98u;
    SET_GPR_U32(ctx, 31, 0x1F2CA0u);
    ctx->pc = 0x1F2C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2C98u;
    // 0x1f2c9c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6898u, 0x1F2C98u, 0x1F2CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2CA0u;
label_1f2ca0:
    // 0x1f2ca0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1f2ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ca4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ca8: 0xc0b5a26  jal         func_2D6898
    ctx->pc = 0x1F2CA8u;
    SET_GPR_U32(ctx, 31, 0x1F2CB0u);
    ctx->pc = 0x1F2CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2CA8u;
    // 0x1f2cac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6898u, 0x1F2CA8u, 0x1F2CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2CB0u;
label_1f2cb0:
    // 0x1f2cb0: 0x26640538  addiu       $a0, $s3, 0x538
    ctx->pc = 0x1f2cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1336));
    // 0x1f2cb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2cb8: 0xc0b5a26  jal         func_2D6898
    ctx->pc = 0x1F2CB8u;
    SET_GPR_U32(ctx, 31, 0x1F2CC0u);
    ctx->pc = 0x1F2CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2CB8u;
    // 0x1f2cbc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6898u, 0x1F2CB8u, 0x1F2CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2CC0u;
label_1f2cc0:
    // 0x1f2cc0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1f2cc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1f2cc4:
    // 0x1f2cc4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1f2cc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1f2cc8:
    // 0x1f2cc8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1f2cc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f2ccc: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1f2cccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f2cd0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1f2cd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f2cd4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f2cd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f2cd8: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1f2cd8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f2cdc: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1f2cdcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f2ce0: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1f2ce0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f2ce4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f2ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2CE8u;
        // 0x1f2cec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2CF0u;
}
