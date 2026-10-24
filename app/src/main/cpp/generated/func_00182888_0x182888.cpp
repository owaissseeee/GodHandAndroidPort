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

// Function: func_00182888
// Address: 0x182888 - 0x182908
void func_00182888_0x182888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00182888_0x182888");
#endif

    switch (ctx->pc) {
        case 0x18289cu: goto label_18289c;
        case 0x1828b8u: goto label_1828b8;
        case 0x1828f0u: goto label_1828f0;
        default: break;
    }

    ctx->pc = 0x182888u;

    // 0x182888: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18288c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18288cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x182890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x182894: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x182894u;
    SET_GPR_U32(ctx, 31, 0x18289Cu);
    ctx->pc = 0x182898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182894u;
    // 0x182898: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x182894u, 0x18289Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18289Cu;
label_18289c:
    // 0x18289c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x18289cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1828a0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1828a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1828a4: 0x24422a80  addiu       $v0, $v0, 0x2A80
    ctx->pc = 0x1828a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10880));
    // 0x1828a8: 0x26030600  addiu       $v1, $s0, 0x600
    ctx->pc = 0x1828a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    // 0x1828ac: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1828acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1828b0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1828b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1828b4: 0x0  nop
    ctx->pc = 0x1828b4u;
    // NOP
label_1828b8:
    // 0x1828b8: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1828b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1828bc: 0xf8600010  sqc2        $vf0, 0x10($v1)
    ctx->pc = 0x1828bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1828c0: 0xf8600020  sqc2        $vf0, 0x20($v1)
    ctx->pc = 0x1828c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1828c4: 0xf8600030  sqc2        $vf0, 0x30($v1)
    ctx->pc = 0x1828c4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1828c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1828c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1828cc: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1828CCu;
    {
        const bool branch_taken_0x1828cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1828D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1828CCu;
        // 0x1828d0: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1828cc) {
            ctx->pc = 0x1828B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1828b8;
        }
    }
    ctx->pc = 0x1828D4u;
    // 0x1828d4: 0x26040b10  addiu       $a0, $s0, 0xB10
    ctx->pc = 0x1828d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2832));
    // 0x1828d8: 0x26070600  addiu       $a3, $s0, 0x600
    ctx->pc = 0x1828d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    // 0x1828dc: 0x26080a60  addiu       $t0, $s0, 0xA60
    ctx->pc = 0x1828dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 2656));
    // 0x1828e0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1828e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1828e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1828e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1828e8: 0xc0ab48e  jal         func_2AD238
    ctx->pc = 0x1828E8u;
    SET_GPR_U32(ctx, 31, 0x1828F0u);
    ctx->pc = 0x1828ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1828E8u;
    // 0x1828ec: 0x24090007  addiu       $t1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD238u, 0x1828E8u, 0x1828F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1828F0u;
label_1828f0:
    // 0x1828f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1828f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1828f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1828f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1828f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1828f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1828fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1828FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1828FCu;
        // 0x182900: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1828FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182904u;
    // 0x182904: 0x0  nop
    ctx->pc = 0x182904u;
    // NOP
    ctx->pc = 0x182908u;
}
