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

// Function: func_002D4B08
// Address: 0x2d4b08 - 0x2d4c20
void func_002D4B08_0x2d4b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D4B08_0x2d4b08");
#endif

    switch (ctx->pc) {
        case 0x2d4b88u: goto label_2d4b88;
        case 0x2d4bb8u: goto label_2d4bb8;
        case 0x2d4bccu: goto label_2d4bcc;
        default: break;
    }

    ctx->pc = 0x2d4b08u;

    // 0x2d4b08: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2d4b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2d4b0c: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x2d4b0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4b10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d4b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d4b14: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d4b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d4b18: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2d4b18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4b1c: 0x4a382a  slt         $a3, $v0, $t2
    ctx->pc = 0x2d4b1cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x2d4b20: 0x26a6000f  addiu       $a2, $s5, 0xF
    ctx->pc = 0x2d4b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 15));
    // 0x2d4b24: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x2d4b24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2d4b28: 0x2a2300b  movn        $a2, $s5, $v0
    ctx->pc = 0x2d4b28u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 21));
    // 0x2d4b2c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x2d4b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x2d4b30: 0x2543000f  addiu       $v1, $t2, 0xF
    ctx->pc = 0x2d4b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 15));
    // 0x2d4b34: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2d4b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x2d4b38: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2d4b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x2d4b3c: 0x147180b  movn        $v1, $t2, $a3
    ctx->pc = 0x2d4b3cu;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 10));
    // 0x2d4b40: 0x6f103  sra         $fp, $a2, 4
    ctx->pc = 0x2d4b40u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 6), 4));
    // 0x2d4b44: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2d4b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2d4b48: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2d4b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2d4b4c: 0x3b103  sra         $s6, $v1, 4
    ctx->pc = 0x2d4b4cu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2d4b50: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2d4b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2d4b54: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2d4b54u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4b58: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2d4b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2d4b5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d4b5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4b60: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2d4b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2d4b64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d4b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d4b68: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2d4b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2d4b6c: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x2d4b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x2d4b70: 0x1bc0001e  blez        $fp, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D4B70u;
    {
        const bool branch_taken_0x2d4b70 = (GPR_S64(ctx, 30) <= 0);
        ctx->pc = 0x2D4B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4B70u;
        // 0x2d4b74: 0xafa90008  sw          $t1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4b70) {
            ctx->pc = 0x2D4BECu;
            goto label_2d4bec;
        }
    }
    ctx->pc = 0x2D4B78u;
    // 0x2d4b78: 0xa5180  sll         $t2, $t2, 6
    ctx->pc = 0x2d4b78u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 6));
    // 0x2d4b7c: 0xafaa000c  sw          $t2, 0xC($sp)
    ctx->pc = 0x2d4b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 10));
    // 0x2d4b80: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2d4b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d4b84: 0x0  nop
    ctx->pc = 0x2d4b84u;
    // NOP
label_2d4b88:
    // 0x2d4b88: 0x61180  sll         $v0, $a2, 6
    ctx->pc = 0x2d4b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x2d4b8c: 0x24d40001  addiu       $s4, $a2, 0x1
    ctx->pc = 0x2d4b8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2d4b90: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2d4b90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d4b94: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d4b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4b98: 0x400013  mtlo        $v0
    ctx->pc = 0x2d4b98u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x2d4b9c: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x2d4b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2d4ba0: 0x1ac0000e  blez        $s6, . + 4 + (0xE << 2)
    ctx->pc = 0x2D4BA0u;
    {
        const bool branch_taken_0x2d4ba0 = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x2D4BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4BA0u;
        // 0x2d4ba4: 0x70468800  madd        $s1, $v0, $a2 (Delay Slot)
        { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4ba0) {
            ctx->pc = 0x2D4BDCu;
            goto label_2d4bdc;
        }
    }
    ctx->pc = 0x2D4BA8u;
    // 0x2d4ba8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d4ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d4bac: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x2d4bacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4bb0: 0x39900  sll         $s3, $v1, 4
    ctx->pc = 0x2d4bb0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2d4bb4: 0x0  nop
    ctx->pc = 0x2d4bb4u;
    // NOP
label_2d4bb8:
    // 0x2d4bb8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d4bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4bbc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2d4bbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4bc0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d4bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4bc4: 0xc0b5308  jal         func_2D4C20
    ctx->pc = 0x2D4BC4u;
    SET_GPR_U32(ctx, 31, 0x2D4BCCu);
    ctx->pc = 0x2D4BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4BC4u;
    // 0x2d4bc8: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4C20u, 0x2D4BC4u, 0x2D4BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4BCCu;
label_2d4bcc:
    // 0x2d4bcc: 0x26310400  addiu       $s1, $s1, 0x400
    ctx->pc = 0x2d4bccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
    // 0x2d4bd0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2d4bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2d4bd4: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D4BD4u;
    {
        const bool branch_taken_0x2d4bd4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4BD4u;
        // 0x2d4bd8: 0x2539021  addu        $s2, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4bd4) {
            ctx->pc = 0x2D4BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d4bb8;
        }
    }
    ctx->pc = 0x2D4BDCu;
label_2d4bdc:
    // 0x2d4bdc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2d4bdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4be0: 0xde102a  slt         $v0, $a2, $fp
    ctx->pc = 0x2d4be0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x2d4be4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2D4BE4u;
    {
        const bool branch_taken_0x2d4be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4BE4u;
        // 0x2d4be8: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4be4) {
            ctx->pc = 0x2D4B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d4b88;
        }
    }
    ctx->pc = 0x2D4BECu;
label_2d4bec:
    // 0x2d4bec: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2d4becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d4bf0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2d4bf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d4bf4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2d4bf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d4bf8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2d4bf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d4bfc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2d4bfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d4c00: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d4c00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d4c04: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2d4c04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d4c08: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2d4c08u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d4c0c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x2d4c0cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4c10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d4c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4c14: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4C14u;
        // 0x2d4c18: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4C1Cu;
    // 0x2d4c1c: 0x0  nop
    ctx->pc = 0x2d4c1cu;
    // NOP
    ctx->pc = 0x2d4c20u;
}
