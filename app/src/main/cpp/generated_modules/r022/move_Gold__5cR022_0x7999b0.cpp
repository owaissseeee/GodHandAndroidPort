#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: move_Gold__5cR022
// Address: 0x7999b0 - 0x799ad0
void move_Gold__5cR022_0x7999b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("move_Gold__5cR022_0x7999b0");
#endif

    switch (ctx->pc) {
        case 0x799a0cu: goto label_799a0c;
        case 0x799a9cu: goto label_799a9c;
        default: break;
    }

    ctx->pc = 0x7999b0u;

    // 0x7999b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7999b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7999b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7999b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7999b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7999b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7999bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7999bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999c0: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x7999c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x7999c4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x7999c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x7999c8: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x7999C8u;
    {
        const bool branch_taken_0x7999c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999C8u;
        // 0x7999cc: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999c8) {
            ctx->pc = 0x799ABCu;
            goto label_799abc;
        }
    }
    ctx->pc = 0x7999D0u;
    // 0x7999d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7999d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7999d4: 0x2442cc60  addiu       $v0, $v0, -0x33A0
    ctx->pc = 0x7999d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954080));
    // 0x7999d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7999d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7999dc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7999dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7999e0: 0x800008  jr          $a0
    ctx->pc = 0x7999E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7999E8u: goto label_7999e8;
            case 0x799A18u: goto label_799a18;
            case 0x799A54u: goto label_799a54;
            case 0x799A64u: goto label_799a64;
            case 0x799AACu: goto label_799aac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7999E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7999E8u;
label_7999e8:
    // 0x7999e8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7999e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x7999ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7999ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999f0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7999f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7999f4: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x7999f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x7999f8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7999f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7999fc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7999fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799a00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799a00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a04: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799A04u;
    SET_GPR_U32(ctx, 31, 0x799A0Cu);
    ctx->pc = 0x799A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A04u;
    // 0x799a08: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799A04u, 0x799A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A0Cu;
label_799a0c:
    // 0x799a0c: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x799a0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x799a10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x799a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x799a14: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x799a14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
label_799a18:
    // 0x799a18: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x799a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x799a1c: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x799a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x799a20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799a24: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x799a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799a28: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x799a28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x799a2c: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x799a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x799a30: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x799a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x799a34: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x799a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x799a38: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x799a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799a3c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x799a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x799a40: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x799a40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799a44: 0x0  nop
    ctx->pc = 0x799a44u;
    // NOP
    // 0x799a48: 0x4502001d  bc1fl       . + 4 + (0x1D << 2)
    ctx->pc = 0x799A48u;
    {
        const bool branch_taken_0x799a48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x799a48) {
            ctx->pc = 0x799A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799A48u;
            // 0x799a4c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799AC0u;
            goto label_799ac0;
        }
    }
    ctx->pc = 0x799A50u;
    // 0x799a50: 0xe4610038  swc1        $f1, 0x38($v1)
    ctx->pc = 0x799a50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_799a54:
    // 0x799a54: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x799a54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x799a58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799a5c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x799A5Cu;
    {
        const bool branch_taken_0x799a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A5Cu;
        // 0x799a60: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a5c) {
            ctx->pc = 0x799ABCu;
            goto label_799abc;
        }
    }
    ctx->pc = 0x799A64u;
label_799a64:
    // 0x799a64: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x799a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x799a68: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x799a68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x799a6c: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x799a6cu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x747640u));
    // 0x799a70: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x799a74: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x799A74u;
    {
        const bool branch_taken_0x799a74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A74u;
        // 0x799a78: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a74) {
            ctx->pc = 0x799ABCu;
            goto label_799abc;
        }
    }
    ctx->pc = 0x799A7Cu;
    // 0x799a7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a80: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x799a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x799a84: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x799a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x799a88: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799a88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799a8c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799a8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799a90: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799a90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a94: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799A94u;
    SET_GPR_U32(ctx, 31, 0x799A9Cu);
    ctx->pc = 0x799A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A94u;
    // 0x799a98: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799A94u, 0x799A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A9Cu;
label_799a9c:
    // 0x799a9c: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x799a9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x799aa0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x799aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x799aa4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799AA4u;
    {
        const bool branch_taken_0x799aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AA4u;
        // 0x799aa8: 0xa6030002  sh          $v1, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799aa4) {
            ctx->pc = 0x799ABCu;
            goto label_799abc;
        }
    }
    ctx->pc = 0x799AACu;
label_799aac:
    // 0x799aac: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x799aacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799ab0: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x799ab0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x799ab4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799ab8: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x799ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_799abc:
    // 0x799abc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x799abcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_799ac0:
    // 0x799ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x799AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AC4u;
        // 0x799ac8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799ACCu;
    // 0x799acc: 0x0  nop
    ctx->pc = 0x799accu;
    // NOP
    ctx->pc = 0x799ad0u;
}
} // namespace gh_r022
