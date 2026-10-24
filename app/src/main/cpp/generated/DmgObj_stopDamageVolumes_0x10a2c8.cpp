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

// Function: DmgObj_stopDamageVolumes
// Address: 0x10a2c8 - 0x10a408
void DmgObj_stopDamageVolumes_0x10a2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DmgObj_stopDamageVolumes_0x10a2c8");
#endif

    switch (ctx->pc) {
        case 0x10a32cu: goto label_10a32c;
        case 0x10a33cu: goto label_10a33c;
        case 0x10a358u: goto label_10a358;
        case 0x10a368u: goto label_10a368;
        case 0x10a384u: goto label_10a384;
        case 0x10a394u: goto label_10a394;
        case 0x10a3b0u: goto label_10a3b0;
        case 0x10a3c0u: goto label_10a3c0;
        case 0x10a3dcu: goto label_10a3dc;
        case 0x10a3ecu: goto label_10a3ec;
        default: break;
    }

    ctx->pc = 0x10a2c8u;

    // 0x10a2c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10a2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10a2cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10a2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10a2d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10a2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10a2d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10a2d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a2d8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x10a2d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10a2dc: 0x8e0305b0  lw          $v1, 0x5B0($s0)
    ctx->pc = 0x10a2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x10a2e0: 0x50600045  beql        $v1, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x10A2E0u;
    {
        const bool branch_taken_0x10a2e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a2e0) {
            ctx->pc = 0x10A2E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A2E0u;
            // 0x10a2e4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A3F8u;
            goto label_10a3f8;
        }
    }
    ctx->pc = 0x10A2E8u;
    // 0x10a2e8: 0x8e0205b8  lw          $v0, 0x5B8($s0)
    ctx->pc = 0x10a2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x10a2ec: 0x50400042  beql        $v0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x10A2ECu;
    {
        const bool branch_taken_0x10a2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a2ec) {
            ctx->pc = 0x10A2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A2ECu;
            // 0x10a2f0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A3F8u;
            goto label_10a3f8;
        }
    }
    ctx->pc = 0x10A2F4u;
    // 0x10a2f4: 0x8e0205c0  lw          $v0, 0x5C0($s0)
    ctx->pc = 0x10a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1472)));
    // 0x10a2f8: 0x5040003f  beql        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x10A2F8u;
    {
        const bool branch_taken_0x10a2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a2f8) {
            ctx->pc = 0x10A2FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A2F8u;
            // 0x10a2fc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A3F8u;
            goto label_10a3f8;
        }
    }
    ctx->pc = 0x10A300u;
    // 0x10a300: 0x8e0205c8  lw          $v0, 0x5C8($s0)
    ctx->pc = 0x10a300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1480)));
    // 0x10a304: 0x5040003c  beql        $v0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x10A304u;
    {
        const bool branch_taken_0x10a304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a304) {
            ctx->pc = 0x10A308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A304u;
            // 0x10a308: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A3F8u;
            goto label_10a3f8;
        }
    }
    ctx->pc = 0x10A30Cu;
    // 0x10a30c: 0x8e0205d0  lw          $v0, 0x5D0($s0)
    ctx->pc = 0x10a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1488)));
    // 0x10a310: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x10A310u;
    {
        const bool branch_taken_0x10a310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a310) {
            ctx->pc = 0x10A314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A310u;
            // 0x10a314: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A3F8u;
            goto label_10a3f8;
        }
    }
    ctx->pc = 0x10A318u;
    // 0x10a318: 0xa4600046  sh          $zero, 0x46($v1)
    ctx->pc = 0x10a318u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 0));
    // 0x10a31c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10a31cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a320: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x10a320u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10a324: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10A324u;
    SET_GPR_U32(ctx, 31, 0x10A32Cu);
    ctx->pc = 0x10A328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A324u;
    // 0x10a328: 0x8e0405b0  lw          $a0, 0x5B0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10A324u, 0x10A32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A32Cu;
label_10a32c:
    // 0x10a32c: 0x8e0405b0  lw          $a0, 0x5B0($s0)
    ctx->pc = 0x10a32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x10a330: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10a330u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x10a334: 0xc07f5ec  jal         func_1FD7B0
    ctx->pc = 0x10A334u;
    SET_GPR_U32(ctx, 31, 0x10A33Cu);
    ctx->pc = 0x10A338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A334u;
    // 0x10a338: 0x8e0505b4  lw          $a1, 0x5B4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1460)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7B0u, 0x10A334u, 0x10A33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A33Cu;
label_10a33c:
    // 0x10a33c: 0x8e0305b0  lw          $v1, 0x5B0($s0)
    ctx->pc = 0x10a33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x10a340: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10a340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a344: 0xac60004c  sw          $zero, 0x4C($v1)
    ctx->pc = 0x10a344u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 0));
    // 0x10a348: 0x8e0205b8  lw          $v0, 0x5B8($s0)
    ctx->pc = 0x10a348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x10a34c: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x10a34cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
    // 0x10a350: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10A350u;
    SET_GPR_U32(ctx, 31, 0x10A358u);
    ctx->pc = 0x10A354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A350u;
    // 0x10a354: 0x8e0405b8  lw          $a0, 0x5B8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10A350u, 0x10A358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A358u;
label_10a358:
    // 0x10a358: 0x8e0405b8  lw          $a0, 0x5B8($s0)
    ctx->pc = 0x10a358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x10a35c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10a35cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x10a360: 0xc07f5ec  jal         func_1FD7B0
    ctx->pc = 0x10A360u;
    SET_GPR_U32(ctx, 31, 0x10A368u);
    ctx->pc = 0x10A364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A360u;
    // 0x10a364: 0x8e0505bc  lw          $a1, 0x5BC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1468)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7B0u, 0x10A360u, 0x10A368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A368u;
label_10a368:
    // 0x10a368: 0x8e0305b8  lw          $v1, 0x5B8($s0)
    ctx->pc = 0x10a368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x10a36c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10a36cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a370: 0xac60004c  sw          $zero, 0x4C($v1)
    ctx->pc = 0x10a370u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 0));
    // 0x10a374: 0x8e0205c0  lw          $v0, 0x5C0($s0)
    ctx->pc = 0x10a374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1472)));
    // 0x10a378: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x10a378u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
    // 0x10a37c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10A37Cu;
    SET_GPR_U32(ctx, 31, 0x10A384u);
    ctx->pc = 0x10A380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A37Cu;
    // 0x10a380: 0x8e0405c0  lw          $a0, 0x5C0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1472)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10A37Cu, 0x10A384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A384u;
label_10a384:
    // 0x10a384: 0x8e0405c0  lw          $a0, 0x5C0($s0)
    ctx->pc = 0x10a384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1472)));
    // 0x10a388: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10a388u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x10a38c: 0xc07f5ec  jal         func_1FD7B0
    ctx->pc = 0x10A38Cu;
    SET_GPR_U32(ctx, 31, 0x10A394u);
    ctx->pc = 0x10A390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A38Cu;
    // 0x10a390: 0x8e0505c4  lw          $a1, 0x5C4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1476)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7B0u, 0x10A38Cu, 0x10A394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A394u;
label_10a394:
    // 0x10a394: 0x8e0305c0  lw          $v1, 0x5C0($s0)
    ctx->pc = 0x10a394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1472)));
    // 0x10a398: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10a398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a39c: 0xac60004c  sw          $zero, 0x4C($v1)
    ctx->pc = 0x10a39cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 0));
    // 0x10a3a0: 0x8e0205c8  lw          $v0, 0x5C8($s0)
    ctx->pc = 0x10a3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1480)));
    // 0x10a3a4: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x10a3a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
    // 0x10a3a8: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10A3A8u;
    SET_GPR_U32(ctx, 31, 0x10A3B0u);
    ctx->pc = 0x10A3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A3A8u;
    // 0x10a3ac: 0x8e0405c8  lw          $a0, 0x5C8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1480)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10A3A8u, 0x10A3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A3B0u;
label_10a3b0:
    // 0x10a3b0: 0x8e0405c8  lw          $a0, 0x5C8($s0)
    ctx->pc = 0x10a3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1480)));
    // 0x10a3b4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10a3b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x10a3b8: 0xc07f5ec  jal         func_1FD7B0
    ctx->pc = 0x10A3B8u;
    SET_GPR_U32(ctx, 31, 0x10A3C0u);
    ctx->pc = 0x10A3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A3B8u;
    // 0x10a3bc: 0x8e0505cc  lw          $a1, 0x5CC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1484)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7B0u, 0x10A3B8u, 0x10A3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A3C0u;
label_10a3c0:
    // 0x10a3c0: 0x8e0305c8  lw          $v1, 0x5C8($s0)
    ctx->pc = 0x10a3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1480)));
    // 0x10a3c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10a3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a3c8: 0xac60004c  sw          $zero, 0x4C($v1)
    ctx->pc = 0x10a3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 0));
    // 0x10a3cc: 0x8e0205d0  lw          $v0, 0x5D0($s0)
    ctx->pc = 0x10a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1488)));
    // 0x10a3d0: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x10a3d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
    // 0x10a3d4: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x10A3D4u;
    SET_GPR_U32(ctx, 31, 0x10A3DCu);
    ctx->pc = 0x10A3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A3D4u;
    // 0x10a3d8: 0x8e0405d0  lw          $a0, 0x5D0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10A3D4u, 0x10A3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A3DCu;
label_10a3dc:
    // 0x10a3dc: 0x8e0405d0  lw          $a0, 0x5D0($s0)
    ctx->pc = 0x10a3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1488)));
    // 0x10a3e0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10a3e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x10a3e4: 0xc07f5ec  jal         func_1FD7B0
    ctx->pc = 0x10A3E4u;
    SET_GPR_U32(ctx, 31, 0x10A3ECu);
    ctx->pc = 0x10A3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A3E4u;
    // 0x10a3e8: 0x8e0505d4  lw          $a1, 0x5D4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1492)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7B0u, 0x10A3E4u, 0x10A3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A3ECu;
label_10a3ec:
    // 0x10a3ec: 0x8e0205d0  lw          $v0, 0x5D0($s0)
    ctx->pc = 0x10a3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1488)));
    // 0x10a3f0: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x10a3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x10a3f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10a3f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10a3f8:
    // 0x10a3f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10a3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a3fc: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x10a3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10a400: 0x3e00008  jr          $ra
    ctx->pc = 0x10A400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A400u;
        // 0x10a404: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A408u;
}
