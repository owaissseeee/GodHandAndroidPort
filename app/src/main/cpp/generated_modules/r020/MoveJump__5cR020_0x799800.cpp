#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r020_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r020
{
// Function: MoveJump__5cR020
// Address: 0x799800 - 0x799948
void MoveJump__5cR020_0x799800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoveJump__5cR020_0x799800");
#endif

    switch (ctx->pc) {
        case 0x799838u: goto label_799838;
        case 0x799840u: goto label_799840;
        case 0x7998a4u: goto label_7998a4;
        case 0x7998acu: goto label_7998ac;
        case 0x7998c4u: goto label_7998c4;
        case 0x7998ccu: goto label_7998cc;
        case 0x7998e4u: goto label_7998e4;
        case 0x799918u: goto label_799918;
        default: break;
    }

    ctx->pc = 0x799800u;

    // 0x799800: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x799800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x799804: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x799804u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x799808: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x799808u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x79980c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79980cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x799810: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x799810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x799814: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x799814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799818: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x799818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79981c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x79981cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799820: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x799820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x799824: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x799824u;
    {
        const bool branch_taken_0x799824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799824u;
        // 0x799828: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799824) {
            ctx->pc = 0x799850u;
            goto label_799850;
        }
    }
    ctx->pc = 0x79982Cu;
    // 0x79982c: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x79982cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x799830: 0x24502c00  addiu       $s0, $v0, 0x2C00
    ctx->pc = 0x799830u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
    // 0x799834: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x799834u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x752C04u));
label_799838:
    // 0x799838: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799838u;
    SET_GPR_U32(ctx, 31, 0x799840u);
    ctx->pc = 0x79983Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799838u;
    // 0x79983c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799838u, 0x799840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799840u;
label_799840:
    // 0x799840: 0x8e427a24  lw          $v0, 0x7A24($s2)
    ctx->pc = 0x799840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31268)));
    // 0x799844: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x799844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x799848: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x799848u;
    {
        const bool branch_taken_0x799848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799848) {
            ctx->pc = 0x79984Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799848u;
            // 0x79984c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799838;
        }
    }
    ctx->pc = 0x799850u;
label_799850:
    // 0x799850: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x799850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x799854: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799858: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799858u;
    {
        const bool branch_taken_0x799858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799858u;
        // 0x79985c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799858) {
            ctx->pc = 0x799890u;
            goto label_799890;
        }
    }
    ctx->pc = 0x799860u;
    // 0x799860: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x799860u;
    {
        const bool branch_taken_0x799860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799860u;
        // 0x799864: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799860) {
            ctx->pc = 0x799878u;
            goto label_799878;
        }
    }
    ctx->pc = 0x799868u;
    // 0x799868: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x799868u;
    {
        const bool branch_taken_0x799868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799868u;
        // 0x79986c: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799868) {
            ctx->pc = 0x799888u;
            goto label_799888;
        }
    }
    ctx->pc = 0x799870u;
    // 0x799870: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x799870u;
    {
        const bool branch_taken_0x799870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799870) {
            ctx->pc = 0x7998CCu;
            goto label_7998cc;
        }
    }
    ctx->pc = 0x799878u;
label_799878:
    // 0x799878: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x799878u;
    {
        const bool branch_taken_0x799878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799878u;
        // 0x79987c: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799878) {
            ctx->pc = 0x7998B4u;
            goto label_7998b4;
        }
    }
    ctx->pc = 0x799880u;
    // 0x799880: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x799880u;
    {
        const bool branch_taken_0x799880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799880) {
            ctx->pc = 0x7998CCu;
            goto label_7998cc;
        }
    }
    ctx->pc = 0x799888u;
label_799888:
    // 0x799888: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x799888u;
    {
        const bool branch_taken_0x799888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799888u;
        // 0x79988c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799888) {
            ctx->pc = 0x799898u;
            goto label_799898;
        }
    }
    ctx->pc = 0x799890u;
label_799890:
    // 0x799890: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x799890u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x799894: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799898:
    // 0x799898: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x799898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x79989c: 0xc07e996  jal         func_1FA658
    ctx->pc = 0x79989Cu;
    SET_GPR_U32(ctx, 31, 0x7998A4u);
    ctx->pc = 0x7998A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79989Cu;
    // 0x7998a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA658u, 0x79989Cu, 0x7998A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998A4u;
label_7998a4:
    // 0x7998a4: 0xc07e634  jal         func_1F98D0
    ctx->pc = 0x7998A4u;
    SET_GPR_U32(ctx, 31, 0x7998ACu);
    ctx->pc = 0x7998A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998A4u;
    // 0x7998a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F98D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F98D0u, 0x7998A4u, 0x7998ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998ACu;
label_7998ac:
    // 0x7998ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x7998ACu;
    {
        const bool branch_taken_0x7998ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7998ac) {
            ctx->pc = 0x7998CCu;
            goto label_7998cc;
        }
    }
    ctx->pc = 0x7998B4u;
label_7998b4:
    // 0x7998b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x7998b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7998b8: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x7998b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x7998bc: 0xc07e996  jal         func_1FA658
    ctx->pc = 0x7998BCu;
    SET_GPR_U32(ctx, 31, 0x7998C4u);
    ctx->pc = 0x7998C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998BCu;
    // 0x7998c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA658u, 0x7998BCu, 0x7998C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998C4u;
label_7998c4:
    // 0x7998c4: 0xc07e634  jal         func_1F98D0
    ctx->pc = 0x7998C4u;
    SET_GPR_U32(ctx, 31, 0x7998CCu);
    ctx->pc = 0x7998C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998C4u;
    // 0x7998c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F98D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F98D0u, 0x7998C4u, 0x7998CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998CCu;
label_7998cc:
    // 0x7998cc: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x7998ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7998d0: 0x962500d8  lhu         $a1, 0xD8($s1)
    ctx->pc = 0x7998d0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x7998d4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x7998d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998d8: 0x922600d4  lbu         $a2, 0xD4($s1)
    ctx->pc = 0x7998d8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x7998dc: 0xc0afa66  jal         func_2BE998
    ctx->pc = 0x7998DCu;
    SET_GPR_U32(ctx, 31, 0x7998E4u);
    ctx->pc = 0x7998E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998DCu;
    // 0x7998e0: 0x262400dc  addiu       $a0, $s1, 0xDC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 220));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE998u, 0x7998DCu, 0x7998E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998E4u;
label_7998e4:
    // 0x7998e4: 0x922300d4  lbu         $v1, 0xD4($s1)
    ctx->pc = 0x7998e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x7998e8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7998e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x7998ec: 0xc7ac000c  lwc1        $f12, 0xC($sp)
    ctx->pc = 0x7998ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7998f0: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x7998f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x7998f4: 0xa04305a8  sb          $v1, 0x5A8($v0)
    ctx->pc = 0x7998f4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x747A48u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x747A48u, _value); } while (0);
    // 0x7998f8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x7998f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998fc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7998fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799900: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x799900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799904: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x799904u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799908: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799908u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79990c: 0x962500d8  lhu         $a1, 0xD8($s1)
    ctx->pc = 0x79990cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x799910: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x799910u;
    SET_GPR_U32(ctx, 31, 0x799918u);
    ctx->pc = 0x799914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799910u;
    // 0x799914: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x799910u, 0x799918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799918u;
label_799918:
    // 0x799918: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x799918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79991c: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x79991cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x799920: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x799920u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799924: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x799924u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x799928: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x799928u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x79992c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79992cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799930: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x799930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799934: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x799934u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799938: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79993c: 0x3e00008  jr          $ra
    ctx->pc = 0x79993Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79993Cu;
        // 0x799940: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79993Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799944u;
    // 0x799944: 0x0  nop
    ctx->pc = 0x799944u;
    // NOP
    ctx->pc = 0x799948u;
}
} // namespace gh_r020
