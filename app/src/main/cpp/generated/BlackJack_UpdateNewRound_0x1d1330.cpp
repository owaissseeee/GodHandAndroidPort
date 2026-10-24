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

// Function: BlackJack_UpdateNewRound
// Address: 0x1d1330 - 0x1d13b8
void BlackJack_UpdateNewRound_0x1d1330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BlackJack_UpdateNewRound_0x1d1330");
#endif

    switch (ctx->pc) {
        case 0x1d1354u: goto label_1d1354;
        case 0x1d135cu: goto label_1d135c;
        case 0x1d1368u: goto label_1d1368;
        case 0x1d1374u: goto label_1d1374;
        case 0x1d1380u: goto label_1d1380;
        default: break;
    }

    ctx->pc = 0x1d1330u;

    // 0x1d1330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d1330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d1334: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d1334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d1338: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d133c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d133cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1340: 0xae001814  sw          $zero, 0x1814($s0)
    ctx->pc = 0x1d1340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6164), GPR_U32(ctx, 0));
    // 0x1d1344: 0xae001818  sw          $zero, 0x1818($s0)
    ctx->pc = 0x1d1344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6168), GPR_U32(ctx, 0));
    // 0x1d1348: 0xa60017fc  sh          $zero, 0x17FC($s0)
    ctx->pc = 0x1d1348u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6140), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d134c: 0xc07519c  jal         func_1D4670
    ctx->pc = 0x1D134Cu;
    SET_GPR_U32(ctx, 31, 0x1D1354u);
    ctx->pc = 0x1D1350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D134Cu;
    // 0x1d1350: 0xa60017fe  sh          $zero, 0x17FE($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 6142), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4670u, 0x1D134Cu, 0x1D1354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1354u;
label_1d1354:
    // 0x1d1354: 0xc0754a8  jal         func_1D52A0
    ctx->pc = 0x1D1354u;
    SET_GPR_U32(ctx, 31, 0x1D135Cu);
    ctx->pc = 0x1D1358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1354u;
    // 0x1d1358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D52A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52A0u, 0x1D1354u, 0x1D135Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D135Cu;
label_1d135c:
    // 0x1d135c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d135cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1360: 0xc0755d8  jal         func_1D5760
    ctx->pc = 0x1D1360u;
    SET_GPR_U32(ctx, 31, 0x1D1368u);
    ctx->pc = 0x1D1364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1360u;
    // 0x1d1364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5760u, 0x1D1360u, 0x1D1368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1368u;
label_1d1368:
    // 0x1d1368: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1d1368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1d136c: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x1D136Cu;
    SET_GPR_U32(ctx, 31, 0x1D1374u);
    ctx->pc = 0x1D1370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D136Cu;
    // 0x1d1370: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x1D136Cu, 0x1D1374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1374u;
label_1d1374:
    // 0x1d1374: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d1374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1378: 0xc0755e0  jal         func_1D5780
    ctx->pc = 0x1D1378u;
    SET_GPR_U32(ctx, 31, 0x1D1380u);
    ctx->pc = 0x1D137Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1378u;
    // 0x1d137c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5780u, 0x1D1378u, 0x1D1380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1380u;
label_1d1380:
    // 0x1d1380: 0x9e021800  lwu         $v0, 0x1800($s0)
    ctx->pc = 0x1d1380u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 6144)));
    // 0x1d1384: 0x210fb  dsra        $v0, $v0, 3
    ctx->pc = 0x1d1384u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 3);
    // 0x1d1388: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d1388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d138c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D138Cu;
    {
        const bool branch_taken_0x1d138c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D138Cu;
        // 0x1d1390: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d138c) {
            ctx->pc = 0x1D1398u;
            goto label_1d1398;
        }
    }
    ctx->pc = 0x1D1394u;
    // 0x1d1394: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1398:
    // 0x1d1398: 0xae001808  sw          $zero, 0x1808($s0)
    ctx->pc = 0x1d1398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 0));
    // 0x1d139c: 0xae021804  sw          $v0, 0x1804($s0)
    ctx->pc = 0x1d139cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6148), GPR_U32(ctx, 2));
    // 0x1d13a0: 0xae001800  sw          $zero, 0x1800($s0)
    ctx->pc = 0x1d13a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6144), GPR_U32(ctx, 0));
    // 0x1d13a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d13a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d13a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d13a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d13ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D13ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D13B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D13ACu;
        // 0x1d13b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D13ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D13B4u;
    // 0x1d13b4: 0x0  nop
    ctx->pc = 0x1d13b4u;
    // NOP
    ctx->pc = 0x1d13b8u;
}
