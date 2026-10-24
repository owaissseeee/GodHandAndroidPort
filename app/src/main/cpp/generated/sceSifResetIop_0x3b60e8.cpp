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

// Function: sceSifResetIop
// Address: 0x3b60e8 - 0x3b6240
void sceSifResetIop_0x3b60e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifResetIop_0x3b60e8");
#endif

    switch (ctx->pc) {
        case 0x3b610cu: goto label_3b610c;
        case 0x3b6118u: goto label_3b6118;
        case 0x3b6120u: goto label_3b6120;
        case 0x3b6128u: goto label_3b6128;
        case 0x3b6150u: goto label_3b6150;
        case 0x3b61ccu: goto label_3b61cc;
        case 0x3b61d8u: goto label_3b61d8;
        case 0x3b61e4u: goto label_3b61e4;
        case 0x3b61f4u: goto label_3b61f4;
        case 0x3b6200u: goto label_3b6200;
        case 0x3b6210u: goto label_3b6210;
        case 0x3b621cu: goto label_3b621c;
        default: break;
    }

    ctx->pc = 0x3b60e8u;

    // 0x3b60e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b60e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b60ec: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x3b60ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x3b60f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3b60f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3b60f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b60f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b60f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3b60f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b60fc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b60fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b6100: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3b6100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6104: 0xc0ede70  jal         func_3B79C0
    ctx->pc = 0x3B6104u;
    SET_GPR_U32(ctx, 31, 0x3B610Cu);
    ctx->pc = 0x3B6108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6104u;
    // 0x3b6108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B79C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B79C0u, 0x3B6104u, 0x3B610Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B610Cu;
label_3b610c:
    // 0x3b610c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3b610cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b6110: 0xc0ede70  jal         func_3B79C0
    ctx->pc = 0x3B6110u;
    SET_GPR_U32(ctx, 31, 0x3B6118u);
    ctx->pc = 0x3B6114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6110u;
    // 0x3b6114: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B79C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B79C0u, 0x3B6110u, 0x3B6118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6118u;
label_3b6118:
    // 0x3b6118: 0xc0ebfdc  jal         func_3AFF70
    ctx->pc = 0x3B6118u;
    SET_GPR_U32(ctx, 31, 0x3B6120u);
    ctx->pc = 0x3AFF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFF70u, 0x3B6118u, 0x3B6120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6120u;
label_3b6120:
    // 0x3b6120: 0xc0ec02c  jal         func_3B00B0
    ctx->pc = 0x3B6120u;
    SET_GPR_U32(ctx, 31, 0x3B6128u);
    ctx->pc = 0x3B6124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6120u;
    // 0x3b6124: 0x3c048000  lui         $a0, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B00B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B00B0u, 0x3B6120u, 0x3B6128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6128u;
label_3b6128:
    // 0x3b6128: 0x3c0a0078  lui         $t2, 0x78
    ctx->pc = 0x3b6128u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)120 << 16));
    // 0x3b612c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x3b612cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6130: 0x25431bc0  addiu       $v1, $t2, 0x1BC0
    ctx->pc = 0x3b6130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 7104));
    // 0x3b6134: 0xac700014  sw          $s0, 0x14($v1)
    ctx->pc = 0x3b6134u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x781BD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x781BD4u, _value); } while (0);
    // 0x3b6138: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x3b6138u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3b613c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3B613Cu;
    {
        const bool branch_taken_0x3b613c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B613Cu;
        // 0x3b6140: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b613c) {
            ctx->pc = 0x3B6170u;
            goto label_3b6170;
        }
    }
    ctx->pc = 0x3B6144u;
    // 0x3b6144: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b6144u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6148: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x3b6148u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b614c: 0x0  nop
    ctx->pc = 0x3b614cu;
    // NOP
label_3b6150:
    // 0x3b6150: 0x25431bc0  addiu       $v1, $t2, 0x1BC0
    ctx->pc = 0x3b6150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 7104));
    // 0x3b6154: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3b6154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3b6158: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3b6158u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3b615c: 0xa0640018  sb          $a0, 0x18($v1)
    ctx->pc = 0x3b615cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 24), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b6160: 0x2291021  addu        $v0, $s1, $t1
    ctx->pc = 0x3b6160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x3b6164: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x3b6164u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6168: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3B6168u;
    {
        const bool branch_taken_0x3b6168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b6168) {
            ctx->pc = 0x3B616Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B6168u;
            // 0x3b616c: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B6150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6150;
        }
    }
    ctx->pc = 0x3B6170u;
label_3b6170:
    // 0x3b6170: 0x25461bc0  addiu       $a2, $t2, 0x1BC0
    ctx->pc = 0x3b6170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 7104));
    // 0x3b6174: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3b6174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3b6178: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x3b6178u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x3b617c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3b617cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b6180: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3b6180u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3b6184: 0x348400ff  ori         $a0, $a0, 0xFF
    ctx->pc = 0x3b6184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)255);
    // 0x3b6188: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x3b6188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x3b618c: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x3b618cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x3b6190: 0xdd421bc0  ld          $v0, 0x1BC0($t2)
    ctx->pc = 0x3b6190u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 10), 7104)));
    // 0x3b6194: 0x24070068  addiu       $a3, $zero, 0x68
    ctx->pc = 0x3b6194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x3b6198: 0xacc90010  sw          $t1, 0x10($a2)
    ctx->pc = 0x3b6198u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 9));
    // 0x3b619c: 0x24080044  addiu       $t0, $zero, 0x44
    ctx->pc = 0x3b619cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x3b61a0: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x3b61a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x3b61a4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3b61a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3b61a8: 0xfd421bc0  sd          $v0, 0x1BC0($t2)
    ctx->pc = 0x3b61a8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 7104), GPR_U64(ctx, 2));
    // 0x3b61ac: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3b61acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b61b0: 0xa1451bc0  sb          $a1, 0x1BC0($t2)
    ctx->pc = 0x3b61b0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 7104), (uint8_t)GPR_U32(ctx, 5));
    // 0x3b61b4: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x3b61b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x3b61b8: 0xafab0004  sw          $t3, 0x4($sp)
    ctx->pc = 0x3b61b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 11));
    // 0x3b61bc: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x3b61bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x3b61c0: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x3b61c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x3b61c4: 0xc0eca14  jal         func_3B2850
    ctx->pc = 0x3B61C4u;
    SET_GPR_U32(ctx, 31, 0x3B61CCu);
    ctx->pc = 0x3B61C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B61C4u;
    // 0x3b61c8: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2850u, 0x3B61C4u, 0x3B61CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B61CCu;
label_3b61cc:
    // 0x3b61cc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3b61ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b61d0: 0xc0ec028  jal         func_3B00A0
    ctx->pc = 0x3B61D0u;
    SET_GPR_U32(ctx, 31, 0x3B61D8u);
    ctx->pc = 0x3B61D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B61D0u;
    // 0x3b61d4: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B00A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B00A0u, 0x3B61D0u, 0x3B61D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B61D8u;
label_3b61d8:
    // 0x3b61d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3b61d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b61dc: 0xc0ec018  jal         func_3B0060
    ctx->pc = 0x3B61DCu;
    SET_GPR_U32(ctx, 31, 0x3B61E4u);
    ctx->pc = 0x3B61E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B61DCu;
    // 0x3b61e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0060u, 0x3B61DCu, 0x3B61E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B61E4u;
label_3b61e4:
    // 0x3b61e4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3B61E4u;
    {
        const bool branch_taken_0x3b61e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B61E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B61E4u;
        // 0x3b61e8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b61e4) {
            ctx->pc = 0x3B6224u;
            goto label_3b6224;
        }
    }
    ctx->pc = 0x3B61ECu;
    // 0x3b61ec: 0xc0ec028  jal         func_3B00A0
    ctx->pc = 0x3B61ECu;
    SET_GPR_U32(ctx, 31, 0x3B61F4u);
    ctx->pc = 0x3B61F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B61ECu;
    // 0x3b61f0: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B00A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B00A0u, 0x3B61ECu, 0x3B61F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B61F4u;
label_3b61f4:
    // 0x3b61f4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3b61f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b61f8: 0xc0ec028  jal         func_3B00A0
    ctx->pc = 0x3B61F8u;
    SET_GPR_U32(ctx, 31, 0x3B6200u);
    ctx->pc = 0x3B61FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B61F8u;
    // 0x3b61fc: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B00A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B00A0u, 0x3B61F8u, 0x3B6200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6200u;
label_3b6200:
    // 0x3b6200: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3b6200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3b6204: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b6204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6208: 0xc0ec028  jal         func_3B00A0
    ctx->pc = 0x3B6208u;
    SET_GPR_U32(ctx, 31, 0x3B6210u);
    ctx->pc = 0x3B620Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6208u;
    // 0x3b620c: 0x34840002  ori         $a0, $a0, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B00A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B00A0u, 0x3B6208u, 0x3B6210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6210u;
label_3b6210:
    // 0x3b6210: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3b6210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3b6214: 0xc0ec028  jal         func_3B00A0
    ctx->pc = 0x3B6214u;
    SET_GPR_U32(ctx, 31, 0x3B621Cu);
    ctx->pc = 0x3B6218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6214u;
    // 0x3b6218: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B00A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B00A0u, 0x3B6214u, 0x3B621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B621Cu;
label_3b621c:
    // 0x3b621c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3B621Cu;
    {
        const bool branch_taken_0x3b621c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B621Cu;
        // 0x3b6220: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b621c) {
            ctx->pc = 0x3B6228u;
            goto label_3b6228;
        }
    }
    ctx->pc = 0x3B6224u;
label_3b6224:
    // 0x3b6224: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b6224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b6228:
    // 0x3b6228: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b6228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b622c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x3b622cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b6230: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3b6230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b6234: 0x3e00008  jr          $ra
    ctx->pc = 0x3B6234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6234u;
        // 0x3b6238: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B623Cu;
    // 0x3b623c: 0x0  nop
    ctx->pc = 0x3b623cu;
    // NOP
    ctx->pc = 0x3b6240u;
}
