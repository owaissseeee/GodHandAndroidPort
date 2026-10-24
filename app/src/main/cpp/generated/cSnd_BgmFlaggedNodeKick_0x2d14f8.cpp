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

// Function: cSnd_BgmFlaggedNodeKick
// Address: 0x2d14f8 - 0x2d1578
void cSnd_BgmFlaggedNodeKick_0x2d14f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_BgmFlaggedNodeKick_0x2d14f8");
#endif

    switch (ctx->pc) {
        case 0x2d1528u: goto label_2d1528;
        case 0x2d1550u: goto label_2d1550;
        default: break;
    }

    ctx->pc = 0x2d14f8u;

    // 0x2d14f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d14f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d14fc: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2d14fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2d1500: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d1500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d1504: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d1504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2d1508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d150c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d150cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2d1510: 0x8c900018  lw          $s0, 0x18($a0)
    ctx->pc = 0x2d1510u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2d1514: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D1514u;
    {
        const bool branch_taken_0x2d1514 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1514u;
        // 0x2d1518: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1514) {
            ctx->pc = 0x2D155Cu;
            goto label_2d155c;
        }
    }
    ctx->pc = 0x2D151Cu;
    // 0x2d151c: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x2d151cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d1520: 0x3c110010  lui         $s1, 0x10
    ctx->pc = 0x2d1520u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16 << 16));
    // 0x2d1524: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x2d1524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_2d1528:
    // 0x2d1528: 0x5052000a  beql        $v0, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x2D1528u;
    {
        const bool branch_taken_0x2d1528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2d1528) {
            ctx->pc = 0x2D152Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1528u;
            // 0x2d152c: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1554u;
            goto label_2d1554;
        }
    }
    ctx->pc = 0x2D1530u;
    // 0x2d1530: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x2d1530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x2d1534: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x2d1534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x2d1538: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1538u;
    {
        const bool branch_taken_0x2d1538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1538u;
        // 0x2d153c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1538) {
            ctx->pc = 0x2D1550u;
            goto label_2d1550;
        }
    }
    ctx->pc = 0x2D1540u;
    // 0x2d1540: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2d1540u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2d1544: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x2d1544u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
    // 0x2d1548: 0xc0b3552  jal         func_2CD548
    ctx->pc = 0x2D1548u;
    SET_GPR_U32(ctx, 31, 0x2D1550u);
    ctx->pc = 0x2D154Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1548u;
    // 0x2d154c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD548u, 0x2D1548u, 0x2D1550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1550u;
label_2d1550:
    // 0x2d1550: 0x8e100088  lw          $s0, 0x88($s0)
    ctx->pc = 0x2d1550u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_2d1554:
    // 0x2d1554: 0x5600fff4  bnel        $s0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x2D1554u;
    {
        const bool branch_taken_0x2d1554 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1554) {
            ctx->pc = 0x2D1558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1554u;
            // 0x2d1558: 0x8e0200b0  lw          $v0, 0xB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1528;
        }
    }
    ctx->pc = 0x2D155Cu;
label_2d155c:
    // 0x2d155c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d155cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1560: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d1560u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1564: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d1564u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d156c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2d156cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d1570: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1570u;
        // 0x2d1574: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1578u;
}
