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

// Function: cCockTutorial_roomInit
// Address: 0x147028 - 0x147188
void cCockTutorial_roomInit_0x147028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCockTutorial_roomInit_0x147028");
#endif

    switch (ctx->pc) {
        case 0x147068u: goto label_147068;
        case 0x147098u: goto label_147098;
        case 0x1470a8u: goto label_1470a8;
        case 0x1470c0u: goto label_1470c0;
        case 0x1470d0u: goto label_1470d0;
        case 0x1470e0u: goto label_1470e0;
        case 0x1470ecu: goto label_1470ec;
        case 0x1470f8u: goto label_1470f8;
        case 0x147104u: goto label_147104;
        default: break;
    }

    ctx->pc = 0x147028u;

    // 0x147028: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x147028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x14702c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x14702cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x147030: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x147030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x147034: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x147034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147038: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x147038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x14703c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14703cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x147040: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x147040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x147044: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x147044u;
    {
        const bool branch_taken_0x147044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x147044) {
            ctx->pc = 0x147048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147044u;
            // 0x147048: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1470E4u;
            goto label_1470e4;
        }
    }
    ctx->pc = 0x14704Cu;
    // 0x14704c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x14704cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x147050: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x147050u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
    // 0x147054: 0x8c442388  lw          $a0, 0x2388($v0)
    ctx->pc = 0x147054u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2388u));
    // 0x147058: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x147058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14705c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x14705cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x147060: 0xc0ab3ea  jal         func_2ACFA8
    ctx->pc = 0x147060u;
    SET_GPR_U32(ctx, 31, 0x147068u);
    ctx->pc = 0x147064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147060u;
    // 0x147064: 0x24c6e970  addiu       $a2, $a2, -0x1690 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACFA8u, 0x147060u, 0x147068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147068u;
label_147068:
    // 0x147068: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x147068u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x14706c: 0x3c070075  lui         $a3, 0x75
    ctx->pc = 0x14706cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)117 << 16));
    // 0x147070: 0x26103f20  addiu       $s0, $s0, 0x3F20
    ctx->pc = 0x147070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16160));
    // 0x147074: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x147074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147078: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x147078u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14707c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14707cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147080: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x147080u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147084: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x147084u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147088: 0x24e74220  addiu       $a3, $a3, 0x4220
    ctx->pc = 0x147088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16928));
    // 0x14708c: 0x262600b0  addiu       $a2, $s1, 0xB0
    ctx->pc = 0x14708cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x147090: 0xc08032c  jal         func_200CB0
    ctx->pc = 0x147090u;
    SET_GPR_U32(ctx, 31, 0x147098u);
    ctx->pc = 0x147094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147090u;
    // 0x147094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x147090u, 0x147098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147098u;
label_147098:
    // 0x147098: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x147098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14709c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14709cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1470a0: 0xc080458  jal         func_201160
    ctx->pc = 0x1470A0u;
    SET_GPR_U32(ctx, 31, 0x1470A8u);
    ctx->pc = 0x1470A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1470A0u;
    // 0x1470a4: 0xae2200b4  sw          $v0, 0xB4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201160u, 0x1470A0u, 0x1470A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1470A8u;
label_1470a8:
    // 0x1470a8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1470a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1470ac: 0x8e2600b0  lw          $a2, 0xB0($s1)
    ctx->pc = 0x1470acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x1470b0: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x1470b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x1470b4: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1470b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1470b8: 0xc0ab33e  jal         func_2ACCF8
    ctx->pc = 0x1470B8u;
    SET_GPR_U32(ctx, 31, 0x1470C0u);
    ctx->pc = 0x1470BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1470B8u;
    // 0x1470bc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCF8u, 0x1470B8u, 0x1470C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1470C0u;
label_1470c0:
    // 0x1470c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1470c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1470c4: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1470c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1470c8: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x1470C8u;
    SET_GPR_U32(ctx, 31, 0x1470D0u);
    ctx->pc = 0x1470CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1470C8u;
    // 0x1470cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x1470C8u, 0x1470D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1470D0u;
label_1470d0:
    // 0x1470d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1470d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1470d4: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1470d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1470d8: 0xc0aa7cc  jal         func_2A9F30
    ctx->pc = 0x1470D8u;
    SET_GPR_U32(ctx, 31, 0x1470E0u);
    ctx->pc = 0x1470DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1470D8u;
    // 0x1470dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9F30u, 0x1470D8u, 0x1470E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1470E0u;
label_1470e0:
    // 0x1470e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1470e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1470e4:
    // 0x1470e4: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x1470E4u;
    SET_GPR_U32(ctx, 31, 0x1470ECu);
    ctx->pc = 0x1470E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1470E4u;
    // 0x1470e8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x1470E4u, 0x1470ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1470ECu;
label_1470ec:
    // 0x1470ec: 0x26300090  addiu       $s0, $s1, 0x90
    ctx->pc = 0x1470ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x1470f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1470f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1470f4: 0xa222001c  sb          $v0, 0x1C($s1)
    ctx->pc = 0x1470f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 2));
label_1470f8:
    // 0x1470f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1470f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1470fc: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1470FCu;
    SET_GPR_U32(ctx, 31, 0x147104u);
    ctx->pc = 0x147100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1470FCu;
    // 0x147100: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1470FCu, 0x147104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147104u;
label_147104:
    // 0x147104: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x147104u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x147108: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x147108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14710c: 0x2e420007  sltiu       $v0, $s2, 0x7
    ctx->pc = 0x14710cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x147110: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x147110u;
    {
        const bool branch_taken_0x147110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147110u;
        // 0x147114: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147110) {
            ctx->pc = 0x1470F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1470f8;
        }
    }
    ctx->pc = 0x147118u;
    // 0x147118: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x147118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x14711c: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x14711cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x147120: 0x2406200c  addiu       $a2, $zero, 0x200C
    ctx->pc = 0x147120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8204));
    // 0x147124: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x147124u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x147128: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x147128u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x14712c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x14712cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x147130: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x147130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x147134: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x147134u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x147138: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x147138u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x14713c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14713cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x147140: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x147140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x147144: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x147144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x147148: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x147148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x14714c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x14714cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x147150: 0x8e240098  lw          $a0, 0x98($s1)
    ctx->pc = 0x147150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x147154: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x147154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x147158: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x147158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x14715c: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x14715cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x147160: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x147160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x147164: 0xa4660090  sh          $a2, 0x90($v1)
    ctx->pc = 0x147164u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 6));
    // 0x147168: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x147168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x14716c: 0xa4460090  sh          $a2, 0x90($v0)
    ctx->pc = 0x14716cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 6));
    // 0x147170: 0xa62700ac  sh          $a3, 0xAC($s1)
    ctx->pc = 0x147170u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 172), (uint16_t)GPR_U32(ctx, 7));
    // 0x147174: 0xa22000b8  sb          $zero, 0xB8($s1)
    ctx->pc = 0x147174u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 184), (uint8_t)GPR_U32(ctx, 0));
    // 0x147178: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x147178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14717c: 0x3e00008  jr          $ra
    ctx->pc = 0x14717Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14717Cu;
        // 0x147180: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14717Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147184u;
    // 0x147184: 0x0  nop
    ctx->pc = 0x147184u;
    // NOP
    ctx->pc = 0x147188u;
}
