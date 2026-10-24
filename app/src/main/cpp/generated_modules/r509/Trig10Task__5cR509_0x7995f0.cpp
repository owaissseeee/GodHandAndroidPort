#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r509_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r509
{
// Function: Trig10Task__5cR509
// Address: 0x7995f0 - 0x7996f0
void Trig10Task__5cR509_0x7995f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Trig10Task__5cR509_0x7995f0");
#endif

    switch (ctx->pc) {
        case 0x799628u: goto label_799628;
        case 0x799634u: goto label_799634;
        case 0x799644u: goto label_799644;
        case 0x7996c4u: goto label_7996c4;
        case 0x7996d0u: goto label_7996d0;
        default: break;
    }

    ctx->pc = 0x7995f0u;

    // 0x7995f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x7995f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x7995f4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x7995f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x7995f8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x7995f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x7995fc: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x7995fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x799600: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x799600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x799604: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x799604u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799608: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x799608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x79960c: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x79960cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x799610: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x799610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x799614: 0x3c13005f  lui         $s3, 0x5F
    ctx->pc = 0x799614u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)95 << 16));
    // 0x799618: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79961c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79961Cu;
    {
        const bool branch_taken_0x79961c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79961Cu;
        // 0x799620: 0x3c14003c  lui         $s4, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79961c) {
            ctx->pc = 0x799634u;
            goto label_799634;
        }
    }
    ctx->pc = 0x799624u;
    // 0x799624: 0x0  nop
    ctx->pc = 0x799624u;
    // NOP
label_799628:
    // 0x799628: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79962c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79962Cu;
    SET_GPR_U32(ctx, 31, 0x799634u);
    ctx->pc = 0x799630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79962Cu;
    // 0x799630: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79962Cu, 0x799634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799634u;
label_799634:
    // 0x799634: 0x2604ea60  addiu       $a0, $s0, -0x15A0
    ctx->pc = 0x799634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x799638: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x799638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79963c: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x79963Cu;
    SET_GPR_U32(ctx, 31, 0x799644u);
    ctx->pc = 0x799640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79963Cu;
    // 0x799640: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79963Cu, 0x799644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799644u;
label_799644:
    // 0x799644: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x799644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799648: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799648u;
    {
        const bool branch_taken_0x799648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x79964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799648u;
        // 0x79964c: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799648) {
            ctx->pc = 0x799628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799628;
        }
    }
    ctx->pc = 0x799650u;
    // 0x799650: 0x8e638658  lw          $v1, -0x79A8($s3)
    ctx->pc = 0x799650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936152)));
    // 0x799654: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x799654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x799658: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79965c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79965cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x799660: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x799660u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799664: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799668: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79966c: 0x3c014007  lui         $at, 0x4007
    ctx->pc = 0x79966cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16391 << 16));
    // 0x799670: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x799670u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
    // 0x799674: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799678: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x799678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79967c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x79967cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x799680: 0x3c01409c  lui         $at, 0x409C
    ctx->pc = 0x799680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16540 << 16));
    // 0x799684: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x799684u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
    // 0x799688: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79968c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x79968cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x799690: 0x3c014283  lui         $at, 0x4283
    ctx->pc = 0x799690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17027 << 16));
    // 0x799694: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x799694u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x799698: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799698u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79969c: 0x8e84264c  lw          $a0, 0x264C($s4)
    ctx->pc = 0x79969cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 9804)));
    // 0x7996a0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x7996a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x7996a4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x7996a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x7996a8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x7996a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x7996ac: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x7996acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x7996b0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x7996b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x7996b4: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x7996b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x7996b8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x7996b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x7996bc: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x7996BCu;
    SET_GPR_U32(ctx, 31, 0x7996C4u);
    ctx->pc = 0x7996C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996BCu;
    // 0x7996c0: 0xe623000c  swc1        $f3, 0xC($s1) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x7996BCu, 0x7996C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996C4u;
label_7996c4:
    // 0x7996c4: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x7996c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x7996c8: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7996C8u;
    SET_GPR_U32(ctx, 31, 0x7996D0u);
    ctx->pc = 0x7996CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996C8u;
    // 0x7996cc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7996C8u, 0x7996D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996D0u;
label_7996d0:
    // 0x7996d0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x7996d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7996d4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x7996d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7996d8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x7996d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7996dc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x7996dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7996e0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x7996e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7996e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x7996e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7996e8: 0x3e00008  jr          $ra
    ctx->pc = 0x7996E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7996ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996E8u;
        // 0x7996ec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7996E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7996F0u;
}
} // namespace gh_r509
