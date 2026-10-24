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

// Function: func_0037FB70
// Address: 0x37fb70 - 0x37fc28
void func_0037FB70_0x37fb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037FB70_0x37fb70");
#endif

    switch (ctx->pc) {
        case 0x37fba0u: goto label_37fba0;
        case 0x37fbacu: goto label_37fbac;
        case 0x37fbc0u: goto label_37fbc0;
        case 0x37fbccu: goto label_37fbcc;
        case 0x37fbd8u: goto label_37fbd8;
        case 0x37fbe4u: goto label_37fbe4;
        case 0x37fbf0u: goto label_37fbf0;
        case 0x37fc04u: goto label_37fc04;
        default: break;
    }

    ctx->pc = 0x37fb70u;

    // 0x37fb70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x37fb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x37fb74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37fb74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fb78: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x37fb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x37fb7c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x37fb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x37fb80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37fb80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fb84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37fb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37fb88: 0x26300348  addiu       $s0, $s1, 0x348
    ctx->pc = 0x37fb88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 840));
    // 0x37fb8c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x37fb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x37fb90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37fb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37fb94: 0x26330318  addiu       $s3, $s1, 0x318
    ctx->pc = 0x37fb94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 792));
    // 0x37fb98: 0xc0cb734  jal         func_32DCD0
    ctx->pc = 0x37FB98u;
    SET_GPR_U32(ctx, 31, 0x37FBA0u);
    ctx->pc = 0x37FB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FB98u;
    // 0x37fb9c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DCD0u, 0x37FB98u, 0x37FBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FBA0u;
label_37fba0:
    // 0x37fba0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x37fba0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fba4: 0xc0ca7e6  jal         func_329F98
    ctx->pc = 0x37FBA4u;
    SET_GPR_U32(ctx, 31, 0x37FBACu);
    ctx->pc = 0x37FBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FBA4u;
    // 0x37fba8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329F98u, 0x37FBA4u, 0x37FBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FBACu;
label_37fbac:
    // 0x37fbac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37fbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37fbb0: 0x54430017  bnel        $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x37FBB0u;
    {
        const bool branch_taken_0x37fbb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x37fbb0) {
            ctx->pc = 0x37FBB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37FBB0u;
            // 0x37fbb4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37FC10u;
            goto label_37fc10;
        }
    }
    ctx->pc = 0x37FBB8u;
    // 0x37fbb8: 0xc0cb846  jal         func_32E118
    ctx->pc = 0x37FBB8u;
    SET_GPR_U32(ctx, 31, 0x37FBC0u);
    ctx->pc = 0x37FBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FBB8u;
    // 0x37fbbc: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E118u, 0x37FBB8u, 0x37FBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FBC0u;
label_37fbc0:
    // 0x37fbc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37fbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fbc4: 0xc0ca94c  jal         func_32A530
    ctx->pc = 0x37FBC4u;
    SET_GPR_U32(ctx, 31, 0x37FBCCu);
    ctx->pc = 0x37FBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FBC4u;
    // 0x37fbc8: 0xae220348  sw          $v0, 0x348($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A530u, 0x37FBC4u, 0x37FBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FBCCu;
label_37fbcc:
    // 0x37fbcc: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x37fbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x37fbd0: 0xc0cb87c  jal         func_32E1F0
    ctx->pc = 0x37FBD0u;
    SET_GPR_U32(ctx, 31, 0x37FBD8u);
    ctx->pc = 0x37FBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FBD0u;
    // 0x37fbd4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E1F0u, 0x37FBD0u, 0x37FBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FBD8u;
label_37fbd8:
    // 0x37fbd8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x37fbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x37fbdc: 0xc0cb8a0  jal         func_32E280
    ctx->pc = 0x37FBDCu;
    SET_GPR_U32(ctx, 31, 0x37FBE4u);
    ctx->pc = 0x37FBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FBDCu;
    // 0x37fbe0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E280u, 0x37FBDCu, 0x37FBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FBE4u;
label_37fbe4:
    // 0x37fbe4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x37fbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x37fbe8: 0xc0cb8c4  jal         func_32E310
    ctx->pc = 0x37FBE8u;
    SET_GPR_U32(ctx, 31, 0x37FBF0u);
    ctx->pc = 0x37FBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FBE8u;
    // 0x37fbec: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E310u, 0x37FBE8u, 0x37FBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FBF0u;
label_37fbf0:
    // 0x37fbf0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x37fbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x37fbf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37fbf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fbf8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x37fbf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fbfc: 0xc0e0758  jal         func_381D60
    ctx->pc = 0x37FBFCu;
    SET_GPR_U32(ctx, 31, 0x37FC04u);
    ctx->pc = 0x37FC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FBFCu;
    // 0x37fc00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381D60u, 0x37FBFCu, 0x37FC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FC04u;
label_37fc04:
    // 0x37fc04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37fc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37fc08: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x37fc08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x37fc0c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x37fc0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_37fc10:
    // 0x37fc10: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x37fc10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37fc14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37fc14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37fc18: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x37fc18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37fc1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37fc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37fc20: 0x3e00008  jr          $ra
    ctx->pc = 0x37FC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FC20u;
        // 0x37fc24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37FC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37FC28u;
}
