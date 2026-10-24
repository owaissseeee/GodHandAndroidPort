#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r603_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r603
{
// Function: func_00799520
// Address: 0x799520 - 0x7996a8
void func_00799520_0x799520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799520_0x799520");
#endif

    switch (ctx->pc) {
        case 0x799544u: goto label_799544;
        case 0x799568u: goto label_799568;
        case 0x799574u: goto label_799574;
        case 0x799598u: goto label_799598;
        case 0x7995b4u: goto label_7995b4;
        case 0x7995bcu: goto label_7995bc;
        case 0x7995c8u: goto label_7995c8;
        case 0x7995d8u: goto label_7995d8;
        case 0x799600u: goto label_799600;
        case 0x799630u: goto label_799630;
        case 0x799644u: goto label_799644;
        case 0x799650u: goto label_799650;
        case 0x799660u: goto label_799660;
        case 0x799668u: goto label_799668;
        case 0x799684u: goto label_799684;
        case 0x799690u: goto label_799690;
        default: break;
    }

    ctx->pc = 0x799520u;

    // 0x799520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x799524: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x799524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x799528: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79952c: 0x24509b70  addiu       $s0, $v0, -0x6490
    ctx->pc = 0x79952cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x799530: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x799530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x799534: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x799534u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x799538: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79953c: 0xc07ea80  jal         func_1FAA00
    ctx->pc = 0x79953Cu;
    SET_GPR_U32(ctx, 31, 0x799544u);
    ctx->pc = 0x799540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79953Cu;
    // 0x799540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAA00u, 0x79953Cu, 0x799544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799544u;
label_799544:
    // 0x799544: 0x5c40000c  bgtzl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x799544u;
    {
        const bool branch_taken_0x799544 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x799544) {
            ctx->pc = 0x799548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799544u;
            // 0x799548: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799578u;
            goto label_799578;
        }
    }
    ctx->pc = 0x79954Cu;
    // 0x79954c: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79954cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799550: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x799550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x799554: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799558: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79955c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79955cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799560: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x799560u;
    SET_GPR_U32(ctx, 31, 0x799568u);
    ctx->pc = 0x799564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799560u;
    // 0x799564: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x799560u, 0x799568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799568u;
label_799568:
    // 0x799568: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79956c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79956Cu;
    SET_GPR_U32(ctx, 31, 0x799574u);
    ctx->pc = 0x799570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79956Cu;
    // 0x799570: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79956Cu, 0x799574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799574u;
label_799574:
    // 0x799574: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_799578:
    // 0x799578: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799578u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79957c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79957cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x799580: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799584: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x799584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x799588: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79958c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79958cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799590: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799590u;
    SET_GPR_U32(ctx, 31, 0x799598u);
    ctx->pc = 0x799594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799590u;
    // 0x799594: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799590u, 0x799598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799598u;
label_799598:
    // 0x799598: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79959c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79959cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7995a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7995a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995a8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x7995a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7995ac: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x7995ACu;
    SET_GPR_U32(ctx, 31, 0x7995B4u);
    ctx->pc = 0x7995B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995ACu;
    // 0x7995b0: 0x24051001  addiu       $a1, $zero, 0x1001 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x7995ACu, 0x7995B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995B4u;
label_7995b4:
    // 0x7995b4: 0xc07ea80  jal         func_1FAA00
    ctx->pc = 0x7995B4u;
    SET_GPR_U32(ctx, 31, 0x7995BCu);
    ctx->pc = 0x7995B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995B4u;
    // 0x7995b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAA00u, 0x7995B4u, 0x7995BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995BCu;
label_7995bc:
    // 0x7995bc: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x7995bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x7995c0: 0xc07ea6e  jal         func_1FA9B8
    ctx->pc = 0x7995C0u;
    SET_GPR_U32(ctx, 31, 0x7995C8u);
    ctx->pc = 0x7995C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995C0u;
    // 0x7995c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA9B8u, 0x7995C0u, 0x7995C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995C8u;
label_7995c8:
    // 0x7995c8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7995c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x7995cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7995ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7995d0: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x7995D0u;
    SET_GPR_U32(ctx, 31, 0x7995D8u);
    ctx->pc = 0x7995D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995D0u;
    // 0x7995d4: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x7995D0u, 0x7995D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995D8u;
label_7995d8:
    // 0x7995d8: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x7995d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x7995dc: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x7995dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x7995e0: 0x8064a220  lb          $a0, -0x5DE0($v1)
    ctx->pc = 0x7995e0u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79A220u));
    // 0x7995e4: 0x2466a220  addiu       $a2, $v1, -0x5DE0
    ctx->pc = 0x7995e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943264));
    // 0x7995e8: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x7995e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x7995ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7995ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995f0: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x7995F0u;
    {
        const bool branch_taken_0x7995f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995F0u;
        // 0x7995f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995f0) {
            ctx->pc = 0x799628u;
            goto label_799628;
        }
    }
    ctx->pc = 0x7995F8u;
    // 0x7995f8: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7995f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7995fc: 0x0  nop
    ctx->pc = 0x7995fcu;
    // NOP
label_799600:
    // 0x799600: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799600u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799604: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799608: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79960c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79960cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799610: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799610u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799614: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799614u;
    {
        const bool branch_taken_0x799614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799614u;
        // 0x799618: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799614) {
            ctx->pc = 0x799628u;
            goto label_799628;
        }
    }
    ctx->pc = 0x79961Cu;
    // 0x79961c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79961cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799620: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799620u;
    {
        const bool branch_taken_0x799620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799620) {
            ctx->pc = 0x799624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799620u;
            // 0x799624: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799600;
        }
    }
    ctx->pc = 0x799628u;
label_799628:
    // 0x799628: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799628u;
    SET_GPR_U32(ctx, 31, 0x799630u);
    ctx->pc = 0x79962Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799628u;
    // 0x79962c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799628u, 0x799630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799630u;
label_799630:
    // 0x799630: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799634: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x799634u;
    {
        const bool branch_taken_0x799634 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x799638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799634u;
        // 0x799638: 0x3c04005d  lui         $a0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799634) {
            ctx->pc = 0x799670u;
            goto label_799670;
        }
    }
    ctx->pc = 0x79963Cu;
    // 0x79963c: 0xc05fc7c  jal         func_17F1F0
    ctx->pc = 0x79963Cu;
    SET_GPR_U32(ctx, 31, 0x799644u);
    ctx->pc = 0x799640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79963Cu;
    // 0x799640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F1F0u, 0x79963Cu, 0x799644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799644u;
label_799644:
    // 0x799644: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x799644u;
    {
        const bool branch_taken_0x799644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799644) {
            ctx->pc = 0x799660u;
            goto label_799660;
        }
    }
    ctx->pc = 0x79964Cu;
    // 0x79964c: 0x0  nop
    ctx->pc = 0x79964cu;
    // NOP
label_799650:
    // 0x799650: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799654: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799658: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799658u;
    SET_GPR_U32(ctx, 31, 0x799660u);
    ctx->pc = 0x79965Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799658u;
    // 0x79965c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799658u, 0x799660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799660u;
label_799660:
    // 0x799660: 0xc05fc86  jal         func_17F218
    ctx->pc = 0x799660u;
    SET_GPR_U32(ctx, 31, 0x799668u);
    ctx->pc = 0x799664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799660u;
    // 0x799664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F218u, 0x799660u, 0x799668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799668u;
label_799668:
    // 0x799668: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x799668u;
    {
        const bool branch_taken_0x799668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799668u;
        // 0x79966c: 0x3c04005d  lui         $a0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799668) {
            ctx->pc = 0x799650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799650;
        }
    }
    ctx->pc = 0x799670u;
label_799670:
    // 0x799670: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799670u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799674: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x799674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x799678: 0x24a5a228  addiu       $a1, $a1, -0x5DD8
    ctx->pc = 0x799678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943272));
    // 0x79967c: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x79967Cu;
    SET_GPR_U32(ctx, 31, 0x799684u);
    ctx->pc = 0x799680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79967Cu;
    // 0x799680: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x79967Cu, 0x799684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799684u;
label_799684:
    // 0x799684: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799688: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799688u;
    SET_GPR_U32(ctx, 31, 0x799690u);
    ctx->pc = 0x79968Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799688u;
    // 0x79968c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799688u, 0x799690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799690u;
label_799690:
    // 0x799690: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x799690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799694: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x799694u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799698: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79969c: 0x3e00008  jr          $ra
    ctx->pc = 0x79969Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7996A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79969Cu;
        // 0x7996a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79969Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7996A4u;
    // 0x7996a4: 0x0  nop
    ctx->pc = 0x7996a4u;
    // NOP
    ctx->pc = 0x7996a8u;
}
} // namespace gh_r603
