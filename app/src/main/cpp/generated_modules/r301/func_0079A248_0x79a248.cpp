#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: func_0079A248
// Address: 0x79a248 - 0x79a498
void func_0079A248_0x79a248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A248_0x79a248");
#endif

    switch (ctx->pc) {
        case 0x79a294u: goto label_79a294;
        case 0x79a2a0u: goto label_79a2a0;
        case 0x79a2bcu: goto label_79a2bc;
        case 0x79a2d4u: goto label_79a2d4;
        case 0x79a2fcu: goto label_79a2fc;
        case 0x79a314u: goto label_79a314;
        case 0x79a31cu: goto label_79a31c;
        case 0x79a328u: goto label_79a328;
        case 0x79a344u: goto label_79a344;
        case 0x79a34cu: goto label_79a34c;
        case 0x79a358u: goto label_79a358;
        case 0x79a378u: goto label_79a378;
        case 0x79a380u: goto label_79a380;
        case 0x79a388u: goto label_79a388;
        case 0x79a394u: goto label_79a394;
        case 0x79a3a0u: goto label_79a3a0;
        case 0x79a3acu: goto label_79a3ac;
        case 0x79a3b4u: goto label_79a3b4;
        case 0x79a3c8u: goto label_79a3c8;
        case 0x79a3dcu: goto label_79a3dc;
        case 0x79a3e8u: goto label_79a3e8;
        case 0x79a3f8u: goto label_79a3f8;
        case 0x79a424u: goto label_79a424;
        case 0x79a43cu: goto label_79a43c;
        case 0x79a448u: goto label_79a448;
        case 0x79a454u: goto label_79a454;
        case 0x79a460u: goto label_79a460;
        case 0x79a46cu: goto label_79a46c;
        default: break;
    }

    ctx->pc = 0x79a248u;

    // 0x79a248: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x79a248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x79a24c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79a250: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x79a250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x79a254: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a258: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x79a258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x79a25c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x79a25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x79a260: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x79a260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a264: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x79a264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x79a268: 0x3c100800  lui         $s0, 0x800
    ctx->pc = 0x79a268u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)2048 << 16));
    // 0x79a26c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x79a26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x79a270: 0x3c13005f  lui         $s3, 0x5F
    ctx->pc = 0x79a270u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)95 << 16));
    // 0x79a274: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x79a274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x79a278: 0x3c140060  lui         $s4, 0x60
    ctx->pc = 0x79a278u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
    // 0x79a27c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79a27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79a280: 0x3c15007a  lui         $s5, 0x7A
    ctx->pc = 0x79a280u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)122 << 16));
    // 0x79a284: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x79a284u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x79a288: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x79a288u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79a28c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A28Cu;
    SET_GPR_U32(ctx, 31, 0x79A294u);
    ctx->pc = 0x79A290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A28Cu;
    // 0x79a290: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A28Cu, 0x79A294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A294u;
label_79a294:
    // 0x79a294: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x79a294u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79a298: 0x8e638658  lw          $v1, -0x79A8($s3)
    ctx->pc = 0x79a298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936152)));
    // 0x79a29c: 0x0  nop
    ctx->pc = 0x79a29cu;
    // NOP
label_79a2a0:
    // 0x79a2a0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79a2a4: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x79a2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x79a2a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A2A8u;
    {
        const bool branch_taken_0x79a2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2A8u;
        // 0x79a2ac: 0x2684ea60  addiu       $a0, $s4, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2a8) {
            ctx->pc = 0x79A2C4u;
            goto label_79a2c4;
        }
    }
    ctx->pc = 0x79A2B0u;
    // 0x79a2b0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x79a2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79a2b4: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x79A2B4u;
    SET_GPR_U32(ctx, 31, 0x79A2BCu);
    ctx->pc = 0x79A2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2B4u;
    // 0x79a2b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79A2B4u, 0x79A2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2BCu;
label_79a2bc:
    // 0x79a2bc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79A2BCu;
    {
        const bool branch_taken_0x79a2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2BCu;
        // 0x79a2c0: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2bc) {
            ctx->pc = 0x79A2DCu;
            goto label_79a2dc;
        }
    }
    ctx->pc = 0x79A2C4u;
label_79a2c4:
    // 0x79a2c4: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79a2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79a2c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a2cc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A2CCu;
    SET_GPR_U32(ctx, 31, 0x79A2D4u);
    ctx->pc = 0x79A2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2CCu;
    // 0x79a2d0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A2CCu, 0x79A2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2D4u;
label_79a2d4:
    // 0x79a2d4: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x79A2D4u;
    {
        const bool branch_taken_0x79a2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2D4u;
        // 0x79a2d8: 0x8e638658  lw          $v1, -0x79A8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2d4) {
            ctx->pc = 0x79A2A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a2a0;
        }
    }
    ctx->pc = 0x79A2DCu;
label_79a2dc:
    // 0x79a2dc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x79a2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79a2e0: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79a2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79a2e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a2e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2e8: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x79a2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x79a2ec: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x79a2ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x79a2f0: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79a2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a2f4: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79A2F4u;
    SET_GPR_U32(ctx, 31, 0x79A2FCu);
    ctx->pc = 0x79A2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2F4u;
    // 0x79a2f8: 0x26106ab0  addiu       $s0, $s0, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79A2F4u, 0x79A2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2FCu;
label_79a2fc:
    // 0x79a2fc: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x79a2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x79a300: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79a300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79a304: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x79a304u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a30c: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79A30Cu;
    SET_GPR_U32(ctx, 31, 0x79A314u);
    ctx->pc = 0x79A310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A30Cu;
    // 0x79a310: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A30Cu, 0x79A314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A314u;
label_79a314:
    // 0x79a314: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79A314u;
    SET_GPR_U32(ctx, 31, 0x79A31Cu);
    ctx->pc = 0x79A318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A314u;
    // 0x79a318: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79A314u, 0x79A31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A31Cu;
label_79a31c:
    // 0x79a31c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a320: 0xc0a56e0  jal         func_295B80
    ctx->pc = 0x79A320u;
    SET_GPR_U32(ctx, 31, 0x79A328u);
    ctx->pc = 0x79A324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A320u;
    // 0x79a324: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B80u, 0x79A320u, 0x79A328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A328u;
label_79a328:
    // 0x79a328: 0x8ea3e010  lw          $v1, -0x1FF0($s5)
    ctx->pc = 0x79a328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294959120)));
    // 0x79a32c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a330: 0x8c620460  lw          $v0, 0x460($v1)
    ctx->pc = 0x79a330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1120)));
    // 0x79a334: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a338: 0xac620460  sw          $v0, 0x460($v1)
    ctx->pc = 0x79a338u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1120), GPR_U32(ctx, 2));
    // 0x79a33c: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79A33Cu;
    SET_GPR_U32(ctx, 31, 0x79A344u);
    ctx->pc = 0x79A340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A33Cu;
    // 0x79a340: 0x93a50010  lbu         $a1, 0x10($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A33Cu, 0x79A344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A344u;
label_79a344:
    // 0x79a344: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79A344u;
    SET_GPR_U32(ctx, 31, 0x79A34Cu);
    ctx->pc = 0x79A348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A344u;
    // 0x79a348: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79A344u, 0x79A34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A34Cu;
label_79a34c:
    // 0x79a34c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79a34cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79a350: 0xc0a56e0  jal         func_295B80
    ctx->pc = 0x79A350u;
    SET_GPR_U32(ctx, 31, 0x79A358u);
    ctx->pc = 0x79A354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A350u;
    // 0x79a354: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B80u, 0x79A350u, 0x79A358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A358u;
label_79a358:
    // 0x79a358: 0x8ea3e010  lw          $v1, -0x1FF0($s5)
    ctx->pc = 0x79a358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294959120)));
    // 0x79a35c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a35cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a360: 0x24a5dd40  addiu       $a1, $a1, -0x22C0
    ctx->pc = 0x79a360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958400));
    // 0x79a364: 0x8c620460  lw          $v0, 0x460($v1)
    ctx->pc = 0x79a364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1120)));
    // 0x79a368: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a36c: 0xac620460  sw          $v0, 0x460($v1)
    ctx->pc = 0x79a36cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1120), GPR_U32(ctx, 2));
    // 0x79a370: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x79A370u;
    SET_GPR_U32(ctx, 31, 0x79A378u);
    ctx->pc = 0x79A374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A370u;
    // 0x79a374: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79A370u, 0x79A378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A378u;
label_79a378:
    // 0x79a378: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x79A378u;
    SET_GPR_U32(ctx, 31, 0x79A380u);
    ctx->pc = 0x79A37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A378u;
    // 0x79a37c: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79A378u, 0x79A380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A380u;
label_79a380:
    // 0x79a380: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79A380u;
    SET_GPR_U32(ctx, 31, 0x79A388u);
    ctx->pc = 0x79A384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A380u;
    // 0x79a384: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79A380u, 0x79A388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A388u;
label_79a388:
    // 0x79a388: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x79a388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a38c: 0xc1e6ad2  jal         func_79AB48
    ctx->pc = 0x79A38Cu;
    SET_GPR_U32(ctx, 31, 0x79A394u);
    ctx->pc = 0x79A390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A38Cu;
    // 0x79a390: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AB48u, 0x79A38Cu, 0x79A394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A394u;
label_79a394:
    // 0x79a394: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79A394u;
    {
        const bool branch_taken_0x79a394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a394) {
            ctx->pc = 0x79A3ACu;
            goto label_79a3ac;
        }
    }
    ctx->pc = 0x79A39Cu;
    // 0x79a39c: 0x0  nop
    ctx->pc = 0x79a39cu;
    // NOP
label_79a3a0:
    // 0x79a3a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a3a4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A3A4u;
    SET_GPR_U32(ctx, 31, 0x79A3ACu);
    ctx->pc = 0x79A3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3A4u;
    // 0x79a3a8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A3A4u, 0x79A3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3ACu;
label_79a3ac:
    // 0x79a3ac: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79A3ACu;
    SET_GPR_U32(ctx, 31, 0x79A3B4u);
    ctx->pc = 0x79A3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3ACu;
    // 0x79a3b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A3ACu, 0x79A3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3B4u;
label_79a3b4:
    // 0x79a3b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a3b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a3b8: 0x1613fff9  bne         $s0, $s3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79A3B8u;
    {
        const bool branch_taken_0x79a3b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x79A3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3B8u;
        // 0x79a3bc: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3b8) {
            ctx->pc = 0x79A3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a3a0;
        }
    }
    ctx->pc = 0x79A3C0u;
    // 0x79a3c0: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79A3C0u;
    SET_GPR_U32(ctx, 31, 0x79A3C8u);
    ctx->pc = 0x79A3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3C0u;
    // 0x79a3c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A3C0u, 0x79A3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3C8u;
label_79a3c8:
    // 0x79a3c8: 0x1450fff5  bne         $v0, $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x79A3C8u;
    {
        const bool branch_taken_0x79a3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x79A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3C8u;
        // 0x79a3cc: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3c8) {
            ctx->pc = 0x79A3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a3a0;
        }
    }
    ctx->pc = 0x79A3D0u;
    // 0x79a3d0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x79a3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x79a3d4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A3D4u;
    SET_GPR_U32(ctx, 31, 0x79A3DCu);
    ctx->pc = 0x79A3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3D4u;
    // 0x79a3d8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A3D4u, 0x79A3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3DCu;
label_79a3dc:
    // 0x79a3dc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79a3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79a3e0: 0x245064f0  addiu       $s0, $v0, 0x64F0
    ctx->pc = 0x79a3e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x79a3e4: 0x8e030500  lw          $v1, 0x500($s0)
    ctx->pc = 0x79a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5869F0u));
label_79a3e8:
    // 0x79a3e8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x79A3E8u;
    {
        const bool branch_taken_0x79a3e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3E8u;
        // 0x79a3ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3e8) {
            ctx->pc = 0x79A410u;
            goto label_79a410;
        }
    }
    ctx->pc = 0x79A3F0u;
    // 0x79a3f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a3f4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x79a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_79a3f8:
    // 0x79a3f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A3F8u;
    {
        const bool branch_taken_0x79a3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3F8u;
        // 0x79a3fc: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3f8) {
            ctx->pc = 0x79A408u;
            goto label_79a408;
        }
    }
    ctx->pc = 0x79A400u;
    // 0x79a400: 0x90420614  lbu         $v0, 0x614($v0)
    ctx->pc = 0x79a400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1556)));
    // 0x79a404: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x79a404u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
label_79a408:
    // 0x79a408: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79A408u;
    {
        const bool branch_taken_0x79a408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a408) {
            ctx->pc = 0x79A40Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A408u;
            // 0x79a40c: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a3f8;
        }
    }
    ctx->pc = 0x79A410u;
label_79a410:
    // 0x79a410: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A410u;
    {
        const bool branch_taken_0x79a410 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A410u;
        // 0x79a414: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a410) {
            ctx->pc = 0x79A42Cu;
            goto label_79a42c;
        }
    }
    ctx->pc = 0x79A418u;
    // 0x79a418: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a41c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A41Cu;
    SET_GPR_U32(ctx, 31, 0x79A424u);
    ctx->pc = 0x79A420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A41Cu;
    // 0x79a420: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A41Cu, 0x79A424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A424u;
label_79a424:
    // 0x79a424: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x79A424u;
    {
        const bool branch_taken_0x79a424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A424u;
        // 0x79a428: 0x8e030500  lw          $v1, 0x500($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a424) {
            ctx->pc = 0x79A3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a3e8;
        }
    }
    ctx->pc = 0x79A42Cu;
label_79a42c:
    // 0x79a42c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x79a42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x79a430: 0x2690ea60  addiu       $s0, $s4, -0x15A0
    ctx->pc = 0x79a430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
    // 0x79a434: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A434u;
    SET_GPR_U32(ctx, 31, 0x79A43Cu);
    ctx->pc = 0x79A438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A434u;
    // 0x79a438: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A434u, 0x79A43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A43Cu;
label_79a43c:
    // 0x79a43c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79a43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a440: 0xc1e6a28  jal         func_79A8A0
    ctx->pc = 0x79A440u;
    SET_GPR_U32(ctx, 31, 0x79A448u);
    ctx->pc = 0x79A444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A440u;
    // 0x79a444: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A8A0u, 0x79A440u, 0x79A448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A448u;
label_79a448:
    // 0x79a448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a44c: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x79A44Cu;
    SET_GPR_U32(ctx, 31, 0x79A454u);
    ctx->pc = 0x79A450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A44Cu;
    // 0x79a450: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x79A44Cu, 0x79A454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A454u;
label_79a454:
    // 0x79a454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a458: 0xc0b0a3e  jal         func_2C28F8
    ctx->pc = 0x79A458u;
    SET_GPR_U32(ctx, 31, 0x79A460u);
    ctx->pc = 0x79A45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A458u;
    // 0x79a45c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C28F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C28F8u, 0x79A458u, 0x79A460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A460u;
label_79a460:
    // 0x79a460: 0x8e232f84  lw          $v1, 0x2F84($s1)
    ctx->pc = 0x79a460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79a464: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A464u;
    SET_GPR_U32(ctx, 31, 0x79A46Cu);
    ctx->pc = 0x79A468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A464u;
    // 0x79a468: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A464u, 0x79A46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A46Cu;
label_79a46c:
    // 0x79a46c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x79a46cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79a470: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x79a470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79a474: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x79a474u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79a478: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x79a478u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a47c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x79a47cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a480: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x79a480u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a484: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79a484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a488: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x79a488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79a48c: 0x3e00008  jr          $ra
    ctx->pc = 0x79A48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A48Cu;
        // 0x79a490: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A48Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A494u;
    // 0x79a494: 0x0  nop
    ctx->pc = 0x79a494u;
    // NOP
    ctx->pc = 0x79a498u;
}
} // namespace gh_r301
