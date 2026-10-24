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

// Function: func_001E71B8
// Address: 0x1e71b8 - 0x1e7368
void func_001E71B8_0x1e71b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E71B8_0x1e71b8");
#endif

    switch (ctx->pc) {
        case 0x1e7200u: goto label_1e7200;
        case 0x1e7230u: goto label_1e7230;
        case 0x1e7244u: goto label_1e7244;
        case 0x1e7270u: goto label_1e7270;
        case 0x1e7280u: goto label_1e7280;
        case 0x1e7288u: goto label_1e7288;
        case 0x1e7294u: goto label_1e7294;
        case 0x1e72a4u: goto label_1e72a4;
        case 0x1e72c4u: goto label_1e72c4;
        case 0x1e72d0u: goto label_1e72d0;
        case 0x1e72dcu: goto label_1e72dc;
        case 0x1e72ecu: goto label_1e72ec;
        case 0x1e7318u: goto label_1e7318;
        case 0x1e7328u: goto label_1e7328;
        case 0x1e7334u: goto label_1e7334;
        case 0x1e733cu: goto label_1e733c;
        default: break;
    }

    ctx->pc = 0x1e71b8u;

    // 0x1e71b8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1e71b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1e71bc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1e71bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1e71c0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1e71c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1e71c4: 0x3c060043  lui         $a2, 0x43
    ctx->pc = 0x1e71c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)67 << 16));
    // 0x1e71c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e71c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e71cc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1e71ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1e71d0: 0x8c442388  lw          $a0, 0x2388($v0)
    ctx->pc = 0x1e71d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2388u));
    // 0x1e71d4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1e71d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e71d8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1e71d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e71dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e71dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e71e0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1e71e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1e71e4: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1e71e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1e71e8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1e71e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1e71ec: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1e71ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1e71f0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1e71f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x1e71f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e71f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e71f8: 0xc0ab3ea  jal         func_2ACFA8
    ctx->pc = 0x1E71F8u;
    SET_GPR_U32(ctx, 31, 0x1E7200u);
    ctx->pc = 0x1E71FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E71F8u;
    // 0x1e71fc: 0x24c6bb20  addiu       $a2, $a2, -0x44E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACFA8u, 0x1E71F8u, 0x1E7200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7200u;
label_1e7200:
    // 0x1e7200: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x1e7200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x1e7204: 0x3c070075  lui         $a3, 0x75
    ctx->pc = 0x1e7204u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)117 << 16));
    // 0x1e7208: 0x24703f20  addiu       $s0, $v1, 0x3F20
    ctx->pc = 0x1e7208u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16160));
    // 0x1e720c: 0x24e74220  addiu       $a3, $a3, 0x4220
    ctx->pc = 0x1e720cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16928));
    // 0x1e7210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7214: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e7214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7218: 0x26460678  addiu       $a2, $s2, 0x678
    ctx->pc = 0x1e7218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1656));
    // 0x1e721c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e721cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7220: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e7220u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7224: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e7224u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7228: 0xc08032c  jal         func_200CB0
    ctx->pc = 0x1E7228u;
    SET_GPR_U32(ctx, 31, 0x1E7230u);
    ctx->pc = 0x1E722Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7228u;
    // 0x1e722c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x1E7228u, 0x1E7230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7230u;
label_1e7230:
    // 0x1e7230: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x1E7230u;
    {
        const bool branch_taken_0x1e7230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7230) {
            ctx->pc = 0x1E7234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7230u;
            // 0x1e7234: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7340u;
            goto label_1e7340;
        }
    }
    ctx->pc = 0x1E7238u;
    // 0x1e7238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e723c: 0xc080458  jal         func_201160
    ctx->pc = 0x1E723Cu;
    SET_GPR_U32(ctx, 31, 0x1E7244u);
    ctx->pc = 0x1E7240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E723Cu;
    // 0x1e7240: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201160u, 0x1E723Cu, 0x1E7244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7244u;
label_1e7244:
    // 0x1e7244: 0x26560050  addiu       $s6, $s2, 0x50
    ctx->pc = 0x1e7244u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x1e7248: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1e7248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1e724c: 0x8e460678  lw          $a2, 0x678($s2)
    ctx->pc = 0x1e724cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1656)));
    // 0x1e7250: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x1e7250u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x1e7254: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1e7254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1e7258: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e7258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e725c: 0x26530530  addiu       $s3, $s2, 0x530
    ctx->pc = 0x1e725cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1328));
    // 0x1e7260: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e7260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e7264: 0x265405fc  addiu       $s4, $s2, 0x5FC
    ctx->pc = 0x1e7264u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1532));
    // 0x1e7268: 0xc0ab33e  jal         func_2ACCF8
    ctx->pc = 0x1E7268u;
    SET_GPR_U32(ctx, 31, 0x1E7270u);
    ctx->pc = 0x1E726Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7268u;
    // 0x1e726c: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCF8u, 0x1E7268u, 0x1E7270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7270u;
label_1e7270:
    // 0x1e7270: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e7270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7274: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1e7274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7278: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x1E7278u;
    SET_GPR_U32(ctx, 31, 0x1E7280u);
    ctx->pc = 0x1E727Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7278u;
    // 0x1e727c: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x1E7278u, 0x1E7280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7280u;
label_1e7280:
    // 0x1e7280: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x1E7280u;
    SET_GPR_U32(ctx, 31, 0x1E7288u);
    ctx->pc = 0x1E7284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7280u;
    // 0x1e7284: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x1E7280u, 0x1E7288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7288u;
label_1e7288:
    // 0x1e7288: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e7288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e728c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1E728Cu;
    SET_GPR_U32(ctx, 31, 0x1E7294u);
    ctx->pc = 0x1E7290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E728Cu;
    // 0x1e7290: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1E728Cu, 0x1E7294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7294u;
label_1e7294:
    // 0x1e7294: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e7294u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e7298: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e7298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e729c: 0xc0b576a  jal         func_2D5DA8
    ctx->pc = 0x1E729Cu;
    SET_GPR_U32(ctx, 31, 0x1E72A4u);
    ctx->pc = 0x1E72A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E729Cu;
    // 0x1e72a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5DA8u, 0x1E729Cu, 0x1E72A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E72A4u;
label_1e72a4:
    // 0x1e72a4: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x1e72a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1e72a8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1E72A8u;
    {
        const bool branch_taken_0x1e72a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E72ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E72A8u;
        // 0x1e72ac: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e72a8) {
            ctx->pc = 0x1E7288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7288;
        }
    }
    ctx->pc = 0x1E72B0u;
    // 0x1e72b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e72b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e72b4: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1e72b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1e72b8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e72b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e72bc: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x1E72BCu;
    SET_GPR_U32(ctx, 31, 0x1E72C4u);
    ctx->pc = 0x1E72C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E72BCu;
    // 0x1e72c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x1E72BCu, 0x1E72C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E72C4u;
label_1e72c4:
    // 0x1e72c4: 0x26500580  addiu       $s0, $s2, 0x580
    ctx->pc = 0x1e72c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x1e72c8: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x1E72C8u;
    SET_GPR_U32(ctx, 31, 0x1E72D0u);
    ctx->pc = 0x1E72CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E72C8u;
    // 0x1e72cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x1E72C8u, 0x1E72D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E72D0u;
label_1e72d0:
    // 0x1e72d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e72d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e72d4: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1E72D4u;
    SET_GPR_U32(ctx, 31, 0x1E72DCu);
    ctx->pc = 0x1E72D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E72D4u;
    // 0x1e72d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1E72D4u, 0x1E72DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E72DCu;
label_1e72dc:
    // 0x1e72dc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e72dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e72e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e72e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e72e4: 0xc0b576a  jal         func_2D5DA8
    ctx->pc = 0x1E72E4u;
    SET_GPR_U32(ctx, 31, 0x1E72ECu);
    ctx->pc = 0x1E72E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E72E4u;
    // 0x1e72e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5DA8u, 0x1E72E4u, 0x1E72ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E72ECu;
label_1e72ec:
    // 0x1e72ec: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1e72ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1e72f0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1E72F0u;
    {
        const bool branch_taken_0x1e72f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E72F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E72F0u;
        // 0x1e72f4: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e72f0) {
            ctx->pc = 0x1E72D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e72d0;
        }
    }
    ctx->pc = 0x1E72F8u;
    // 0x1e72f8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1e72f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1e72fc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e72fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e7300: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x1e7300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x1e7304: 0x944305b0  lhu         $v1, 0x5B0($v0)
    ctx->pc = 0x1e7304u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x747A50u));
    // 0x1e7308: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E7308u;
    {
        const bool branch_taken_0x1e7308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1E730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7308u;
        // 0x1e730c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7308) {
            ctx->pc = 0x1E7320u;
            goto label_1e7320;
        }
    }
    ctx->pc = 0x1E7310u;
    // 0x1e7310: 0xc0b5958  jal         func_2D6560
    ctx->pc = 0x1E7310u;
    SET_GPR_U32(ctx, 31, 0x1E7318u);
    ctx->pc = 0x1E7314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7310u;
    // 0x1e7314: 0x24051001  addiu       $a1, $zero, 0x1001 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6560u, 0x1E7310u, 0x1E7318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7318u;
label_1e7318:
    // 0x1e7318: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7318u;
    {
        const bool branch_taken_0x1e7318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7318u;
        // 0x1e731c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7318) {
            ctx->pc = 0x1E732Cu;
            goto label_1e732c;
        }
    }
    ctx->pc = 0x1E7320u;
label_1e7320:
    // 0x1e7320: 0xc0b5958  jal         func_2D6560
    ctx->pc = 0x1E7320u;
    SET_GPR_U32(ctx, 31, 0x1E7328u);
    ctx->pc = 0x1E7324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7320u;
    // 0x1e7324: 0x24051001  addiu       $a1, $zero, 0x1001 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6560u, 0x1E7320u, 0x1E7328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7328u;
label_1e7328:
    // 0x1e7328: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1e7328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1e732c:
    // 0x1e732c: 0xc0b5952  jal         func_2D6548
    ctx->pc = 0x1E732Cu;
    SET_GPR_U32(ctx, 31, 0x1E7334u);
    ctx->pc = 0x1E7330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E732Cu;
    // 0x1e7330: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6548u, 0x1E732Cu, 0x1E7334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7334u;
label_1e7334:
    // 0x1e7334: 0xc079d80  jal         func_1E7600
    ctx->pc = 0x1E7334u;
    SET_GPR_U32(ctx, 31, 0x1E733Cu);
    ctx->pc = 0x1E7338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7334u;
    // 0x1e7338: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7600u, 0x1E7334u, 0x1E733Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E733Cu;
label_1e733c:
    // 0x1e733c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1e733cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1e7340:
    // 0x1e7340: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1e7340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e7344: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1e7344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e7348: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1e7348u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e734c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1e734cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e7350: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1e7350u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e7354: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1e7354u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7358: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e7358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e735c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E735Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E735Cu;
        // 0x1e7360: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E735Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7364u;
    // 0x1e7364: 0x0  nop
    ctx->pc = 0x1e7364u;
    // NOP
    ctx->pc = 0x1e7368u;
}
