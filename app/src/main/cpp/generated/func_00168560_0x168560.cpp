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

// Function: func_00168560
// Address: 0x168560 - 0x1689e8
void func_00168560_0x168560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00168560_0x168560");
#endif

    switch (ctx->pc) {
        case 0x168594u: goto label_168594;
        case 0x1685a4u: goto label_1685a4;
        case 0x1685c8u: goto label_1685c8;
        case 0x1685d8u: goto label_1685d8;
        case 0x1685e8u: goto label_1685e8;
        case 0x1685f8u: goto label_1685f8;
        case 0x168608u: goto label_168608;
        case 0x168610u: goto label_168610;
        case 0x168618u: goto label_168618;
        case 0x168620u: goto label_168620;
        case 0x168668u: goto label_168668;
        case 0x168674u: goto label_168674;
        case 0x168690u: goto label_168690;
        case 0x16869cu: goto label_16869c;
        case 0x168770u: goto label_168770;
        case 0x168798u: goto label_168798;
        case 0x1687a0u: goto label_1687a0;
        case 0x1687b0u: goto label_1687b0;
        case 0x1689a4u: goto label_1689a4;
        default: break;
    }

    ctx->pc = 0x168560u;

    // 0x168560: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x168560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x168564: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x168564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x168568: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x168568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x16856c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x16856cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x168570: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x168570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x168574: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x168574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x168578: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x168578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x16857c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x16857cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x168580: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x168580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x168584: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x168584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x168588: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x168588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x16858c: 0xc058574  jal         func_1615D0
    ctx->pc = 0x16858Cu;
    SET_GPR_U32(ctx, 31, 0x168594u);
    ctx->pc = 0x168590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16858Cu;
    // 0x168590: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1615D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1615D0u, 0x16858Cu, 0x168594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168594u;
label_168594:
    // 0x168594: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x168594u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x168598: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16859c: 0xc058540  jal         func_161500
    ctx->pc = 0x16859Cu;
    SET_GPR_U32(ctx, 31, 0x1685A4u);
    ctx->pc = 0x1685A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16859Cu;
    // 0x1685a0: 0x24a5fcd0  addiu       $a1, $a1, -0x330 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161500u, 0x16859Cu, 0x1685A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1685A4u;
label_1685a4:
    // 0x1685a4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1685A4u;
    {
        const bool branch_taken_0x1685a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1685A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685A4u;
        // 0x1685a8: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685a4) {
            ctx->pc = 0x168628u;
            goto label_168628;
        }
    }
    ctx->pc = 0x1685ACu;
    // 0x1685ac: 0x8e460050  lw          $a2, 0x50($s2)
    ctx->pc = 0x1685acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1685b0: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x1685b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9092)));
    // 0x1685b4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1685b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1685b8: 0x265100d0  addiu       $s1, $s2, 0xD0
    ctx->pc = 0x1685b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x1685bc: 0x26500210  addiu       $s0, $s2, 0x210
    ctx->pc = 0x1685bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 528));
    // 0x1685c0: 0xc0ab33e  jal         func_2ACCF8
    ctx->pc = 0x1685C0u;
    SET_GPR_U32(ctx, 31, 0x1685C8u);
    ctx->pc = 0x1685C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1685C0u;
    // 0x1685c4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCF8u, 0x1685C0u, 0x1685C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1685C8u;
label_1685c8:
    // 0x1685c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1685c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1685cc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1685ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1685d0: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x1685D0u;
    SET_GPR_U32(ctx, 31, 0x1685D8u);
    ctx->pc = 0x1685D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1685D0u;
    // 0x1685d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x1685D0u, 0x1685D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1685D8u;
label_1685d8:
    // 0x1685d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1685d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1685dc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1685dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1685e0: 0xc0aa7cc  jal         func_2A9F30
    ctx->pc = 0x1685E0u;
    SET_GPR_U32(ctx, 31, 0x1685E8u);
    ctx->pc = 0x1685E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1685E0u;
    // 0x1685e4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9F30u, 0x1685E0u, 0x1685E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1685E8u;
label_1685e8:
    // 0x1685e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1685e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1685ec: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1685ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1685f0: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x1685F0u;
    SET_GPR_U32(ctx, 31, 0x1685F8u);
    ctx->pc = 0x1685F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1685F0u;
    // 0x1685f4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x1685F0u, 0x1685F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1685F8u;
label_1685f8:
    // 0x1685f8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1685f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1685fc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1685fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x168600: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x168600u;
    SET_GPR_U32(ctx, 31, 0x168608u);
    ctx->pc = 0x168604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168600u;
    // 0x168604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x168600u, 0x168608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168608u;
label_168608:
    // 0x168608: 0xc0aae9e  jal         func_2ABA78
    ctx->pc = 0x168608u;
    SET_GPR_U32(ctx, 31, 0x168610u);
    ctx->pc = 0x16860Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168608u;
    // 0x16860c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABA78u, 0x168608u, 0x168610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168610u;
label_168610:
    // 0x168610: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x168610u;
    SET_GPR_U32(ctx, 31, 0x168618u);
    ctx->pc = 0x168614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168610u;
    // 0x168614: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x168610u, 0x168618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168618u;
label_168618:
    // 0x168618: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x168618u;
    SET_GPR_U32(ctx, 31, 0x168620u);
    ctx->pc = 0x16861Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168618u;
    // 0x16861c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x168618u, 0x168620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168620u;
label_168620:
    // 0x168620: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x168620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x168624: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x168624u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
label_168628:
    // 0x168628: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x168628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16862c: 0xa2400046  sb          $zero, 0x46($s2)
    ctx->pc = 0x16862cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 70), (uint8_t)GPR_U32(ctx, 0));
    // 0x168630: 0xa2420256  sb          $v0, 0x256($s2)
    ctx->pc = 0x168630u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 598), (uint8_t)GPR_U32(ctx, 2));
    // 0x168634: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x168634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x168638: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x168638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16863c: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x16863cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x168640: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x168640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x168644: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x168644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168648: 0x265400d0  addiu       $s4, $s2, 0xD0
    ctx->pc = 0x168648u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x16864c: 0x26550120  addiu       $s5, $s2, 0x120
    ctx->pc = 0x16864cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    // 0x168650: 0x265e0260  addiu       $fp, $s2, 0x260
    ctx->pc = 0x168650u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 608));
    // 0x168654: 0x2657026c  addiu       $s7, $s2, 0x26C
    ctx->pc = 0x168654u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 620));
    // 0x168658: 0x265601f0  addiu       $s6, $s2, 0x1F0
    ctx->pc = 0x168658u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
    // 0x16865c: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x16865cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x168660: 0x26500080  addiu       $s0, $s2, 0x80
    ctx->pc = 0x168660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x168664: 0x0  nop
    ctx->pc = 0x168664u;
    // NOP
label_168668:
    // 0x168668: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x168668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16866c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x16866Cu;
    SET_GPR_U32(ctx, 31, 0x168674u);
    ctx->pc = 0x168670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16866Cu;
    // 0x168670: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x16866Cu, 0x168674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168674u;
label_168674:
    // 0x168674: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x168674u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x168678: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x168678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x16867c: 0x2a220013  slti        $v0, $s1, 0x13
    ctx->pc = 0x16867cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x168680: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x168680u;
    {
        const bool branch_taken_0x168680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168680u;
        // 0x168684: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168680) {
            ctx->pc = 0x168668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168668;
        }
    }
    ctx->pc = 0x168688u;
    // 0x168688: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x168688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16868c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16868cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168690:
    // 0x168690: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x168690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168694: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x168694u;
    SET_GPR_U32(ctx, 31, 0x16869Cu);
    ctx->pc = 0x168698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168694u;
    // 0x168698: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x168694u, 0x16869Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16869Cu;
label_16869c:
    // 0x16869c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16869cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1686a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1686a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1686a4: 0x2a220025  slti        $v0, $s1, 0x25
    ctx->pc = 0x1686a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)37) ? 1 : 0);
    // 0x1686a8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1686A8u;
    {
        const bool branch_taken_0x1686a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1686ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1686A8u;
        // 0x1686ac: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1686a8) {
            ctx->pc = 0x168690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168690;
        }
    }
    ctx->pc = 0x1686B0u;
    // 0x1686b0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1686b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1686b4: 0x8c43d930  lw          $v1, -0x26D0($v0)
    ctx->pc = 0x1686b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3BD930u));
    // 0x1686b8: 0x80630edd  lb          $v1, 0xEDD($v1)
    ctx->pc = 0x1686b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 3805)));
    // 0x1686bc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1686BCu;
    {
        const bool branch_taken_0x1686bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1686C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1686BCu;
        // 0x1686c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1686bc) {
            ctx->pc = 0x1686D4u;
            goto label_1686d4;
        }
    }
    ctx->pc = 0x1686C4u;
    // 0x1686c4: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1686C4u;
    {
        const bool branch_taken_0x1686c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1686c4) {
            ctx->pc = 0x1686C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1686C4u;
            // 0x1686c8: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1686D8u;
            goto label_1686d8;
        }
    }
    ctx->pc = 0x1686CCu;
    // 0x1686cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1686CCu;
    {
        const bool branch_taken_0x1686cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1686D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1686CCu;
        // 0x1686d0: 0x8e430120  lw          $v1, 0x120($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1686cc) {
            ctx->pc = 0x1686ECu;
            goto label_1686ec;
        }
    }
    ctx->pc = 0x1686D4u;
label_1686d4:
    // 0x1686d4: 0x8e440080  lw          $a0, 0x80($s2)
    ctx->pc = 0x1686d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_1686d8:
    // 0x1686d8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x1686d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x1686dc: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1686dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1686e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1686e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1686e4: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x1686e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x1686e8: 0x8e430120  lw          $v1, 0x120($s2)
    ctx->pc = 0x1686e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 288)));
label_1686ec:
    // 0x1686ec: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x1686ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1686f0: 0x3c0143af  lui         $at, 0x43AF
    ctx->pc = 0x1686f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17327 << 16));
    // 0x1686f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1686f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1686f8: 0x24052003  addiu       $a1, $zero, 0x2003
    ctx->pc = 0x1686f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8195));
    // 0x1686fc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1686fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x168700: 0x24062004  addiu       $a2, $zero, 0x2004
    ctx->pc = 0x168700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8196));
    // 0x168704: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x168704u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168708: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x168708u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16870c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x16870cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168710: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x168710u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x168714: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x168714u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x168718: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x168718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x16871c: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x16871cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x168720: 0xa4440090  sh          $a0, 0x90($v0)
    ctx->pc = 0x168720u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x168724: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x168724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x168728: 0xa4640090  sh          $a0, 0x90($v1)
    ctx->pc = 0x168728u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x16872c: 0xa24001b4  sb          $zero, 0x1B4($s2)
    ctx->pc = 0x16872cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 436), (uint8_t)GPR_U32(ctx, 0));
    // 0x168730: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x168730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x168734: 0xa64001d2  sh          $zero, 0x1D2($s2)
    ctx->pc = 0x168734u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 466), (uint16_t)GPR_U32(ctx, 0));
    // 0x168738: 0xa64001d0  sh          $zero, 0x1D0($s2)
    ctx->pc = 0x168738u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 464), (uint16_t)GPR_U32(ctx, 0));
    // 0x16873c: 0xa240005a  sb          $zero, 0x5A($s2)
    ctx->pc = 0x16873cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x168740: 0xa240005b  sb          $zero, 0x5B($s2)
    ctx->pc = 0x168740u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x168744: 0xa240005c  sb          $zero, 0x5C($s2)
    ctx->pc = 0x168744u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x168748: 0xa240005d  sb          $zero, 0x5D($s2)
    ctx->pc = 0x168748u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 93), (uint8_t)GPR_U32(ctx, 0));
    // 0x16874c: 0xa4650090  sh          $a1, 0x90($v1)
    ctx->pc = 0x16874cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 5));
    // 0x168750: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x168750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x168754: 0xa4460090  sh          $a2, 0x90($v0)
    ctx->pc = 0x168754u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 6));
    // 0x168758: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x168758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x16875c: 0xa4650090  sh          $a1, 0x90($v1)
    ctx->pc = 0x16875cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 5));
    // 0x168760: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x168760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x168764: 0xa4460090  sh          $a2, 0x90($v0)
    ctx->pc = 0x168764u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 6));
    // 0x168768: 0xa24001d4  sb          $zero, 0x1D4($s2)
    ctx->pc = 0x168768u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 468), (uint8_t)GPR_U32(ctx, 0));
    // 0x16876c: 0x0  nop
    ctx->pc = 0x16876cu;
    // NOP
label_168770:
    // 0x168770: 0xa4e00000  sh          $zero, 0x0($a3)
    ctx->pc = 0x168770u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x168774: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x168774u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x168778: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x168778u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x16877c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x16877cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x168780: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x168780u;
    {
        const bool branch_taken_0x168780 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x168784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168780u;
        // 0x168784: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168780) {
            ctx->pc = 0x168770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168770;
        }
    }
    ctx->pc = 0x168788u;
    // 0x168788: 0xa6400282  sh          $zero, 0x282($s2)
    ctx->pc = 0x168788u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 642), (uint16_t)GPR_U32(ctx, 0));
    // 0x16878c: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x16878cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x168790: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x168790u;
    SET_GPR_U32(ctx, 31, 0x168798u);
    ctx->pc = 0x168794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168790u;
    // 0x168794: 0x26103050  addiu       $s0, $s0, 0x3050 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x168790u, 0x168798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168798u;
label_168798:
    // 0x168798: 0xc0b6db0  jal         func_2DB6C0
    ctx->pc = 0x168798u;
    SET_GPR_U32(ctx, 31, 0x1687A0u);
    ctx->pc = 0x16879Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168798u;
    // 0x16879c: 0xae4201d8  sw          $v0, 0x1D8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 472), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6C0u, 0x168798u, 0x1687A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1687A0u;
label_1687a0:
    // 0x1687a0: 0xae4201dc  sw          $v0, 0x1DC($s2)
    ctx->pc = 0x1687a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 476), GPR_U32(ctx, 2));
    // 0x1687a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1687a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1687a8: 0xc04e3ae  jal         func_138EB8
    ctx->pc = 0x1687A8u;
    SET_GPR_U32(ctx, 31, 0x1687B0u);
    ctx->pc = 0x1687ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1687A8u;
    // 0x1687ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138EB8u, 0x1687A8u, 0x1687B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1687B0u;
label_1687b0:
    // 0x1687b0: 0x8e4301d8  lw          $v1, 0x1D8($s2)
    ctx->pc = 0x1687b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 472)));
    // 0x1687b4: 0x26100c90  addiu       $s0, $s0, 0xC90
    ctx->pc = 0x1687b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3216));
    // 0x1687b8: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x1687b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x1687bc: 0x12c20007  beq         $s6, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1687BCu;
    {
        const bool branch_taken_0x1687bc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x1687C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1687BCu;
        // 0x1687c0: 0xae5001e0  sw          $s0, 0x1E0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 480), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1687bc) {
            ctx->pc = 0x1687DCu;
            goto label_1687dc;
        }
    }
    ctx->pc = 0x1687C4u;
    // 0x1687c4: 0xc4600100  lwc1        $f0, 0x100($v1)
    ctx->pc = 0x1687c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1687c8: 0xe64001f0  swc1        $f0, 0x1F0($s2)
    ctx->pc = 0x1687c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 496), bits); }
    // 0x1687cc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1687ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1687d0: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x1687d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x1687d4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1687d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1687d8: 0xe6c00008  swc1        $f0, 0x8($s6)
    ctx->pc = 0x1687d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
label_1687dc:
    // 0x1687dc: 0x8e4301d8  lw          $v1, 0x1D8($s2)
    ctx->pc = 0x1687dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 472)));
    // 0x1687e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1687e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1687e4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1687e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1687e8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1687e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1687ec: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x1687ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x1687f0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1687f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1687f4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1687f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1687f8: 0x105d0007  beq         $v0, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x1687F8u;
    {
        const bool branch_taken_0x1687f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x1687FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1687F8u;
        // 0x1687fc: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1687f8) {
            ctx->pc = 0x168818u;
            goto label_168818;
        }
    }
    ctx->pc = 0x168800u;
    // 0x168800: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x168800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168804: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x168804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
    // 0x168808: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x168808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16880c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x16880cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x168810: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x168810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168814: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x168814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_168818:
    // 0x168818: 0x8e4201d8  lw          $v0, 0x1D8($s2)
    ctx->pc = 0x168818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 472)));
    // 0x16881c: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x16881cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x168820: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x168820u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x168824: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x168824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x168828: 0x3c01bfb6  lui         $at, 0xBFB6
    ctx->pc = 0x168828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49078 << 16));
    // 0x16882c: 0x34214990  ori         $at, $at, 0x4990
    ctx->pc = 0x16882cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18832);
    // 0x168830: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x168830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168834: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x168834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
    // 0x168838: 0x34217f39  ori         $at, $at, 0x7F39
    ctx->pc = 0x168838u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32569);
    // 0x16883c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16883cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x168840: 0x3c013fa2  lui         $at, 0x3FA2
    ctx->pc = 0x168840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16290 << 16));
    // 0x168844: 0x34219a2c  ori         $at, $at, 0x9A2C
    ctx->pc = 0x168844u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39468);
    // 0x168848: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x168848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16884c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x16884cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x168850: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x168850u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x168854: 0xe6620008  swc1        $f2, 0x8($s3)
    ctx->pc = 0x168854u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x168858: 0xe663000c  swc1        $f3, 0xC($s3)
    ctx->pc = 0x168858u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x16885c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x16885cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168860: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x168860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x168864: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x168864u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168868: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x168868u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16886c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x16886cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x168870: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x168870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x168874: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x168874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x168878: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x168878u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16887c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x16887cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x168880: 0x8e4301e0  lw          $v1, 0x1E0($s2)
    ctx->pc = 0x168880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 480)));
    // 0x168884: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x168884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x168888: 0x24620200  addiu       $v0, $v1, 0x200
    ctx->pc = 0x168888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x16888c: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16888Cu;
    {
        const bool branch_taken_0x16888c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x168890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16888Cu;
        // 0x168890: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16888c) {
            ctx->pc = 0x1688A8u;
            goto label_1688a8;
        }
    }
    ctx->pc = 0x168894u;
    // 0x168894: 0xe4600200  swc1        $f0, 0x200($v1)
    ctx->pc = 0x168894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 512), bits); }
    // 0x168898: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x168898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16889c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x16889cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1688a0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1688a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1688a4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1688a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1688a8:
    // 0x1688a8: 0x3c01401f  lui         $at, 0x401F
    ctx->pc = 0x1688a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16415 << 16));
    // 0x1688ac: 0x3421866e  ori         $at, $at, 0x866E
    ctx->pc = 0x1688acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34414);
    // 0x1688b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1688b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1688b4: 0x8e4301e0  lw          $v1, 0x1E0($s2)
    ctx->pc = 0x1688b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 480)));
    // 0x1688b8: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x1688b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x1688bc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1688bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1688c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1688c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1688c4: 0x3c0140c6  lui         $at, 0x40C6
    ctx->pc = 0x1688c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16582 << 16));
    // 0x1688c8: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x1688c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x1688cc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1688ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1688d0: 0x24620200  addiu       $v0, $v1, 0x200
    ctx->pc = 0x1688d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x1688d4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1688d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1688d8: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x1688d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1688dc: 0xe6620008  swc1        $f2, 0x8($s3)
    ctx->pc = 0x1688dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1688e0: 0xe663000c  swc1        $f3, 0xC($s3)
    ctx->pc = 0x1688e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x1688e4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1688e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1688e8: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1688e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1688ec: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1688ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1688f0: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x1688f0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1688f4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1688f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1688f8: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1688f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1688fc: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x1688fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x168900: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x168900u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168904: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x168904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x168908: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x168908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16890c: 0x24620210  addiu       $v0, $v1, 0x210
    ctx->pc = 0x16890cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
    // 0x168910: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x168910u;
    {
        const bool branch_taken_0x168910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x168914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168910u;
        // 0x168914: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x168910) {
            ctx->pc = 0x16892Cu;
            goto label_16892c;
        }
    }
    ctx->pc = 0x168918u;
    // 0x168918: 0xe4600210  swc1        $f0, 0x210($v1)
    ctx->pc = 0x168918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 528), bits); }
    // 0x16891c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x16891cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x168920: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x168920u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x168924: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x168924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168928: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x168928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_16892c:
    // 0x16892c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x16892cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x168930: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x168930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x168934: 0x24497a78  addiu       $t1, $v0, 0x7A78
    ctx->pc = 0x168934u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 31352));
    // 0x168938: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x168938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x16893c: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x16893cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A80u));
    // 0x168940: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x168940u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x168944: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x168944u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x168948: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x168948u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    // 0x16894c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16894cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x168950: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x168950u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x168954: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x168954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x168958: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x168958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x16895c: 0x8c647a78  lw          $a0, 0x7A78($v1)
    ctx->pc = 0x16895cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x747A78u));
    // 0x168960: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x168960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x168964: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x168964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x168968: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x168968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x16896c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x16896cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x168970: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x168970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x168974: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x168974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x168978: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x168978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x16897c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x16897cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x168980: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x168980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x168984: 0xac647a78  sw          $a0, 0x7A78($v1)
    ctx->pc = 0x168984u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x747A78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A78u, _value); } while (0);
    // 0x168988: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x168988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x16898c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x16898cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x168990: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x168990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x168994: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x168994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x168998: 0x24844700  addiu       $a0, $a0, 0x4700
    ctx->pc = 0x168998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    // 0x16899c: 0xc0b65de  jal         func_2D9778
    ctx->pc = 0x16899Cu;
    SET_GPR_U32(ctx, 31, 0x1689A4u);
    ctx->pc = 0x1689A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16899Cu;
    // 0x1689a0: 0xad220008  sw          $v0, 0x8($t1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9778u, 0x16899Cu, 0x1689A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1689A4u;
label_1689a4:
    // 0x1689a4: 0xa240005d  sb          $zero, 0x5D($s2)
    ctx->pc = 0x1689a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 93), (uint8_t)GPR_U32(ctx, 0));
    // 0x1689a8: 0xa2400286  sb          $zero, 0x286($s2)
    ctx->pc = 0x1689a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 646), (uint8_t)GPR_U32(ctx, 0));
    // 0x1689ac: 0xa240005a  sb          $zero, 0x5A($s2)
    ctx->pc = 0x1689acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x1689b0: 0xa240005b  sb          $zero, 0x5B($s2)
    ctx->pc = 0x1689b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x1689b4: 0xa240005c  sb          $zero, 0x5C($s2)
    ctx->pc = 0x1689b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x1689b8: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1689b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1689bc: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1689bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1689c0: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1689c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1689c4: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1689c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1689c8: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x1689c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1689cc: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x1689ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1689d0: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1689d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1689d4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1689d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1689d8: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x1689d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1689dc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1689dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1689e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1689E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1689E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689E0u;
        // 0x1689e4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1689E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1689E8u;
}
