#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r302_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r302
{
// Function: func_00799908
// Address: 0x799908 - 0x799a30
void func_00799908_0x799908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799908_0x799908");
#endif

    switch (ctx->pc) {
        case 0x799940u: goto label_799940;
        case 0x79994cu: goto label_79994c;
        case 0x799954u: goto label_799954;
        case 0x79996cu: goto label_79996c;
        case 0x799980u: goto label_799980;
        case 0x799990u: goto label_799990;
        case 0x7999a0u: goto label_7999a0;
        case 0x7999ccu: goto label_7999cc;
        case 0x7999e0u: goto label_7999e0;
        case 0x7999e8u: goto label_7999e8;
        case 0x7999f8u: goto label_7999f8;
        case 0x799a08u: goto label_799a08;
        case 0x799a14u: goto label_799a14;
        default: break;
    }

    ctx->pc = 0x799908u;

    // 0x799908: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x799908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x79990c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79990cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799910: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x799910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799914: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x799914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x799918: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x799918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x79991c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x79991cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x799920: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x799920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x799924: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x799924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x799928: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799928u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79992c: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x79992cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x799930: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x799930u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x799934: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x799934u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799938: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x799938u;
    {
        const bool branch_taken_0x799938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799938u;
        // 0x79993c: 0x3c130058  lui         $s3, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799938) {
            ctx->pc = 0x79994Cu;
            goto label_79994c;
        }
    }
    ctx->pc = 0x799940u;
label_799940:
    // 0x799940: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799944: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799944u;
    SET_GPR_U32(ctx, 31, 0x79994Cu);
    ctx->pc = 0x799948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799944u;
    // 0x799948: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799944u, 0x79994Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79994Cu;
label_79994c:
    // 0x79994c: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79994Cu;
    SET_GPR_U32(ctx, 31, 0x799954u);
    ctx->pc = 0x799950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79994Cu;
    // 0x799950: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79994Cu, 0x799954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799954u;
label_799954:
    // 0x799954: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799958: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79995c: 0x1602fff8  bne         $s0, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x79995Cu;
    {
        const bool branch_taken_0x79995c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x799960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79995Cu;
        // 0x799960: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79995c) {
            ctx->pc = 0x799940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799940;
        }
    }
    ctx->pc = 0x799964u;
    // 0x799964: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799964u;
    SET_GPR_U32(ctx, 31, 0x79996Cu);
    ctx->pc = 0x799968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799964u;
    // 0x799968: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799964u, 0x79996Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79996Cu;
label_79996c:
    // 0x79996c: 0x1450fff4  bne         $v0, $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x79996Cu;
    {
        const bool branch_taken_0x79996c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x799970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79996Cu;
        // 0x799970: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79996c) {
            ctx->pc = 0x799940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799940;
        }
    }
    ctx->pc = 0x799974u;
    // 0x799974: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x799974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x799978: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799978u;
    SET_GPR_U32(ctx, 31, 0x799980u);
    ctx->pc = 0x79997Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799978u;
    // 0x79997c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799978u, 0x799980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799980u;
label_799980:
    // 0x799980: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x799980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x799984: 0x245064f0  addiu       $s0, $v0, 0x64F0
    ctx->pc = 0x799984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x799988: 0x8e030500  lw          $v1, 0x500($s0)
    ctx->pc = 0x799988u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5869F0u));
    // 0x79998c: 0x0  nop
    ctx->pc = 0x79998cu;
    // NOP
label_799990:
    // 0x799990: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x799990u;
    {
        const bool branch_taken_0x799990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799990u;
        // 0x799994: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799990) {
            ctx->pc = 0x7999B8u;
            goto label_7999b8;
        }
    }
    ctx->pc = 0x799998u;
    // 0x799998: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79999c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x79999cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_7999a0:
    // 0x7999a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7999A0u;
    {
        const bool branch_taken_0x7999a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999A0u;
        // 0x7999a4: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999a0) {
            ctx->pc = 0x7999B0u;
            goto label_7999b0;
        }
    }
    ctx->pc = 0x7999A8u;
    // 0x7999a8: 0x90420614  lbu         $v0, 0x614($v0)
    ctx->pc = 0x7999a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1556)));
    // 0x7999ac: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x7999acu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
label_7999b0:
    // 0x7999b0: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7999B0u;
    {
        const bool branch_taken_0x7999b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x7999b0) {
            ctx->pc = 0x7999B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7999B0u;
            // 0x7999b4: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7999A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7999a0;
        }
    }
    ctx->pc = 0x7999B8u;
label_7999b8:
    // 0x7999b8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7999B8u;
    {
        const bool branch_taken_0x7999b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999B8u;
        // 0x7999bc: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999b8) {
            ctx->pc = 0x7999D4u;
            goto label_7999d4;
        }
    }
    ctx->pc = 0x7999C0u;
    // 0x7999c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7999c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7999c4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7999C4u;
    SET_GPR_U32(ctx, 31, 0x7999CCu);
    ctx->pc = 0x7999C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999C4u;
    // 0x7999c8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7999C4u, 0x7999CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999CCu;
label_7999cc:
    // 0x7999cc: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x7999CCu;
    {
        const bool branch_taken_0x7999cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999CCu;
        // 0x7999d0: 0x8e030500  lw          $v1, 0x500($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999cc) {
            ctx->pc = 0x799990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799990;
        }
    }
    ctx->pc = 0x7999D4u;
label_7999d4:
    // 0x7999d4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x7999d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x7999d8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7999D8u;
    SET_GPR_U32(ctx, 31, 0x7999E0u);
    ctx->pc = 0x7999DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999D8u;
    // 0x7999dc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7999D8u, 0x7999E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999E0u;
label_7999e0:
    // 0x7999e0: 0xc1e668c  jal         func_799A30
    ctx->pc = 0x7999E0u;
    SET_GPR_U32(ctx, 31, 0x7999E8u);
    ctx->pc = 0x7999E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999E0u;
    // 0x7999e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799A30u, 0x7999E0u, 0x7999E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999E8u;
label_7999e8:
    // 0x7999e8: 0x266464f0  addiu       $a0, $s3, 0x64F0
    ctx->pc = 0x7999e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 25840));
    // 0x7999ec: 0xa3a00020  sb          $zero, 0x20($sp)
    ctx->pc = 0x7999ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x7999f0: 0xc0a421a  jal         func_290868
    ctx->pc = 0x7999F0u;
    SET_GPR_U32(ctx, 31, 0x7999F8u);
    ctx->pc = 0x7999F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999F0u;
    // 0x7999f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x7999F0u, 0x7999F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999F8u;
label_7999f8:
    // 0x7999f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7999F8u;
    {
        const bool branch_taken_0x7999f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999F8u;
        // 0x7999fc: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999f8) {
            ctx->pc = 0x799A0Cu;
            goto label_799a0c;
        }
    }
    ctx->pc = 0x799A00u;
    // 0x799a00: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799A00u;
    SET_GPR_U32(ctx, 31, 0x799A08u);
    ctx->pc = 0x799A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A00u;
    // 0x799a04: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799A00u, 0x799A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A08u;
label_799a08:
    // 0x799a08: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x799a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_799a0c:
    // 0x799a0c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799A0Cu;
    SET_GPR_U32(ctx, 31, 0x799A14u);
    ctx->pc = 0x799A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A0Cu;
    // 0x799a10: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799A0Cu, 0x799A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A14u;
label_799a14:
    // 0x799a14: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x799a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799a18: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x799a18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799a1c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x799a1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799a20: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x799a20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799a24: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x799a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799a28: 0x3e00008  jr          $ra
    ctx->pc = 0x799A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A28u;
        // 0x799a2c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799A30u;
}
} // namespace gh_r302
