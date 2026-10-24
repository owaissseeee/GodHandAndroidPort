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

// Function: __cp_push_exception
// Address: 0x321378 - 0x321408
void ps2___cp_push_exception_0x321378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___cp_push_exception_0x321378");
#endif

    switch (ctx->pc) {
        case 0x3213a4u: goto label_3213a4;
        case 0x3213e0u: goto label_3213e0;
        default: break;
    }

    ctx->pc = 0x321378u;

    // 0x321378: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x321378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32137c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x32137cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x321380: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x321380u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321384: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x321384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x321388: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x321388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x32138c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x32138cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321390: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x321390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321394: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x321394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x321398: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x321398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x32139c: 0xc0c84b0  jal         func_3212C0
    ctx->pc = 0x32139Cu;
    SET_GPR_U32(ctx, 31, 0x3213A4u);
    ctx->pc = 0x3213A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32139Cu;
    // 0x3213a0: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3212C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3212C0u, 0x32139Cu, 0x3213A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3213A4u;
label_3213a4:
    // 0x3213a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3213a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3213a8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3213a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3213ac: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x3213acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x3213b0: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x3213b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x3213b4: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x3213b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x3213b8: 0x24421308  addiu       $v0, $v0, 0x1308
    ctx->pc = 0x3213b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4872));
    // 0x3213bc: 0xae130028  sw          $s3, 0x28($s0)
    ctx->pc = 0x3213bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 19));
    // 0x3213c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3213c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3213c4: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x3213c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
    // 0x3213c8: 0xfe000020  sd          $zero, 0x20($s0)
    ctx->pc = 0x3213c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 0));
    // 0x3213cc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x3213ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x3213d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3213d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3213d4: 0xa6040004  sh          $a0, 0x4($s0)
    ctx->pc = 0x3213d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x3213d8: 0xc0c80d8  jal         func_320360
    ctx->pc = 0x3213D8u;
    SET_GPR_U32(ctx, 31, 0x3213E0u);
    ctx->pc = 0x3213DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3213D8u;
    // 0x3213dc: 0xa6030006  sh          $v1, 0x6($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320360u, 0x3213D8u, 0x3213E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3213E0u;
label_3213e0:
    // 0x3213e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3213e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3213e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3213e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3213e8: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x3213e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x3213ec: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x3213ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x3213f0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3213f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3213f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3213f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3213f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3213f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3213fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3213fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321400: 0x3e00008  jr          $ra
    ctx->pc = 0x321400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321400u;
        // 0x321404: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321408u;
}
