#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r806_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r806
{
// Function: checkBattle__5cR806
// Address: 0x7994d8 - 0x799850
void checkBattle__5cR806_0x7994d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkBattle__5cR806_0x7994d8");
#endif

    switch (ctx->pc) {
        case 0x799510u: goto label_799510;
        case 0x799520u: goto label_799520;
        case 0x79952cu: goto label_79952c;
        case 0x79953cu: goto label_79953c;
        case 0x799548u: goto label_799548;
        case 0x79955cu: goto label_79955c;
        case 0x79957cu: goto label_79957c;
        case 0x79959cu: goto label_79959c;
        case 0x7995c8u: goto label_7995c8;
        case 0x7995d4u: goto label_7995d4;
        case 0x7995dcu: goto label_7995dc;
        case 0x7995e8u: goto label_7995e8;
        case 0x799610u: goto label_799610;
        case 0x799620u: goto label_799620;
        case 0x79962cu: goto label_79962c;
        case 0x799654u: goto label_799654;
        case 0x799674u: goto label_799674;
        case 0x799680u: goto label_799680;
        case 0x799690u: goto label_799690;
        case 0x79969cu: goto label_79969c;
        case 0x7996b8u: goto label_7996b8;
        case 0x7996c0u: goto label_7996c0;
        case 0x7996ccu: goto label_7996cc;
        case 0x7996d4u: goto label_7996d4;
        case 0x7996f0u: goto label_7996f0;
        case 0x799710u: goto label_799710;
        case 0x799720u: goto label_799720;
        case 0x799728u: goto label_799728;
        case 0x79975cu: goto label_79975c;
        case 0x799770u: goto label_799770;
        case 0x799784u: goto label_799784;
        case 0x799794u: goto label_799794;
        case 0x799814u: goto label_799814;
        case 0x799820u: goto label_799820;
        default: break;
    }

    ctx->pc = 0x7994d8u;

    // 0x7994d8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x7994d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x7994dc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x7994dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x7994e0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x7994e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x7994e4: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x7994e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x7994e8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x7994e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x7994ec: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x7994ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x7994f0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x7994f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x7994f4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x7994f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x7994f8: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x7994f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x7994fc: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x7994fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x799500: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x799500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x799504: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x799508: 0xc07f1d0  jal         func_1FC740
    ctx->pc = 0x799508u;
    SET_GPR_U32(ctx, 31, 0x799510u);
    ctx->pc = 0x79950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799508u;
    // 0x79950c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC740u, 0x799508u, 0x799510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799510u;
label_799510:
    // 0x799510: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x799510u;
    {
        const bool branch_taken_0x799510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799510u;
        // 0x799514: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799510) {
            ctx->pc = 0x799534u;
            goto label_799534;
        }
    }
    ctx->pc = 0x799518u;
    // 0x799518: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799518u;
    SET_GPR_U32(ctx, 31, 0x799520u);
    ctx->pc = 0x79951Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799518u;
    // 0x79951c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799518u, 0x799520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799520u;
label_799520:
    // 0x799520: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x799520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x799524: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799524u;
    SET_GPR_U32(ctx, 31, 0x79952Cu);
    ctx->pc = 0x799528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799524u;
    // 0x799528: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799524u, 0x79952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79952Cu;
label_79952c:
    // 0x79952c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x79952Cu;
    {
        const bool branch_taken_0x79952c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79952Cu;
        // 0x799530: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79952c) {
            ctx->pc = 0x79954Cu;
            goto label_79954c;
        }
    }
    ctx->pc = 0x799534u;
label_799534:
    // 0x799534: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799534u;
    SET_GPR_U32(ctx, 31, 0x79953Cu);
    ctx->pc = 0x799538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799534u;
    // 0x799538: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799534u, 0x79953Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79953Cu;
label_79953c:
    // 0x79953c: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x79953cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x799540: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799540u;
    SET_GPR_U32(ctx, 31, 0x799548u);
    ctx->pc = 0x799544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799540u;
    // 0x799544: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799540u, 0x799548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799548u;
label_799548:
    // 0x799548: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x799548u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_79954c:
    // 0x79954c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79954cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799550: 0x2611ee00  addiu       $s1, $s0, -0x1200
    ctx->pc = 0x799550u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x799554: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x799554u;
    SET_GPR_U32(ctx, 31, 0x79955Cu);
    ctx->pc = 0x799558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799554u;
    // 0x799558: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x799554u, 0x79955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79955Cu;
label_79955c:
    // 0x79955c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x79955cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x799560: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799564: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799568: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79956c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79956cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799570: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799570u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799574: 0xc0c194a  jal         func_306528
    ctx->pc = 0x799574u;
    SET_GPR_U32(ctx, 31, 0x79957Cu);
    ctx->pc = 0x799578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799574u;
    // 0x799578: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x799574u, 0x79957Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79957Cu;
label_79957c:
    // 0x79957c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79957cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799580: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799584: 0x24060109  addiu       $a2, $zero, 0x109
    ctx->pc = 0x799584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
    // 0x799588: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79958c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79958cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799590: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799590u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799594: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799594u;
    SET_GPR_U32(ctx, 31, 0x79959Cu);
    ctx->pc = 0x799598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799594u;
    // 0x799598: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799594u, 0x79959Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79959Cu;
label_79959c:
    // 0x79959c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x79959cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995a0: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x7995a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x7995a4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x7995a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995a8: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x7995a8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x7995ac: 0x3c140058  lui         $s4, 0x58
    ctx->pc = 0x7995acu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
    // 0x7995b0: 0x3c150058  lui         $s5, 0x58
    ctx->pc = 0x7995b0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)88 << 16));
    // 0x7995b4: 0x3c16003c  lui         $s6, 0x3C
    ctx->pc = 0x7995b4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)60 << 16));
    // 0x7995b8: 0x3c170074  lui         $s7, 0x74
    ctx->pc = 0x7995b8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)116 << 16));
    // 0x7995bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x7995BCu;
    {
        const bool branch_taken_0x7995bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995BCu;
        // 0x7995c0: 0x3c1e0074  lui         $fp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995bc) {
            ctx->pc = 0x7995D4u;
            goto label_7995d4;
        }
    }
    ctx->pc = 0x7995C4u;
    // 0x7995c4: 0x0  nop
    ctx->pc = 0x7995c4u;
    // NOP
label_7995c8:
    // 0x7995c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7995c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7995cc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7995CCu;
    SET_GPR_U32(ctx, 31, 0x7995D4u);
    ctx->pc = 0x7995D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995CCu;
    // 0x7995d0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7995CCu, 0x7995D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995D4u;
label_7995d4:
    // 0x7995d4: 0xc0a5772  jal         func_295DC8
    ctx->pc = 0x7995D4u;
    SET_GPR_U32(ctx, 31, 0x7995DCu);
    ctx->pc = 0x7995D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995D4u;
    // 0x7995d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DC8u, 0x7995D4u, 0x7995DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995DCu;
label_7995dc:
    // 0x7995dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7995dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995e0: 0xc0a5780  jal         func_295E00
    ctx->pc = 0x7995E0u;
    SET_GPR_U32(ctx, 31, 0x7995E8u);
    ctx->pc = 0x7995E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995E0u;
    // 0x7995e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E00u, 0x7995E0u, 0x7995E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995E8u;
label_7995e8:
    // 0x7995e8: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x7995e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x7995ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7995ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7995f0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x7995f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x7995f4: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x7995f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x7995f8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x7995F8u;
    {
        const bool branch_taken_0x7995f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7995FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995F8u;
        // 0x7995fc: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995f8) {
            ctx->pc = 0x7995C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7995c8;
        }
    }
    ctx->pc = 0x799600u;
    // 0x799600: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799604: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799608: 0xc0c185a  jal         func_306168
    ctx->pc = 0x799608u;
    SET_GPR_U32(ctx, 31, 0x799610u);
    ctx->pc = 0x79960Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799608u;
    // 0x79960c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306168u, 0x799608u, 0x799610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799610u;
label_799610:
    // 0x799610: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x799610u;
    {
        const bool branch_taken_0x799610 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x799614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799610u;
        // 0x799614: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799610) {
            ctx->pc = 0x799620u;
            goto label_799620;
        }
    }
    ctx->pc = 0x799618u;
    // 0x799618: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x799618u;
    SET_GPR_U32(ctx, 31, 0x799620u);
    ctx->pc = 0x79961Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799618u;
    // 0x79961c: 0x2624ee00  addiu       $a0, $s1, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x799618u, 0x799620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799620u;
label_799620:
    // 0x799620: 0x26846af0  addiu       $a0, $s4, 0x6AF0
    ctx->pc = 0x799620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 27376));
    // 0x799624: 0xc0a58dc  jal         func_296370
    ctx->pc = 0x799624u;
    SET_GPR_U32(ctx, 31, 0x79962Cu);
    ctx->pc = 0x799628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799624u;
    // 0x799628: 0x2405008a  addiu       $a1, $zero, 0x8A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x799624u, 0x79962Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79962Cu;
label_79962c:
    // 0x79962c: 0x2630ee00  addiu       $s0, $s1, -0x1200
    ctx->pc = 0x79962cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962688));
    // 0x799630: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x799630u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x799634: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799638: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79963c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79963cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799640: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799640u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799644: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799644u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799648: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x799648u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x79964c: 0xc0c194a  jal         func_306528
    ctx->pc = 0x79964Cu;
    SET_GPR_U32(ctx, 31, 0x799654u);
    ctx->pc = 0x799650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79964Cu;
    // 0x799650: 0x26b164f0  addiu       $s1, $s5, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x79964Cu, 0x799654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799654u;
label_799654:
    // 0x799654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799658: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79965c: 0x24060109  addiu       $a2, $zero, 0x109
    ctx->pc = 0x79965cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
    // 0x799660: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799664: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799664u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799668: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799668u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79966c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79966Cu;
    SET_GPR_U32(ctx, 31, 0x799674u);
    ctx->pc = 0x799670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79966Cu;
    // 0x799670: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79966Cu, 0x799674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799674u;
label_799674:
    // 0x799674: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x799674u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799678: 0xc0a421a  jal         func_290868
    ctx->pc = 0x799678u;
    SET_GPR_U32(ctx, 31, 0x799680u);
    ctx->pc = 0x79967Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799678u;
    // 0x79967c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799678u, 0x799680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799680u;
label_799680:
    // 0x799680: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x799680u;
    {
        const bool branch_taken_0x799680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799680u;
        // 0x799684: 0x93a50000  lbu         $a1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799680) {
            ctx->pc = 0x79969Cu;
            goto label_79969c;
        }
    }
    ctx->pc = 0x799688u;
    // 0x799688: 0xc0a421a  jal         func_290868
    ctx->pc = 0x799688u;
    SET_GPR_U32(ctx, 31, 0x799690u);
    ctx->pc = 0x79968Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799688u;
    // 0x79968c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799688u, 0x799690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799690u;
label_799690:
    // 0x799690: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x799690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799694: 0xc09d830  jal         func_2760C0
    ctx->pc = 0x799694u;
    SET_GPR_U32(ctx, 31, 0x79969Cu);
    ctx->pc = 0x799698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799694u;
    // 0x799698: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2760C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2760C0u, 0x799694u, 0x79969Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79969Cu;
label_79969c:
    // 0x79969c: 0x8ec3d6e8  lw          $v1, -0x2918($s6)
    ctx->pc = 0x79969cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294956776)));
    // 0x7996a0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x7996a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x7996a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7996a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x7996a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7996ac: 0xac621e78  sw          $v0, 0x1E78($v1)
    ctx->pc = 0x7996acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7800), GPR_U32(ctx, 2));
    // 0x7996b0: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x7996B0u;
    SET_GPR_U32(ctx, 31, 0x7996B8u);
    ctx->pc = 0x7996B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996B0u;
    // 0x7996b4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x7996B0u, 0x7996B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996B8u;
label_7996b8:
    // 0x7996b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7996B8u;
    {
        const bool branch_taken_0x7996b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7996b8) {
            ctx->pc = 0x7996CCu;
            goto label_7996cc;
        }
    }
    ctx->pc = 0x7996C0u;
label_7996c0:
    // 0x7996c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7996c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7996c4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7996C4u;
    SET_GPR_U32(ctx, 31, 0x7996CCu);
    ctx->pc = 0x7996C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996C4u;
    // 0x7996c8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7996C4u, 0x7996CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996CCu;
label_7996cc:
    // 0x7996cc: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x7996CCu;
    SET_GPR_U32(ctx, 31, 0x7996D4u);
    ctx->pc = 0x7996D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996CCu;
    // 0x7996d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x7996CCu, 0x7996D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996D4u;
label_7996d4:
    // 0x7996d4: 0x1450fffa  bne         $v0, $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7996D4u;
    {
        const bool branch_taken_0x7996d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x7996D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996D4u;
        // 0x7996d8: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996d4) {
            ctx->pc = 0x7996C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7996c0;
        }
    }
    ctx->pc = 0x7996DCu;
    // 0x7996dc: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x7996dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x7996e0: 0x24709b70  addiu       $s0, $v1, -0x6490
    ctx->pc = 0x7996e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x7996e4: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x7996e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x7996e8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7996E8u;
    SET_GPR_U32(ctx, 31, 0x7996F0u);
    ctx->pc = 0x7996ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996E8u;
    // 0x7996ec: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7996E8u, 0x7996F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996F0u;
label_7996f0:
    // 0x7996f0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x7996f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7996f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7996f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7996f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996fc: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x7996fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x799700: 0x240a001e  addiu       $t2, $zero, 0x1E
    ctx->pc = 0x799700u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x799704: 0x26e47470  addiu       $a0, $s7, 0x7470
    ctx->pc = 0x799704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 29808));
    // 0x799708: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x799708u;
    SET_GPR_U32(ctx, 31, 0x799710u);
    ctx->pc = 0x79970Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799708u;
    // 0x79970c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x799708u, 0x799710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799710u;
label_799710:
    // 0x799710: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x799710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x799714: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x799714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x799718: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799718u;
    SET_GPR_U32(ctx, 31, 0x799720u);
    ctx->pc = 0x79971Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799718u;
    // 0x79971c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799718u, 0x799720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799720u;
label_799720:
    // 0x799720: 0xc07f02a  jal         func_1FC0A8
    ctx->pc = 0x799720u;
    SET_GPR_U32(ctx, 31, 0x799728u);
    ctx->pc = 0x799724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799720u;
    // 0x799724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A8u, 0x799720u, 0x799728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799728u;
label_799728:
    // 0x799728: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x799728u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79972c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79972cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799730: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x799730u;
    {
        const bool branch_taken_0x799730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x799734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799730u;
        // 0x799734: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799730) {
            ctx->pc = 0x799764u;
            goto label_799764;
        }
    }
    ctx->pc = 0x799738u;
    // 0x799738: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x799738u;
    {
        const bool branch_taken_0x799738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799738) {
            ctx->pc = 0x79973Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799738u;
            // 0x79973c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799754u;
            goto label_799754;
        }
    }
    ctx->pc = 0x799740u;
    // 0x799740: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x799740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799744: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x799744u;
    {
        const bool branch_taken_0x799744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x799748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799744u;
        // 0x799748: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799744) {
            ctx->pc = 0x799778u;
            goto label_799778;
        }
    }
    ctx->pc = 0x79974Cu;
    // 0x79974c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x79974Cu;
    {
        const bool branch_taken_0x79974c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x799750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79974Cu;
        // 0x799750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79974c) {
            ctx->pc = 0x79978Cu;
            goto label_79978c;
        }
    }
    ctx->pc = 0x799754u;
label_799754:
    // 0x799754: 0xc07f036  jal         func_1FC0D8
    ctx->pc = 0x799754u;
    SET_GPR_U32(ctx, 31, 0x79975Cu);
    ctx->pc = 0x799758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799754u;
    // 0x799758: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0D8u, 0x799754u, 0x79975Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79975Cu;
label_79975c:
    // 0x79975c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x79975Cu;
    {
        const bool branch_taken_0x79975c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79975Cu;
        // 0x799760: 0x27c27a2c  addiu       $v0, $fp, 0x7A2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 31276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79975c) {
            ctx->pc = 0x799798u;
            goto label_799798;
        }
    }
    ctx->pc = 0x799764u;
label_799764:
    // 0x799764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799768: 0xc07f036  jal         func_1FC0D8
    ctx->pc = 0x799768u;
    SET_GPR_U32(ctx, 31, 0x799770u);
    ctx->pc = 0x79976Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799768u;
    // 0x79976c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0D8u, 0x799768u, 0x799770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799770u;
label_799770:
    // 0x799770: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x799770u;
    {
        const bool branch_taken_0x799770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799770u;
        // 0x799774: 0x27c27a2c  addiu       $v0, $fp, 0x7A2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 31276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799770) {
            ctx->pc = 0x799798u;
            goto label_799798;
        }
    }
    ctx->pc = 0x799778u;
label_799778:
    // 0x799778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79977c: 0xc07f036  jal         func_1FC0D8
    ctx->pc = 0x79977Cu;
    SET_GPR_U32(ctx, 31, 0x799784u);
    ctx->pc = 0x799780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79977Cu;
    // 0x799780: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0D8u, 0x79977Cu, 0x799784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799784u;
label_799784:
    // 0x799784: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x799784u;
    {
        const bool branch_taken_0x799784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799784u;
        // 0x799788: 0x27c27a2c  addiu       $v0, $fp, 0x7A2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 31276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799784) {
            ctx->pc = 0x799798u;
            goto label_799798;
        }
    }
    ctx->pc = 0x79978Cu;
label_79978c:
    // 0x79978c: 0xc07f036  jal         func_1FC0D8
    ctx->pc = 0x79978Cu;
    SET_GPR_U32(ctx, 31, 0x799794u);
    ctx->pc = 0x799790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79978Cu;
    // 0x799790: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0D8u, 0x79978Cu, 0x799794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799794u;
label_799794:
    // 0x799794: 0x27c27a2c  addiu       $v0, $fp, 0x7A2C
    ctx->pc = 0x799794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 31276));
label_799798:
    // 0x799798: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x799798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x79979c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x79979cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7997a0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x7997a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x7997a4: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x7997A4u;
    {
        const bool branch_taken_0x7997a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7997A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997A4u;
        // 0x7997a8: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997a4) {
            ctx->pc = 0x799818u;
            goto label_799818;
        }
    }
    ctx->pc = 0x7997ACu;
    // 0x7997ac: 0x3c013e6b  lui         $at, 0x3E6B
    ctx->pc = 0x7997acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15979 << 16));
    // 0x7997b0: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x7997b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x7997b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7997b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7997b8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x7997b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x7997bc: 0x3c01402e  lui         $at, 0x402E
    ctx->pc = 0x7997bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16430 << 16));
    // 0x7997c0: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x7997c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x7997c4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x7997c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x7997c8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x7997c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997cc: 0x3c0140ab  lui         $at, 0x40AB
    ctx->pc = 0x7997ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16555 << 16));
    // 0x7997d0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x7997d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x7997d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x7997d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x7997d8: 0x24050801  addiu       $a1, $zero, 0x801
    ctx->pc = 0x7997d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
    // 0x7997dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7997dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7997e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7997e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7997e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x7997e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7997e8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x7997e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x7997ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7997ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997f0: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x7997f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x7997f4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x7997f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7997f8: 0x3c014046  lui         $at, 0x4046
    ctx->pc = 0x7997f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16454 << 16));
    // 0x7997fc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x7997fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x799800: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799800u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799804: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x799804u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x799808: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x799808u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x79980c: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x79980Cu;
    SET_GPR_U32(ctx, 31, 0x799814u);
    ctx->pc = 0x799810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79980Cu;
    // 0x799810: 0xe441000c  swc1        $f1, 0xC($v0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x79980Cu, 0x799814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799814u;
label_799814:
    // 0x799814: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x799814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_799818:
    // 0x799818: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799818u;
    SET_GPR_U32(ctx, 31, 0x799820u);
    ctx->pc = 0x79981Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799818u;
    // 0x79981c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799818u, 0x799820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799820u;
label_799820:
    // 0x799820: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x799820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x799824: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x799824u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x799828: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x799828u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79982c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x79982cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799830: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x799830u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799834: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x799834u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799838: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x799838u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79983c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x79983cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799840: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x799840u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799844: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799848: 0x3e00008  jr          $ra
    ctx->pc = 0x799848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799848u;
        // 0x79984c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799850u;
}
} // namespace gh_r806
