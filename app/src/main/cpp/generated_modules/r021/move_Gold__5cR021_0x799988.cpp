#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r021_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r021
{
// Function: move_Gold__5cR021
// Address: 0x799988 - 0x799ba0
void move_Gold__5cR021_0x799988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("move_Gold__5cR021_0x799988");
#endif

    switch (ctx->pc) {
        case 0x7999e8u: goto label_7999e8;
        case 0x799abcu: goto label_799abc;
        case 0x799ae4u: goto label_799ae4;
        case 0x799b34u: goto label_799b34;
        case 0x799b58u: goto label_799b58;
        case 0x799b60u: goto label_799b60;
        default: break;
    }

    ctx->pc = 0x799988u;

    // 0x799988: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79998c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79998cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x799990: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x799994: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x799994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799998: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79999c: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x79999cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x7999a0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x7999a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x7999a4: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x7999A4u;
    {
        const bool branch_taken_0x7999a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999A4u;
        // 0x7999a8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999a4) {
            ctx->pc = 0x799B88u;
            goto label_799b88;
        }
    }
    ctx->pc = 0x7999ACu;
    // 0x7999ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7999acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7999b0: 0x2442bc60  addiu       $v0, $v0, -0x43A0
    ctx->pc = 0x7999b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949984));
    // 0x7999b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7999b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7999b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7999b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7999bc: 0x800008  jr          $a0
    ctx->pc = 0x7999BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7999C4u: goto label_7999c4;
            case 0x7999FCu: goto label_7999fc;
            case 0x799AD0u: goto label_799ad0;
            case 0x799AFCu: goto label_799afc;
            case 0x799B78u: goto label_799b78;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7999BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7999C4u;
label_7999c4:
    // 0x7999c4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7999c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x7999c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7999c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999cc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7999ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7999d0: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x7999d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x7999d4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7999d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7999d8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7999d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7999dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7999dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999e0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7999E0u;
    SET_GPR_U32(ctx, 31, 0x7999E8u);
    ctx->pc = 0x7999E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999E0u;
    // 0x7999e4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7999E0u, 0x7999E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999E8u;
label_7999e8:
    // 0x7999e8: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x7999e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x7999ec: 0xac600084  sw          $zero, 0x84($v1)
    ctx->pc = 0x7999ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 0));
    // 0x7999f0: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x7999f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x7999f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x7999f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x7999f8: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x7999f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
label_7999fc:
    // 0x7999fc: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x7999fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x799a00: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x799a00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x799a04: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x799a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x799a08: 0x34a5423f  ori         $a1, $a1, 0x423F
    ctx->pc = 0x799a08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16959);
    // 0x799a0c: 0x8e2300f8  lw          $v1, 0xF8($s1)
    ctx->pc = 0x799a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x799a10: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x799a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x799a14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x799a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x799a18: 0xa2202a  slt         $a0, $a1, $v0
    ctx->pc = 0x799a18u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x799a1c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x799A1Cu;
    {
        const bool branch_taken_0x799a1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A1Cu;
        // 0x799a20: 0xae2200e8  sw          $v0, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a1c) {
            ctx->pc = 0x799A28u;
            goto label_799a28;
        }
    }
    ctx->pc = 0x799A24u;
    // 0x799a24: 0xae2500e8  sw          $a1, 0xE8($s1)
    ctx->pc = 0x799a24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 5));
label_799a28:
    // 0x799a28: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x799a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x799a2c: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x799A2Cu;
    {
        const bool branch_taken_0x799a2c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x799a2c) {
            ctx->pc = 0x799A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799A2Cu;
            // 0x799a30: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799A34u;
            goto label_799a34;
        }
    }
    ctx->pc = 0x799A34u;
label_799a34:
    // 0x799a34: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x799a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x799a38: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x799a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x799a3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799a3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799a40: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x799a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799a44: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x799a44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x799a48: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x799a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x799a4c: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x799a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x799a50: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x799a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x799a54: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x799a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x799a58: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x799a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799a5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x799a5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799a60: 0x0  nop
    ctx->pc = 0x799a60u;
    // NOP
    // 0x799a64: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x799A64u;
    {
        const bool branch_taken_0x799a64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x799A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A64u;
        // 0x799a68: 0x3c050074  lui         $a1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a64) {
            ctx->pc = 0x799A84u;
            goto label_799a84;
        }
    }
    ctx->pc = 0x799A6Cu;
    // 0x799a6c: 0x24a274a0  addiu       $v0, $a1, 0x74A0
    ctx->pc = 0x799a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 29856));
    // 0x799a70: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x799a70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x799a74: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x799a74u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x799a78: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x799a7c: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x799A7Cu;
    {
        const bool branch_taken_0x799a7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A7Cu;
        // 0x799a80: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a7c) {
            ctx->pc = 0x799B8Cu;
            goto label_799b8c;
        }
    }
    ctx->pc = 0x799A84u;
label_799a84:
    // 0x799a84: 0x24a274a0  addiu       $v0, $a1, 0x74A0
    ctx->pc = 0x799a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 29856));
    // 0x799a88: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x799a88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x799a8c: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x799a8cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x799a90: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x799a94: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x799A94u;
    {
        const bool branch_taken_0x799a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A94u;
        // 0x799a98: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a94) {
            ctx->pc = 0x799ABCu;
            goto label_799abc;
        }
    }
    ctx->pc = 0x799A9Cu;
    // 0x799a9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799aa0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x799aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x799aa4: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x799aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x799aa8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799aac: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799aacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799ab0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799ab0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ab4: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799AB4u;
    SET_GPR_U32(ctx, 31, 0x799ABCu);
    ctx->pc = 0x799AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AB4u;
    // 0x799ab8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799AB4u, 0x799ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799ABCu;
label_799abc:
    // 0x799abc: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x799abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x799ac0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x799ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x799ac4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x799ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799ac8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x799AC8u;
    {
        const bool branch_taken_0x799ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AC8u;
        // 0x799acc: 0xe4600038  swc1        $f0, 0x38($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ac8) {
            ctx->pc = 0x799B68u;
            goto label_799b68;
        }
    }
    ctx->pc = 0x799AD0u;
label_799ad0:
    // 0x799ad0: 0x8e25009c  lw          $a1, 0x9C($s1)
    ctx->pc = 0x799ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x799ad4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ad8: 0x8e2600e8  lw          $a2, 0xE8($s1)
    ctx->pc = 0x799ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x799adc: 0xc1e6caa  jal         func_79B2A8
    ctx->pc = 0x799ADCu;
    SET_GPR_U32(ctx, 31, 0x799AE4u);
    ctx->pc = 0x799AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799ADCu;
    // 0x799ae0: 0x24a50084  addiu       $a1, $a1, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2A8u, 0x799ADCu, 0x799AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AE4u;
label_799ae4:
    // 0x799ae4: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x799AE4u;
    {
        const bool branch_taken_0x799ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AE4u;
        // 0x799ae8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ae4) {
            ctx->pc = 0x799B8Cu;
            goto label_799b8c;
        }
    }
    ctx->pc = 0x799AECu;
    // 0x799aec: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x799aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x799af0: 0x8e2300e8  lw          $v1, 0xE8($s1)
    ctx->pc = 0x799af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x799af4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x799AF4u;
    {
        const bool branch_taken_0x799af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AF4u;
        // 0x799af8: 0xac830084  sw          $v1, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799af4) {
            ctx->pc = 0x799B68u;
            goto label_799b68;
        }
    }
    ctx->pc = 0x799AFCu;
label_799afc:
    // 0x799afc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x799afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x799b00: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x799b00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x799b04: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x799b04u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x747640u));
    // 0x799b08: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x799b0c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x799B0Cu;
    {
        const bool branch_taken_0x799b0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B0Cu;
        // 0x799b10: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b0c) {
            ctx->pc = 0x799B88u;
            goto label_799b88;
        }
    }
    ctx->pc = 0x799B14u;
    // 0x799b14: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799b14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799b18: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799b18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799b1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799b1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b20: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799b20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b24: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x799b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x799b28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b2c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799B2Cu;
    SET_GPR_U32(ctx, 31, 0x799B34u);
    ctx->pc = 0x799B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B2Cu;
    // 0x799b30: 0x2406015e  addiu       $a2, $zero, 0x15E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799B2Cu, 0x799B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B34u;
label_799b34:
    // 0x799b34: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x799b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x799b38: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x799b38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x799b3c: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x799b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x799b40: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x799b40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x799b44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b48: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799b4c: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x799b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    // 0x799b50: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x799B50u;
    SET_GPR_U32(ctx, 31, 0x799B58u);
    ctx->pc = 0x799B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B50u;
    // 0x799b54: 0x8e2500e8  lw          $a1, 0xE8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x799B50u, 0x799B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B58u;
label_799b58:
    // 0x799b58: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x799B58u;
    SET_GPR_U32(ctx, 31, 0x799B60u);
    ctx->pc = 0x799B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B58u;
    // 0x799b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x799B58u, 0x799B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B60u;
label_799b60:
    // 0x799b60: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x799b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x799b64: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x799b64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
label_799b68:
    // 0x799b68: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x799b68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x799b6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799b70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799B70u;
    {
        const bool branch_taken_0x799b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B70u;
        // 0x799b74: 0xa6220002  sh          $v0, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b70) {
            ctx->pc = 0x799B88u;
            goto label_799b88;
        }
    }
    ctx->pc = 0x799B78u;
label_799b78:
    // 0x799b78: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x799b78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x799b7c: 0xa6200002  sh          $zero, 0x2($s1)
    ctx->pc = 0x799b7cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x799b80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799b84: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x799b84u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_799b88:
    // 0x799b88: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x799b88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_799b8c:
    // 0x799b8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x799b8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799b90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799b94: 0x3e00008  jr          $ra
    ctx->pc = 0x799B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B94u;
        // 0x799b98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799B9Cu;
    // 0x799b9c: 0x0  nop
    ctx->pc = 0x799b9cu;
    // NOP
    ctx->pc = 0x799ba0u;
}
} // namespace gh_r021
