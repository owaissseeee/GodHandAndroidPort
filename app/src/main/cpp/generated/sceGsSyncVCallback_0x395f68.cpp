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

// Function: sceGsSyncVCallback
// Address: 0x395f68 - 0x396008
void sceGsSyncVCallback_0x395f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceGsSyncVCallback_0x395f68");
#endif

    switch (ctx->pc) {
        case 0x395f84u: goto label_395f84;
        case 0x395f98u: goto label_395f98;
        case 0x395fa4u: goto label_395fa4;
        case 0x395fc0u: goto label_395fc0;
        case 0x395fccu: goto label_395fcc;
        case 0x395fe0u: goto label_395fe0;
        case 0x395fecu: goto label_395fec;
        default: break;
    }

    ctx->pc = 0x395f68u;

    // 0x395f68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x395f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x395f6c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x395f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x395f70: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x395f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x395f74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x395f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x395f78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x395f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x395f7c: 0xc0e54e2  jal         func_395388
    ctx->pc = 0x395F7Cu;
    SET_GPR_U32(ctx, 31, 0x395F84u);
    ctx->pc = 0x395F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395F7Cu;
    // 0x395f80: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395388u, 0x395F7Cu, 0x395F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395F84u;
label_395f84:
    // 0x395f84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x395f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395f88: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x395F88u;
    {
        const bool branch_taken_0x395f88 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x395F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F88u;
        // 0x395f8c: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395f88) {
            ctx->pc = 0x395FB0u;
            goto label_395fb0;
        }
    }
    ctx->pc = 0x395F90u;
    // 0x395f90: 0xc0ec1b6  jal         func_3B06D8
    ctx->pc = 0x395F90u;
    SET_GPR_U32(ctx, 31, 0x395F98u);
    ctx->pc = 0x395F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395F90u;
    // 0x395f94: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B06D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B06D8u, 0x395F90u, 0x395F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395F98u;
label_395f98:
    // 0x395f98: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x395f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x395f9c: 0xc0ebe68  jal         func_3AF9A0
    ctx->pc = 0x395F9Cu;
    SET_GPR_U32(ctx, 31, 0x395FA4u);
    ctx->pc = 0x395FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395F9Cu;
    // 0x395fa0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF9A0u, 0x395F9Cu, 0x395FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395FA4u;
label_395fa4:
    // 0x395fa4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x395fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x395fa8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x395FA8u;
    {
        const bool branch_taken_0x395fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395FA8u;
        // 0x395fac: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395fa8) {
            ctx->pc = 0x395FECu;
            goto label_395fec;
        }
    }
    ctx->pc = 0x395FB0u;
label_395fb0:
    // 0x395fb0: 0x52400007  beql        $s2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x395FB0u;
    {
        const bool branch_taken_0x395fb0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x395fb0) {
            ctx->pc = 0x395FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395FB0u;
            // 0x395fb4: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395FD0u;
            goto label_395fd0;
        }
    }
    ctx->pc = 0x395FB8u;
    // 0x395fb8: 0xc0ec1b6  jal         func_3B06D8
    ctx->pc = 0x395FB8u;
    SET_GPR_U32(ctx, 31, 0x395FC0u);
    ctx->pc = 0x395FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395FB8u;
    // 0x395fbc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B06D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B06D8u, 0x395FB8u, 0x395FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395FC0u;
label_395fc0:
    // 0x395fc0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x395fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x395fc4: 0xc0ebe68  jal         func_3AF9A0
    ctx->pc = 0x395FC4u;
    SET_GPR_U32(ctx, 31, 0x395FCCu);
    ctx->pc = 0x395FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395FC4u;
    // 0x395fc8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF9A0u, 0x395FC4u, 0x395FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395FCCu;
label_395fcc:
    // 0x395fcc: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x395fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
label_395fd0:
    // 0x395fd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x395fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395fd4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x395fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x395fd8: 0xc0ebe60  jal         func_3AF980
    ctx->pc = 0x395FD8u;
    SET_GPR_U32(ctx, 31, 0x395FE0u);
    ctx->pc = 0x395FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395FD8u;
    // 0x395fdc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF980u, 0x395FD8u, 0x395FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395FE0u;
label_395fe0:
    // 0x395fe0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x395fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x395fe4: 0xc0ec1d0  jal         func_3B0740
    ctx->pc = 0x395FE4u;
    SET_GPR_U32(ctx, 31, 0x395FECu);
    ctx->pc = 0x395FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395FE4u;
    // 0x395fe8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0740u, 0x395FE4u, 0x395FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395FECu;
label_395fec:
    // 0x395fec: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x395fecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395ff0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x395ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x395ff4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x395ff4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x395ff8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x395ff8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x395ffc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x395ffcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396000: 0x3e00008  jr          $ra
    ctx->pc = 0x396000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396000u;
        // 0x396004: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396008u;
}
