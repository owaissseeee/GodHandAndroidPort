#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r001_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r001
{
// Function: R001Move__Fv
// Address: 0x7997c0 - 0x799ab0
void R001Move__Fv_0x7997c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R001Move__Fv_0x7997c0");
#endif

    switch (ctx->pc) {
        case 0x7997f4u: goto label_7997f4;
        case 0x7997fcu: goto label_7997fc;
        case 0x79982cu: goto label_79982c;
        case 0x799860u: goto label_799860;
        case 0x799870u: goto label_799870;
        case 0x7998a8u: goto label_7998a8;
        case 0x7998b8u: goto label_7998b8;
        case 0x7998f0u: goto label_7998f0;
        case 0x799900u: goto label_799900;
        case 0x799938u: goto label_799938;
        case 0x799948u: goto label_799948;
        case 0x79997cu: goto label_79997c;
        case 0x79998cu: goto label_79998c;
        case 0x7999c4u: goto label_7999c4;
        case 0x7999d4u: goto label_7999d4;
        case 0x799a0cu: goto label_799a0c;
        case 0x799a1cu: goto label_799a1c;
        case 0x799a54u: goto label_799a54;
        case 0x799a6cu: goto label_799a6c;
        case 0x799a84u: goto label_799a84;
        case 0x799a9cu: goto label_799a9c;
        default: break;
    }

    ctx->pc = 0x7997c0u;

    // 0x7997c0: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x7997c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x7997c4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7997c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7997c8: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x7997c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A2Cu));
    // 0x7997cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7997ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7997d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7997d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7997d4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x7997d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x7997d8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x7997D8u;
    {
        const bool branch_taken_0x7997d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997D8u;
        // 0x7997dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997d8) {
            ctx->pc = 0x799810u;
            goto label_799810;
        }
    }
    ctx->pc = 0x7997E0u;
    // 0x7997e0: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x7997e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x7997e4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x7997e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x7997e8: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x7997e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x7997ec: 0xc07f0fa  jal         func_1FC3E8
    ctx->pc = 0x7997ECu;
    SET_GPR_U32(ctx, 31, 0x7997F4u);
    ctx->pc = 0x7997F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997ECu;
    // 0x7997f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC3E8u, 0x7997ECu, 0x7997F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997F4u;
label_7997f4:
    // 0x7997f4: 0xc07f0f4  jal         func_1FC3D0
    ctx->pc = 0x7997F4u;
    SET_GPR_U32(ctx, 31, 0x7997FCu);
    ctx->pc = 0x7997F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997F4u;
    // 0x7997f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC3D0u, 0x7997F4u, 0x7997FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997FCu;
label_7997fc:
    // 0x7997fc: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x7997fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x799800: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x799800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x799804: 0x8c64d6e8  lw          $a0, -0x2918($v1)
    ctx->pc = 0x799804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956776)));
    // 0x799808: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x799808u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x79980c: 0xac821a10  sw          $v0, 0x1A10($a0)
    ctx->pc = 0x79980cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6672), GPR_U32(ctx, 2));
label_799810:
    // 0x799810: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x799810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x799814: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799818: 0x2450ea60  addiu       $s0, $v0, -0x15A0
    ctx->pc = 0x799818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
    // 0x79981c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79981cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799824: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799824u;
    SET_GPR_U32(ctx, 31, 0x79982Cu);
    ctx->pc = 0x799828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799824u;
    // 0x799828: 0x3c11007a  lui         $s1, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799824u, 0x79982Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79982Cu;
label_79982c:
    // 0x79982c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x79982Cu;
    {
        const bool branch_taken_0x79982c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79982Cu;
        // 0x799830: 0x8e22af00  lw          $v0, -0x5100($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79982c) {
            ctx->pc = 0x799860u;
            goto label_799860;
        }
    }
    ctx->pc = 0x799834u;
    // 0x799834: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x799834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x799838: 0x3c08007a  lui         $t0, 0x7A
    ctx->pc = 0x799838u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)122 << 16));
    // 0x79983c: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x79983cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
    // 0x799840: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x799840u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x799844: 0x25089ab0  addiu       $t0, $t0, -0x6550
    ctx->pc = 0x799844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941360));
    // 0x799848: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x799848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79984c: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x79984cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x799850: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799850u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799854: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799854u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799858: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x799858u;
    SET_GPR_U32(ctx, 31, 0x799860u);
    ctx->pc = 0x79985Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799858u;
    // 0x79985c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x799858u, 0x799860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799860u;
label_799860:
    // 0x799860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799864: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x799864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x799868: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799868u;
    SET_GPR_U32(ctx, 31, 0x799870u);
    ctx->pc = 0x79986Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799868u;
    // 0x79986c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799868u, 0x799870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799870u;
label_799870:
    // 0x799870: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799870u;
    {
        const bool branch_taken_0x799870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799870u;
        // 0x799874: 0x8e23af00  lw          $v1, -0x5100($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799870) {
            ctx->pc = 0x7998A8u;
            goto label_7998a8;
        }
    }
    ctx->pc = 0x799878u;
    // 0x799878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79987c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x79987cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x799880: 0x3c08007a  lui         $t0, 0x7A
    ctx->pc = 0x799880u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)122 << 16));
    // 0x799884: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x799884u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799888: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x799888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
    // 0x79988c: 0x25089ab0  addiu       $t0, $t0, -0x6550
    ctx->pc = 0x79988cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941360));
    // 0x799890: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x799890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799894: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x799894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x799898: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799898u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79989c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79989cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998a0: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x7998A0u;
    SET_GPR_U32(ctx, 31, 0x7998A8u);
    ctx->pc = 0x7998A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998A0u;
    // 0x7998a4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x7998A0u, 0x7998A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998A8u;
label_7998a8:
    // 0x7998a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7998a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998ac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x7998acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x7998b0: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x7998B0u;
    SET_GPR_U32(ctx, 31, 0x7998B8u);
    ctx->pc = 0x7998B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998B0u;
    // 0x7998b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x7998B0u, 0x7998B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998B8u;
label_7998b8:
    // 0x7998b8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x7998B8u;
    {
        const bool branch_taken_0x7998b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998B8u;
        // 0x7998bc: 0x8e23af00  lw          $v1, -0x5100($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998b8) {
            ctx->pc = 0x7998F0u;
            goto label_7998f0;
        }
    }
    ctx->pc = 0x7998C0u;
    // 0x7998c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x7998c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7998c4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x7998c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x7998c8: 0x3c08007a  lui         $t0, 0x7A
    ctx->pc = 0x7998c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)122 << 16));
    // 0x7998cc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x7998ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x7998d0: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x7998d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
    // 0x7998d4: 0x25089ab0  addiu       $t0, $t0, -0x6550
    ctx->pc = 0x7998d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941360));
    // 0x7998d8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x7998d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7998dc: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x7998dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x7998e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7998e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7998e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998e8: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x7998E8u;
    SET_GPR_U32(ctx, 31, 0x7998F0u);
    ctx->pc = 0x7998ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998E8u;
    // 0x7998ec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x7998E8u, 0x7998F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998F0u;
label_7998f0:
    // 0x7998f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7998f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998f4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x7998f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x7998f8: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x7998F8u;
    SET_GPR_U32(ctx, 31, 0x799900u);
    ctx->pc = 0x7998FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998F8u;
    // 0x7998fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x7998F8u, 0x799900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799900u;
label_799900:
    // 0x799900: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799900u;
    {
        const bool branch_taken_0x799900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799900u;
        // 0x799904: 0x8e23af00  lw          $v1, -0x5100($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799900) {
            ctx->pc = 0x799938u;
            goto label_799938;
        }
    }
    ctx->pc = 0x799908u;
    // 0x799908: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x799908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79990c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x79990cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x799910: 0x3c08007a  lui         $t0, 0x7A
    ctx->pc = 0x799910u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)122 << 16));
    // 0x799914: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x799914u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799918: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x799918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
    // 0x79991c: 0x25089ab0  addiu       $t0, $t0, -0x6550
    ctx->pc = 0x79991cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941360));
    // 0x799920: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x799920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799924: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x799924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x799928: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79992c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79992cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799930: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x799930u;
    SET_GPR_U32(ctx, 31, 0x799938u);
    ctx->pc = 0x799934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799930u;
    // 0x799934: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x799930u, 0x799938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799938u;
label_799938:
    // 0x799938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79993c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x79993cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x799940: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799940u;
    SET_GPR_U32(ctx, 31, 0x799948u);
    ctx->pc = 0x799944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799940u;
    // 0x799944: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799940u, 0x799948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799948u;
label_799948:
    // 0x799948: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x799948u;
    {
        const bool branch_taken_0x799948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799948u;
        // 0x79994c: 0x8e22af00  lw          $v0, -0x5100($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799948) {
            ctx->pc = 0x79997Cu;
            goto label_79997c;
        }
    }
    ctx->pc = 0x799950u;
    // 0x799950: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x799950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x799954: 0x3c08007a  lui         $t0, 0x7A
    ctx->pc = 0x799954u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)122 << 16));
    // 0x799958: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x799958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
    // 0x79995c: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x79995cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x799960: 0x25089b78  addiu       $t0, $t0, -0x6488
    ctx->pc = 0x799960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941560));
    // 0x799964: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x799964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799968: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x799968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x79996c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79996cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799970: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799970u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799974: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x799974u;
    SET_GPR_U32(ctx, 31, 0x79997Cu);
    ctx->pc = 0x799978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799974u;
    // 0x799978: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x799974u, 0x79997Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79997Cu;
label_79997c:
    // 0x79997c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79997cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799980: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799984: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799984u;
    SET_GPR_U32(ctx, 31, 0x79998Cu);
    ctx->pc = 0x799988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799984u;
    // 0x799988: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799984u, 0x79998Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79998Cu;
label_79998c:
    // 0x79998c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79998Cu;
    {
        const bool branch_taken_0x79998c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79998Cu;
        // 0x799990: 0x8e23af00  lw          $v1, -0x5100($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79998c) {
            ctx->pc = 0x7999C4u;
            goto label_7999c4;
        }
    }
    ctx->pc = 0x799994u;
    // 0x799994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799998: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x799998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x79999c: 0x3c08007a  lui         $t0, 0x7A
    ctx->pc = 0x79999cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)122 << 16));
    // 0x7999a0: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x7999a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x7999a4: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x7999a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
    // 0x7999a8: 0x25089b78  addiu       $t0, $t0, -0x6488
    ctx->pc = 0x7999a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941560));
    // 0x7999ac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x7999acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7999b0: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x7999b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x7999b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7999b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7999b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999bc: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x7999BCu;
    SET_GPR_U32(ctx, 31, 0x7999C4u);
    ctx->pc = 0x7999C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999BCu;
    // 0x7999c0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x7999BCu, 0x7999C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999C4u;
label_7999c4:
    // 0x7999c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7999c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999c8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x7999c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7999cc: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x7999CCu;
    SET_GPR_U32(ctx, 31, 0x7999D4u);
    ctx->pc = 0x7999D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999CCu;
    // 0x7999d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x7999CCu, 0x7999D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999D4u;
label_7999d4:
    // 0x7999d4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x7999D4u;
    {
        const bool branch_taken_0x7999d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999D4u;
        // 0x7999d8: 0x8e23af00  lw          $v1, -0x5100($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999d4) {
            ctx->pc = 0x799A0Cu;
            goto label_799a0c;
        }
    }
    ctx->pc = 0x7999DCu;
    // 0x7999dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x7999dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7999e0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x7999e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x7999e4: 0x3c08007a  lui         $t0, 0x7A
    ctx->pc = 0x7999e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)122 << 16));
    // 0x7999e8: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x7999e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x7999ec: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x7999ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
    // 0x7999f0: 0x25089b78  addiu       $t0, $t0, -0x6488
    ctx->pc = 0x7999f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941560));
    // 0x7999f4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x7999f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7999f8: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x7999f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x7999fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7999fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799a00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a04: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x799A04u;
    SET_GPR_U32(ctx, 31, 0x799A0Cu);
    ctx->pc = 0x799A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A04u;
    // 0x799a08: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x799A04u, 0x799A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A0Cu;
label_799a0c:
    // 0x799a0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a10: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x799a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x799a14: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799A14u;
    SET_GPR_U32(ctx, 31, 0x799A1Cu);
    ctx->pc = 0x799A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A14u;
    // 0x799a18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799A14u, 0x799A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A1Cu;
label_799a1c:
    // 0x799a1c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799A1Cu;
    {
        const bool branch_taken_0x799a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A1Cu;
        // 0x799a20: 0x8e23af00  lw          $v1, -0x5100($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a1c) {
            ctx->pc = 0x799A54u;
            goto label_799a54;
        }
    }
    ctx->pc = 0x799A24u;
    // 0x799a24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x799a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799a28: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x799a28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x799a2c: 0x3c08007a  lui         $t0, 0x7A
    ctx->pc = 0x799a2cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)122 << 16));
    // 0x799a30: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x799a30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x799a34: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x799a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
    // 0x799a38: 0x25089b78  addiu       $t0, $t0, -0x6488
    ctx->pc = 0x799a38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941560));
    // 0x799a3c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x799a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799a40: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x799a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x799a44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799a44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799a48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a4c: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x799A4Cu;
    SET_GPR_U32(ctx, 31, 0x799A54u);
    ctx->pc = 0x799A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A4Cu;
    // 0x799a50: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x799A4Cu, 0x799A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A54u;
label_799a54:
    // 0x799a54: 0x8e22af00  lw          $v0, -0x5100($s1)
    ctx->pc = 0x799a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946560)));
    // 0x799a58: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x799a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x799a5c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x799A5Cu;
    {
        const bool branch_taken_0x799a5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x799a5c) {
            ctx->pc = 0x799A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799A5Cu;
            // 0x799a60: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799A74u;
            goto label_799a74;
        }
    }
    ctx->pc = 0x799A64u;
    // 0x799a64: 0xc06fa90  jal         func_1BEA40
    ctx->pc = 0x799A64u;
    SET_GPR_U32(ctx, 31, 0x799A6Cu);
    ctx->pc = 0x1BEA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEA40u, 0x799A64u, 0x799A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A6Cu;
label_799a6c:
    // 0x799a6c: 0x8e22af00  lw          $v0, -0x5100($s1)
    ctx->pc = 0x799a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946560)));
    // 0x799a70: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x799a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_799a74:
    // 0x799a74: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799A74u;
    {
        const bool branch_taken_0x799a74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A74u;
        // 0x799a78: 0x8e22af00  lw          $v0, -0x5100($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a74) {
            ctx->pc = 0x799A88u;
            goto label_799a88;
        }
    }
    ctx->pc = 0x799A7Cu;
    // 0x799a7c: 0xc06fa90  jal         func_1BEA40
    ctx->pc = 0x799A7Cu;
    SET_GPR_U32(ctx, 31, 0x799A84u);
    ctx->pc = 0x1BEA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEA40u, 0x799A7Cu, 0x799A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A84u;
label_799a84:
    // 0x799a84: 0x8e22af00  lw          $v0, -0x5100($s1)
    ctx->pc = 0x799a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946560)));
label_799a88:
    // 0x799a88: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x799a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x799a8c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799A8Cu;
    {
        const bool branch_taken_0x799a8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A8Cu;
        // 0x799a90: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a8c) {
            ctx->pc = 0x799AA0u;
            goto label_799aa0;
        }
    }
    ctx->pc = 0x799A94u;
    // 0x799a94: 0xc06fa90  jal         func_1BEA40
    ctx->pc = 0x799A94u;
    SET_GPR_U32(ctx, 31, 0x799A9Cu);
    ctx->pc = 0x1BEA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEA40u, 0x799A94u, 0x799A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A9Cu;
label_799a9c:
    // 0x799a9c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x799a9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_799aa0:
    // 0x799aa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x799aa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799aa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x799AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AA8u;
        // 0x799aac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799AB0u;
}
} // namespace gh_r001
