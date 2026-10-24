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

// Function: cEmManage_reset
// Address: 0x290110 - 0x290230
void cEmManage_reset_0x290110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_reset_0x290110");
#endif

    switch (ctx->pc) {
        case 0x290130u: goto label_290130;
        case 0x290138u: goto label_290138;
        case 0x29016cu: goto label_29016c;
        case 0x2901c0u: goto label_2901c0;
        case 0x2901e0u: goto label_2901e0;
        default: break;
    }

    ctx->pc = 0x290110u;

    // 0x290110: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x290110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x290114: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x290114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x290118: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x290118u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29011c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x29011cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x290120: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x290120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x290124: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x290124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x290128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29012c: 0x26320500  addiu       $s2, $s1, 0x500
    ctx->pc = 0x29012cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1280));
label_290130:
    // 0x290130: 0xc0a400a  jal         func_290028
    ctx->pc = 0x290130u;
    SET_GPR_U32(ctx, 31, 0x290138u);
    ctx->pc = 0x290134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290130u;
    // 0x290134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290028u, 0x290130u, 0x290138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290138u;
label_290138:
    // 0x290138: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x290138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x29013c: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x29013cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x290140: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x290140u;
    {
        const bool branch_taken_0x290140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290140) {
            ctx->pc = 0x290130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290130;
        }
    }
    ctx->pc = 0x290148u;
    // 0x290148: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x290148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29014c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29014cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290150: 0xae200500  sw          $zero, 0x500($s1)
    ctx->pc = 0x290150u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1280), GPR_U32(ctx, 0));
    // 0x290154: 0xae200504  sw          $zero, 0x504($s1)
    ctx->pc = 0x290154u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1284), GPR_U32(ctx, 0));
    // 0x290158: 0xae200508  sw          $zero, 0x508($s1)
    ctx->pc = 0x290158u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1288), GPR_U32(ctx, 0));
    // 0x29015c: 0xae20050c  sw          $zero, 0x50C($s1)
    ctx->pc = 0x29015cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1292), GPR_U32(ctx, 0));
    // 0x290160: 0xae20055c  sw          $zero, 0x55C($s1)
    ctx->pc = 0x290160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1372), GPR_U32(ctx, 0));
    // 0x290164: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x290164u;
    SET_GPR_U32(ctx, 31, 0x29016Cu);
    ctx->pc = 0x290168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290164u;
    // 0x290168: 0xe6200548  swc1        $f0, 0x548($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1352), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x290164u, 0x29016Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29016Cu;
label_29016c:
    // 0x29016c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x29016cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x290170: 0x26260574  addiu       $a2, $s1, 0x574
    ctx->pc = 0x290170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1396));
    // 0x290174: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x290174u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x290178: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x290178u;
    {
        const bool branch_taken_0x290178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x290178) {
            ctx->pc = 0x29017Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290178u;
            // 0x29017c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x290180u;
            goto label_290180;
        }
    }
    ctx->pc = 0x290180u;
label_290180:
    // 0x290180: 0xa220053e  sb          $zero, 0x53E($s1)
    ctx->pc = 0x290180u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1342), (uint8_t)GPR_U32(ctx, 0));
    // 0x290184: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x290184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290188: 0xa2200540  sb          $zero, 0x540($s1)
    ctx->pc = 0x290188u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1344), (uint8_t)GPR_U32(ctx, 0));
    // 0x29018c: 0x262305ac  addiu       $v1, $s1, 0x5AC
    ctx->pc = 0x29018cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1452));
    // 0x290190: 0xa2200541  sb          $zero, 0x541($s1)
    ctx->pc = 0x290190u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1345), (uint8_t)GPR_U32(ctx, 0));
    // 0x290194: 0xae200560  sw          $zero, 0x560($s1)
    ctx->pc = 0x290194u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 0));
    // 0x290198: 0xae200564  sw          $zero, 0x564($s1)
    ctx->pc = 0x290198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 0));
    // 0x29019c: 0xae200568  sw          $zero, 0x568($s1)
    ctx->pc = 0x29019cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1384), GPR_U32(ctx, 0));
    // 0x2901a0: 0xae20056c  sw          $zero, 0x56C($s1)
    ctx->pc = 0x2901a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1388), GPR_U32(ctx, 0));
    // 0x2901a4: 0xae200570  sw          $zero, 0x570($s1)
    ctx->pc = 0x2901a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1392), GPR_U32(ctx, 0));
    // 0x2901a8: 0xae200588  sw          $zero, 0x588($s1)
    ctx->pc = 0x2901a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1416), GPR_U32(ctx, 0));
    // 0x2901ac: 0xae20058c  sw          $zero, 0x58C($s1)
    ctx->pc = 0x2901acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1420), GPR_U32(ctx, 0));
    // 0x2901b0: 0xae200590  sw          $zero, 0x590($s1)
    ctx->pc = 0x2901b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1424), GPR_U32(ctx, 0));
    // 0x2901b4: 0xae200594  sw          $zero, 0x594($s1)
    ctx->pc = 0x2901b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1428), GPR_U32(ctx, 0));
    // 0x2901b8: 0x2010  mfhi        $a0
    ctx->pc = 0x2901b8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2901bc: 0xa224053f  sb          $a0, 0x53F($s1)
    ctx->pc = 0x2901bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1343), (uint8_t)GPR_U32(ctx, 4));
label_2901c0:
    // 0x2901c0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2901c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2901c4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2901c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2901c8: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x2901c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2901cc: 0x0  nop
    ctx->pc = 0x2901ccu;
    // NOP
    // 0x2901d0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2901D0u;
    {
        const bool branch_taken_0x2901d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2901D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2901D0u;
        // 0x2901d4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2901d0) {
            ctx->pc = 0x2901C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2901c0;
        }
    }
    ctx->pc = 0x2901D8u;
    // 0x2901d8: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2901d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2901dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2901dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2901e0:
    // 0x2901e0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2901e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2901e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2901e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2901e8: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x2901e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2901ec: 0x0  nop
    ctx->pc = 0x2901ecu;
    // NOP
    // 0x2901f0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2901F0u;
    {
        const bool branch_taken_0x2901f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2901F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2901F0u;
        // 0x2901f4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2901f0) {
            ctx->pc = 0x2901E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2901e0;
        }
    }
    ctx->pc = 0x2901F8u;
    // 0x2901f8: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x2901f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x2901fc: 0xa2200518  sb          $zero, 0x518($s1)
    ctx->pc = 0x2901fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1304), (uint8_t)GPR_U32(ctx, 0));
    // 0x290200: 0x24424c38  addiu       $v0, $v0, 0x4C38
    ctx->pc = 0x290200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19512));
    // 0x290204: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x290204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290208: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x290208u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x754C44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x754C44u, _value); } while (0);
    // 0x29020c: 0xa0400004  sb          $zero, 0x4($v0)
    ctx->pc = 0x29020cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x754C3Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x754C3Cu, _value); } while (0);
    // 0x290210: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x290210u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x754C40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x754C40u, _value); } while (0);
    // 0x290214: 0xa22005b5  sb          $zero, 0x5B5($s1)
    ctx->pc = 0x290214u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1461), (uint8_t)GPR_U32(ctx, 0));
    // 0x290218: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x290218u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29021c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x29021cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290224: 0x3e00008  jr          $ra
    ctx->pc = 0x290224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290224u;
        // 0x290228: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29022Cu;
    // 0x29022c: 0x0  nop
    ctx->pc = 0x29022cu;
    // NOP
    ctx->pc = 0x290230u;
}
