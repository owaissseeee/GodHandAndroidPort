#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r304_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r304
{
// Function: func_00799560
// Address: 0x799560 - 0x799718
void func_00799560_0x799560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799560_0x799560");
#endif

    switch (ctx->pc) {
        case 0x7995c8u: goto label_7995c8;
        case 0x7995d4u: goto label_7995d4;
        case 0x7995e0u: goto label_7995e0;
        case 0x7995ecu: goto label_7995ec;
        case 0x7995f8u: goto label_7995f8;
        case 0x799604u: goto label_799604;
        case 0x799630u: goto label_799630;
        case 0x799650u: goto label_799650;
        case 0x799668u: goto label_799668;
        case 0x799680u: goto label_799680;
        case 0x7996a0u: goto label_7996a0;
        case 0x7996b4u: goto label_7996b4;
        case 0x7996c4u: goto label_7996c4;
        case 0x7996d0u: goto label_7996d0;
        case 0x7996dcu: goto label_7996dc;
        case 0x7996e8u: goto label_7996e8;
        default: break;
    }

    ctx->pc = 0x799560u;

    // 0x799560: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x799560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x799564: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799568: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x799568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x79956c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79956cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799570: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x799570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x799574: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x799574u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x799578: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x799578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x79957c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x79957cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x799580: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x799580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x799584: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x799584u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799588: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x799588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x79958c: 0x3c140074  lui         $s4, 0x74
    ctx->pc = 0x79958cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)116 << 16));
    // 0x799590: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x799590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x799594: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x799594u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799598: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x799598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x79959c: 0x3c15007a  lui         $s5, 0x7A
    ctx->pc = 0x79959cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)122 << 16));
    // 0x7995a0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x7995a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x7995a4: 0x3c178000  lui         $s7, 0x8000
    ctx->pc = 0x7995a4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)32768 << 16));
    // 0x7995a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7995a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7995ac: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x7995acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995b0: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x7995b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x7995b4: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x7995b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x7995b8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x7995b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995bc: 0x3c164000  lui         $s6, 0x4000
    ctx->pc = 0x7995bcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16384 << 16));
    // 0x7995c0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7995C0u;
    SET_GPR_U32(ctx, 31, 0x7995C8u);
    ctx->pc = 0x7995C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995C0u;
    // 0x7995c4: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7995C0u, 0x7995C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995C8u;
label_7995c8:
    // 0x7995c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7995c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995cc: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x7995CCu;
    SET_GPR_U32(ctx, 31, 0x7995D4u);
    ctx->pc = 0x7995D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995CCu;
    // 0x7995d0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x7995CCu, 0x7995D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995D4u;
label_7995d4:
    // 0x7995d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7995d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995d8: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x7995D8u;
    SET_GPR_U32(ctx, 31, 0x7995E0u);
    ctx->pc = 0x7995DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995D8u;
    // 0x7995dc: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x7995D8u, 0x7995E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995E0u;
label_7995e0:
    // 0x7995e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7995e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995e4: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x7995E4u;
    SET_GPR_U32(ctx, 31, 0x7995ECu);
    ctx->pc = 0x7995E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995E4u;
    // 0x7995e8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x7995E4u, 0x7995ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995ECu;
label_7995ec:
    // 0x7995ec: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x7995ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x7995f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7995f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995f4: 0x0  nop
    ctx->pc = 0x7995f4u;
    // NOP
label_7995f8:
    // 0x7995f8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x7995f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x7995fc: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x7995FCu;
    SET_GPR_U32(ctx, 31, 0x799604u);
    ctx->pc = 0x799600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995FCu;
    // 0x799600: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x7995FCu, 0x799604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799604u;
label_799604:
    // 0x799604: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x799604u;
    {
        const bool branch_taken_0x799604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799604u;
        // 0x799608: 0x8e427a8c  lw          $v0, 0x7A8C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799604) {
            ctx->pc = 0x799620u;
            goto label_799620;
        }
    }
    ctx->pc = 0x79960Cu;
    // 0x79960c: 0x26a59718  addiu       $a1, $s5, -0x68E8
    ctx->pc = 0x79960cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294940440));
    // 0x799610: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799614: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799618: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x799618u;
    {
        const bool branch_taken_0x799618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799618u;
        // 0x79961c: 0x571025  or          $v0, $v0, $s7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799618) {
            ctx->pc = 0x799648u;
            goto label_799648;
        }
    }
    ctx->pc = 0x799620u;
label_799620:
    // 0x799620: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799624: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x799624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x799628: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799628u;
    SET_GPR_U32(ctx, 31, 0x799630u);
    ctx->pc = 0x79962Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799628u;
    // 0x79962c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799628u, 0x799630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799630u;
label_799630:
    // 0x799630: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x799630u;
    {
        const bool branch_taken_0x799630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799630u;
        // 0x799634: 0x8e427a8c  lw          $v0, 0x7A8C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799630) {
            ctx->pc = 0x799658u;
            goto label_799658;
        }
    }
    ctx->pc = 0x799638u;
    // 0x799638: 0x26059828  addiu       $a1, $s0, -0x67D8
    ctx->pc = 0x799638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940712));
    // 0x79963c: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x79963cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799640: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799644: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x799644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
label_799648:
    // 0x799648: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799648u;
    SET_GPR_U32(ctx, 31, 0x799650u);
    ctx->pc = 0x79964Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799648u;
    // 0x79964c: 0xae427a8c  sw          $v0, 0x7A8C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 31372), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799648u, 0x799650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799650u;
label_799650:
    // 0x799650: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x799650u;
    {
        const bool branch_taken_0x799650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799650u;
        // 0x799654: 0x27d0ea60  addiu       $s0, $fp, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799650) {
            ctx->pc = 0x7996B8u;
            goto label_7996b8;
        }
    }
    ctx->pc = 0x799658u;
label_799658:
    // 0x799658: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79965c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79965cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x799660: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799660u;
    SET_GPR_U32(ctx, 31, 0x799668u);
    ctx->pc = 0x799664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799660u;
    // 0x799664: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799660u, 0x799668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799668u;
label_799668:
    // 0x799668: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x799668u;
    {
        const bool branch_taken_0x799668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799668u;
        // 0x79966c: 0x8e827a8c  lw          $v0, 0x7A8C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 31372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799668) {
            ctx->pc = 0x799688u;
            goto label_799688;
        }
    }
    ctx->pc = 0x799670u;
    // 0x799670: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x799670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799674: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799678: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799678u;
    SET_GPR_U32(ctx, 31, 0x799680u);
    ctx->pc = 0x79967Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799678u;
    // 0x79967c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799678u, 0x799680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799680u;
label_799680:
    // 0x799680: 0x1000ffdd  b           . + 4 + (-0x23 << 2)
    ctx->pc = 0x799680u;
    {
        const bool branch_taken_0x799680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799680u;
        // 0x799684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799680) {
            ctx->pc = 0x7995F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7995f8;
        }
    }
    ctx->pc = 0x799688u;
label_799688:
    // 0x799688: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x799688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x79968c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79968cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799690: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799694: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x799694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x799698: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799698u;
    SET_GPR_U32(ctx, 31, 0x7996A0u);
    ctx->pc = 0x79969Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799698u;
    // 0x79969c: 0xae827a8c  sw          $v0, 0x7A8C($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 31372), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799698u, 0x7996A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996A0u;
label_7996a0:
    // 0x7996a0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7996a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7996a4: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x7996a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x7996a8: 0x24a59928  addiu       $a1, $a1, -0x66D8
    ctx->pc = 0x7996a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940968));
    // 0x7996ac: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7996ACu;
    SET_GPR_U32(ctx, 31, 0x7996B4u);
    ctx->pc = 0x7996B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996ACu;
    // 0x7996b0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7996ACu, 0x7996B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996B4u;
label_7996b4:
    // 0x7996b4: 0x27d0ea60  addiu       $s0, $fp, -0x15A0
    ctx->pc = 0x7996b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961760));
label_7996b8:
    // 0x7996b8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x7996b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x7996bc: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x7996BCu;
    SET_GPR_U32(ctx, 31, 0x7996C4u);
    ctx->pc = 0x7996C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996BCu;
    // 0x7996c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x7996BCu, 0x7996C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996C4u;
label_7996c4:
    // 0x7996c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7996c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996c8: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x7996C8u;
    SET_GPR_U32(ctx, 31, 0x7996D0u);
    ctx->pc = 0x7996CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996C8u;
    // 0x7996cc: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x7996C8u, 0x7996D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996D0u;
label_7996d0:
    // 0x7996d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7996d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996d4: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x7996D4u;
    SET_GPR_U32(ctx, 31, 0x7996DCu);
    ctx->pc = 0x7996D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996D4u;
    // 0x7996d8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x7996D4u, 0x7996DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996DCu;
label_7996dc:
    // 0x7996dc: 0x8e632f84  lw          $v1, 0x2F84($s3)
    ctx->pc = 0x7996dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x7996e0: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7996E0u;
    SET_GPR_U32(ctx, 31, 0x7996E8u);
    ctx->pc = 0x7996E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996E0u;
    // 0x7996e4: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7996E0u, 0x7996E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996E8u;
label_7996e8:
    // 0x7996e8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x7996e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x7996ec: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x7996ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7996f0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x7996f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7996f4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x7996f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7996f8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x7996f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7996fc: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x7996fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799700: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x799700u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799704: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x799704u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799708: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x799708u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79970c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79970cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799710: 0x3e00008  jr          $ra
    ctx->pc = 0x799710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799710u;
        // 0x799714: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799718u;
}
} // namespace gh_r304
