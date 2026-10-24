#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: movePlayInter__C21cEventAdditionalLight
// Address: 0x7ac5b0 - 0x7ac708
void movePlayInter__C21cEventAdditionalLight_0x7ac5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlayInter__C21cEventAdditionalLight_0x7ac5b0");
#endif

    switch (ctx->pc) {
        case 0x7ac618u: goto label_7ac618;
        case 0x7ac638u: goto label_7ac638;
        case 0x7ac6a4u: goto label_7ac6a4;
        case 0x7ac6b8u: goto label_7ac6b8;
        case 0x7ac6c4u: goto label_7ac6c4;
        default: break;
    }

    ctx->pc = 0x7ac5b0u;

    // 0x7ac5b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x7ac5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x7ac5b4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x7ac5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x7ac5b8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x7ac5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x7ac5bc: 0x3c02007b  lui         $v0, 0x7B
    ctx->pc = 0x7ac5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
    // 0x7ac5c0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x7ac5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x7ac5c4: 0x24634700  addiu       $v1, $v1, 0x4700
    ctx->pc = 0x7ac5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18176));
    // 0x7ac5c8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x7ac5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x7ac5cc: 0x24425248  addiu       $v0, $v0, 0x5248
    ctx->pc = 0x7ac5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21064));
    // 0x7ac5d0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x7ac5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x7ac5d4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x7ac5d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ac5d8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x7ac5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x7ac5dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7ac5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ac5e0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x7ac5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x7ac5e4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x7ac5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x7ac5e8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x7ac5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x7ac5ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ac5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ac5f0: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x7ac5f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x7ac5f4: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x7ac5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x7ac5f8: 0x8c760078  lw          $s6, 0x78($v1)
    ctx->pc = 0x7ac5f8u;
    SET_GPR_S32(ctx, 22, (int32_t)FAST_READ32(0x604778u));
    // 0x7ac5fc: 0xc454000c  lwc1        $f20, 0xC($v0)
    ctx->pc = 0x7ac5fcu;
    { uint32_t bits = FAST_READ32(0x7B5254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x7ac600: 0x84520006  lh          $s2, 0x6($v0)
    ctx->pc = 0x7ac600u;
    SET_GPR_S32(ctx, 18, (int16_t)FAST_READ16(0x7B524Eu));
    // 0x7ac604: 0x12c00033  beqz        $s6, . + 4 + (0x33 << 2)
    ctx->pc = 0x7AC604u;
    {
        const bool branch_taken_0x7ac604 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC604u;
        // 0x7ac608: 0x8eb10014  lw          $s1, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac604) {
            ctx->pc = 0x7AC6D4u;
            goto label_7ac6d4;
        }
    }
    ctx->pc = 0x7AC60Cu;
    // 0x7ac60c: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x7ac60cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ac610: 0x24170070  addiu       $s7, $zero, 0x70
    ctx->pc = 0x7ac610u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x7ac614: 0x971818  mult        $v1, $a0, $s7
    ctx->pc = 0x7ac614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_7ac618:
    // 0x7ac618: 0x24940001  addiu       $s4, $a0, 0x1
    ctx->pc = 0x7ac618u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x7ac61c: 0x8ea40010  lw          $a0, 0x10($s5)
    ctx->pc = 0x7ac61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x7ac620: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x7ac620u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ac624: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7ac624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ac628: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x7ac628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ac62c: 0x7e1021  addu        $v0, $v1, $fp
    ctx->pc = 0x7ac62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x7ac630: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x7AC630u;
    {
        const bool branch_taken_0x7ac630 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC630u;
        // 0x7ac634: 0x94460082  lhu         $a2, 0x82($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 130)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac630) {
            ctx->pc = 0x7AC694u;
            goto label_7ac694;
        }
    }
    ctx->pc = 0x7AC638u;
label_7ac638:
    // 0x7ac638: 0x94820010  lhu         $v0, 0x10($a0)
    ctx->pc = 0x7ac638u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x7ac63c: 0x54c20012  bnel        $a2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x7AC63Cu;
    {
        const bool branch_taken_0x7ac63c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x7ac63c) {
            ctx->pc = 0x7AC640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AC63Cu;
            // 0x7ac640: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AC688u;
            goto label_7ac688;
        }
    }
    ctx->pc = 0x7AC644u;
    // 0x7ac644: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x7ac644u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x7ac648: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x7ac648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x7ac64c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x7AC64Cu;
    {
        const bool branch_taken_0x7ac64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ac64c) {
            ctx->pc = 0x7AC650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AC64Cu;
            // 0x7ac650: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AC680u;
            goto label_7ac680;
        }
    }
    ctx->pc = 0x7AC654u;
    // 0x7ac654: 0x5472000c  bnel        $v1, $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x7AC654u;
    {
        const bool branch_taken_0x7ac654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x7ac654) {
            ctx->pc = 0x7AC658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AC654u;
            // 0x7ac658: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AC688u;
            goto label_7ac688;
        }
    }
    ctx->pc = 0x7AC65Cu;
    // 0x7ac65c: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x7ac65cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x7ac660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x7ac660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7ac664: 0x0  nop
    ctx->pc = 0x7ac664u;
    // NOP
    // 0x7ac668: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x7ac668u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x7ac66c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x7ac66cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7ac670: 0x0  nop
    ctx->pc = 0x7ac670u;
    // NOP
    // 0x7ac674: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x7AC674u;
    {
        const bool branch_taken_0x7ac674 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x7ac674) {
            ctx->pc = 0x7AC678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AC674u;
            // 0x7ac678: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AC688u;
            goto label_7ac688;
        }
    }
    ctx->pc = 0x7AC67Cu;
    // 0x7ac67c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x7ac67cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_7ac680:
    // 0x7ac680: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7ac680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ac684: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x7ac684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_7ac688:
    // 0x7ac688: 0xb1102b  sltu        $v0, $a1, $s1
    ctx->pc = 0x7ac688u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x7ac68c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x7AC68Cu;
    {
        const bool branch_taken_0x7ac68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AC690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC68Cu;
        // 0x7ac690: 0x24840044  addiu       $a0, $a0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac68c) {
            ctx->pc = 0x7AC638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ac638;
        }
    }
    ctx->pc = 0x7AC694u;
label_7ac694:
    // 0x7ac694: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x7AC694u;
    {
        const bool branch_taken_0x7ac694 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC694u;
        // 0x7ac698: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac694) {
            ctx->pc = 0x7AC6C8u;
            goto label_7ac6c8;
        }
    }
    ctx->pc = 0x7AC69Cu;
    // 0x7ac69c: 0xc1eb03e  jal         func_7AC0F8
    ctx->pc = 0x7AC69Cu;
    SET_GPR_U32(ctx, 31, 0x7AC6A4u);
    ctx->pc = 0x7AC6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC69Cu;
    // 0x7ac6a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AC0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AC0F8u, 0x7AC69Cu, 0x7AC6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC6A4u;
label_7ac6a4:
    // 0x7ac6a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7AC6A4u;
    {
        const bool branch_taken_0x7ac6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC6A4u;
        // 0x7ac6a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac6a4) {
            ctx->pc = 0x7AC6C4u;
            goto label_7ac6c4;
        }
    }
    ctx->pc = 0x7AC6ACu;
    // 0x7ac6ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7ac6acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ac6b0: 0xc1eb042  jal         func_7AC108
    ctx->pc = 0x7AC6B0u;
    SET_GPR_U32(ctx, 31, 0x7AC6B8u);
    ctx->pc = 0x7AC6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC6B0u;
    // 0x7ac6b4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AC108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AC108u, 0x7AC6B0u, 0x7AC6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC6B8u;
label_7ac6b8:
    // 0x7ac6b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7ac6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ac6bc: 0xc1eafdc  jal         func_7ABF70
    ctx->pc = 0x7AC6BCu;
    SET_GPR_U32(ctx, 31, 0x7AC6C4u);
    ctx->pc = 0x7AC6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC6BCu;
    // 0x7ac6c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ABF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ABF70u, 0x7AC6BCu, 0x7AC6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC6C4u;
label_7ac6c4:
    // 0x7ac6c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x7ac6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_7ac6c8:
    // 0x7ac6c8: 0x96102b  sltu        $v0, $a0, $s6
    ctx->pc = 0x7ac6c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x7ac6cc: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x7AC6CCu;
    {
        const bool branch_taken_0x7ac6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AC6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC6CCu;
        // 0x7ac6d0: 0x971818  mult        $v1, $a0, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac6cc) {
            ctx->pc = 0x7AC618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ac618;
        }
    }
    ctx->pc = 0x7AC6D4u;
label_7ac6d4:
    // 0x7ac6d4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x7ac6d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x7ac6d8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x7ac6d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7ac6dc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x7ac6dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7ac6e0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x7ac6e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7ac6e4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x7ac6e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7ac6e8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x7ac6e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7ac6ec: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x7ac6ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7ac6f0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x7ac6f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7ac6f4: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x7ac6f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ac6f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ac6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ac6fc: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x7ac6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x7ac700: 0x3e00008  jr          $ra
    ctx->pc = 0x7AC700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AC704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC700u;
        // 0x7ac704: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AC700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AC708u;
}
} // namespace gh_event
