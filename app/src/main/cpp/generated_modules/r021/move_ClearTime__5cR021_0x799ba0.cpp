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
// Function: move_ClearTime__5cR021
// Address: 0x799ba0 - 0x799f60
void move_ClearTime__5cR021_0x799ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("move_ClearTime__5cR021_0x799ba0");
#endif

    switch (ctx->pc) {
        case 0x799c08u: goto label_799c08;
        case 0x799c90u: goto label_799c90;
        case 0x799d70u: goto label_799d70;
        case 0x799de4u: goto label_799de4;
        case 0x799e64u: goto label_799e64;
        case 0x799e88u: goto label_799e88;
        case 0x799eb8u: goto label_799eb8;
        default: break;
    }

    ctx->pc = 0x799ba0u;

    // 0x799ba0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x799ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x799ba4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x799ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x799ba8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x799ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x799bac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x799bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799bb0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x799bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x799bb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x799bb8: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x799bb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x799bbc: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x799bbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x799bc0: 0x10400094  beqz        $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x799BC0u;
    {
        const bool branch_taken_0x799bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BC0u;
        // 0x799bc4: 0x3c120074  lui         $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bc0) {
            ctx->pc = 0x799E14u;
            goto label_799e14;
        }
    }
    ctx->pc = 0x799BC8u;
    // 0x799bc8: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799bcc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x799bccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x799bd0: 0x2442bc80  addiu       $v0, $v0, -0x4380
    ctx->pc = 0x799bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950016));
    // 0x799bd4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x799bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x799bd8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x799bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799bdc: 0x800008  jr          $a0
    ctx->pc = 0x799BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x799BE4u: goto label_799be4;
            case 0x799C34u: goto label_799c34;
            case 0x799C78u: goto label_799c78;
            case 0x799DECu: goto label_799dec;
            case 0x799E00u: goto label_799e00;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799BDCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x799BE4u;
label_799be4:
    // 0x799be4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799be4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799be8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799bec: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x799becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x799bf0: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x799bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x799bf4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799bf8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799bf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799bfc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799bfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c00: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799C00u;
    SET_GPR_U32(ctx, 31, 0x799C08u);
    ctx->pc = 0x799C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C00u;
    // 0x799c04: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799C00u, 0x799C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C08u;
label_799c08:
    // 0x799c08: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x799c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x799c0c: 0xac600084  sw          $zero, 0x84($v1)
    ctx->pc = 0x799c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 0));
    // 0x799c10: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x799c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x799c14: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x799c14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x799c18: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x799c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x799c1c: 0xac600084  sw          $zero, 0x84($v1)
    ctx->pc = 0x799c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 0));
    // 0x799c20: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x799c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x799c24: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x799c24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x799c28: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x799c28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x799c2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799c30: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x799c30u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
label_799c34:
    // 0x799c34: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x799c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x799c38: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x799c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x799c3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799c40: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x799c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799c44: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x799c44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x799c48: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x799c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x799c4c: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x799c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x799c50: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x799c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x799c54: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x799c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799c58: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x799c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x799c5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x799c5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799c60: 0x0  nop
    ctx->pc = 0x799c60u;
    // NOP
    // 0x799c64: 0x4500006b  bc1f        . + 4 + (0x6B << 2)
    ctx->pc = 0x799C64u;
    {
        const bool branch_taken_0x799c64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x799C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C64u;
        // 0x799c68: 0x3c120074  lui         $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c64) {
            ctx->pc = 0x799E14u;
            goto label_799e14;
        }
    }
    ctx->pc = 0x799C6Cu;
    // 0x799c6c: 0xe4610038  swc1        $f1, 0x38($v1)
    ctx->pc = 0x799c6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x799c70: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x799C70u;
    {
        const bool branch_taken_0x799c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C70u;
        // 0x799c74: 0x96220002  lhu         $v0, 0x2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c70) {
            ctx->pc = 0x799DF4u;
            goto label_799df4;
        }
    }
    ctx->pc = 0x799C78u;
label_799c78:
    // 0x799c78: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x799c78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x799c7c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x799c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c80: 0x2604a990  addiu       $a0, $s0, -0x5670
    ctx->pc = 0x799c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945168));
    // 0x799c84: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x799c84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x799c88: 0xc0b677a  jal         func_2D9DE8
    ctx->pc = 0x799C88u;
    SET_GPR_U32(ctx, 31, 0x799C90u);
    ctx->pc = 0x799C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C88u;
    // 0x799c8c: 0x37a70008  ori         $a3, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9DE8u, 0x799C88u, 0x799C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C90u;
label_799c90:
    // 0x799c90: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x799c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x799c94: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x799c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x799c98: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x799c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x799c9c: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x799c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    // 0x799ca0: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x799ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x799ca4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x799ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x799ca8: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x799ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x799cac: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x799cacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x799cb0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x799CB0u;
    {
        const bool branch_taken_0x799cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799cb0) {
            ctx->pc = 0x799CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799CB0u;
            // 0x799cb4: 0x8e220084  lw          $v0, 0x84($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799CC4u;
            goto label_799cc4;
        }
    }
    ctx->pc = 0x799CB8u;
    // 0x799cb8: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x799cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
    // 0x799cbc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x799cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x799cc0: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x799cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_799cc4:
    // 0x799cc4: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x799cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x799cc8: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x799cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x799ccc: 0xac430084  sw          $v1, 0x84($v0)
    ctx->pc = 0x799cccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 3));
    // 0x799cd0: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x799cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x799cd4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x799cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x799cd8: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x799cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x799cdc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x799cdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x799ce0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x799CE0u;
    {
        const bool branch_taken_0x799ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799ce0) {
            ctx->pc = 0x799CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799CE0u;
            // 0x799ce4: 0x8e230088  lw          $v1, 0x88($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799CF4u;
            goto label_799cf4;
        }
    }
    ctx->pc = 0x799CE8u;
    // 0x799ce8: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x799ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
    // 0x799cec: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x799cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x799cf0: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x799cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_799cf4:
    // 0x799cf4: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x799cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x799cf8: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x799cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x799cfc: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x799cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    // 0x799d00: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x799d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x799d04: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x799d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799d08: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x799d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x799d0c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x799d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x799d10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799D10u;
    {
        const bool branch_taken_0x799d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D10u;
        // 0x799d14: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d10) {
            ctx->pc = 0x799D20u;
            goto label_799d20;
        }
    }
    ctx->pc = 0x799D18u;
    // 0x799d18: 0xaca40084  sw          $a0, 0x84($a1)
    ctx->pc = 0x799d18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 4));
    // 0x799d1c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x799d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_799d20:
    // 0x799d20: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x799d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799d24: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x799D24u;
    {
        const bool branch_taken_0x799d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D24u;
        // 0x799d28: 0x3c120074  lui         $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d24) {
            ctx->pc = 0x799E14u;
            goto label_799e14;
        }
    }
    ctx->pc = 0x799D2Cu;
    // 0x799d2c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x799d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x799d30: 0x54400039  bnel        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x799D30u;
    {
        const bool branch_taken_0x799d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799d30) {
            ctx->pc = 0x799D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799D30u;
            // 0x799d34: 0x265074a0  addiu       $s0, $s2, 0x74A0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799E18u;
            goto label_799e18;
        }
    }
    ctx->pc = 0x799D38u;
    // 0x799d38: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x799d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x799d3c: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x799D3Cu;
    {
        const bool branch_taken_0x799d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799d3c) {
            ctx->pc = 0x799D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799D3Cu;
            // 0x799d40: 0x265074a0  addiu       $s0, $s2, 0x74A0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799E18u;
            goto label_799e18;
        }
    }
    ctx->pc = 0x799D44u;
    // 0x799d44: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799d48: 0x8e2a0088  lw          $t2, 0x88($s1)
    ctx->pc = 0x799d48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x799d4c: 0x2448bd78  addiu       $t0, $v0, -0x4288
    ctx->pc = 0x799d4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950264));
    // 0x799d50: 0x8e290084  lw          $t1, 0x84($s1)
    ctx->pc = 0x799d50u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x799d54: 0x264e74a0  addiu       $t6, $s2, 0x74A0
    ctx->pc = 0x799d54u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
    // 0x799d58: 0x250f0004  addiu       $t7, $t0, 0x4
    ctx->pc = 0x799d58u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x799d5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799d5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d60: 0x240d0054  addiu       $t5, $zero, 0x54
    ctx->pc = 0x799d60u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x799d64: 0x240c003c  addiu       $t4, $zero, 0x3C
    ctx->pc = 0x799d64u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x799d68: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x799d68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799d6c: 0x91c205b7  lbu         $v0, 0x5B7($t6)
    ctx->pc = 0x799d6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1463)));
label_799d70:
    // 0x799d70: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x799d70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799d74: 0x8d430084  lw          $v1, 0x84($t2)
    ctx->pc = 0x799d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 132)));
    // 0x799d78: 0x4d1018  mult        $v0, $v0, $t5
    ctx->pc = 0x799d78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x799d7c: 0x8d250084  lw          $a1, 0x84($t1)
    ctx->pc = 0x799d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 132)));
    // 0x799d80: 0x6c1818  mult        $v1, $v1, $t4
    ctx->pc = 0x799d80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x799d84: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x799d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x799d88: 0xc82021  addu        $a0, $a2, $t0
    ctx->pc = 0x799d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x799d8c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x799d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x799d90: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x799d90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799d94: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x799d94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x799d98: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799D98u;
    {
        const bool branch_taken_0x799d98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D98u;
        // 0x799d9c: 0xcf1821  addu        $v1, $a2, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d98) {
            ctx->pc = 0x799DACu;
            goto label_799dac;
        }
    }
    ctx->pc = 0x799DA0u;
    // 0x799da0: 0x54eb0007  bnel        $a3, $t3, . + 4 + (0x7 << 2)
    ctx->pc = 0x799DA0u;
    {
        const bool branch_taken_0x799da0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 11));
        if (branch_taken_0x799da0) {
            ctx->pc = 0x799DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799DA0u;
            // 0x799da4: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799DC0u;
            goto label_799dc0;
        }
    }
    ctx->pc = 0x799DA8u;
    // 0x799da8: 0xcf1821  addu        $v1, $a2, $t7
    ctx->pc = 0x799da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
label_799dac:
    // 0x799dac: 0x9624012a  lhu         $a0, 0x12A($s1)
    ctx->pc = 0x799dacu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 298)));
    // 0x799db0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x799db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799db4: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x799db4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x799db8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799DB8u;
    {
        const bool branch_taken_0x799db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DB8u;
        // 0x799dbc: 0xae2200ec  sw          $v0, 0xEC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799db8) {
            ctx->pc = 0x799DD0u;
            goto label_799dd0;
        }
    }
    ctx->pc = 0x799DC0u;
label_799dc0:
    // 0x799dc0: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x799dc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x799dc4: 0x2ce30004  sltiu       $v1, $a3, 0x4
    ctx->pc = 0x799dc4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x799dc8: 0x5460ffe9  bnel        $v1, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x799DC8u;
    {
        const bool branch_taken_0x799dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x799dc8) {
            ctx->pc = 0x799DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799DC8u;
            // 0x799dcc: 0x91c205b7  lbu         $v0, 0x5B7($t6) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1463)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799d70;
        }
    }
    ctx->pc = 0x799DD0u;
label_799dd0:
    // 0x799dd0: 0x2602a990  addiu       $v0, $s0, -0x5670
    ctx->pc = 0x799dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945168));
    // 0x799dd4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x799dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x799dd8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x799dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x799ddc: 0xc07f18c  jal         func_1FC630
    ctx->pc = 0x799DDCu;
    SET_GPR_U32(ctx, 31, 0x799DE4u);
    ctx->pc = 0x799DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DDCu;
    // 0x799de0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC630u, 0x799DDCu, 0x799DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DE4u;
label_799de4:
    // 0x799de4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x799DE4u;
    {
        const bool branch_taken_0x799de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DE4u;
        // 0x799de8: 0x96220002  lhu         $v0, 0x2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799de4) {
            ctx->pc = 0x799DF4u;
            goto label_799df4;
        }
    }
    ctx->pc = 0x799DECu;
label_799dec:
    // 0x799dec: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x799decu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x799df0: 0x3c120074  lui         $s2, 0x74
    ctx->pc = 0x799df0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
label_799df4:
    // 0x799df4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799df8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x799DF8u;
    {
        const bool branch_taken_0x799df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DF8u;
        // 0x799dfc: 0xa6220002  sh          $v0, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799df8) {
            ctx->pc = 0x799E14u;
            goto label_799e14;
        }
    }
    ctx->pc = 0x799E00u;
label_799e00:
    // 0x799e00: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x799e00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x799e04: 0x3c120074  lui         $s2, 0x74
    ctx->pc = 0x799e04u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
    // 0x799e08: 0xa6200002  sh          $zero, 0x2($s1)
    ctx->pc = 0x799e08u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x799e0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799e10: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x799e10u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_799e14:
    // 0x799e14: 0x265074a0  addiu       $s0, $s2, 0x74A0
    ctx->pc = 0x799e14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
label_799e18:
    // 0x799e18: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x799e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x799e1c: 0xde0201a0  ld          $v0, 0x1A0($s0)
    ctx->pc = 0x799e1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x799e20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x799e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x799e24: 0x50400048  beql        $v0, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x799E24u;
    {
        const bool branch_taken_0x799e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799e24) {
            ctx->pc = 0x799E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799E24u;
            // 0x799e28: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799F48u;
            goto label_799f48;
        }
    }
    ctx->pc = 0x799E2Cu;
    // 0x799e2c: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x799e2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x799e30: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x799e30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x799e34: 0x50400044  beql        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x799E34u;
    {
        const bool branch_taken_0x799e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799e34) {
            ctx->pc = 0x799E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799E34u;
            // 0x799e38: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799F48u;
            goto label_799f48;
        }
    }
    ctx->pc = 0x799E3Cu;
    // 0x799e3c: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x799E3Cu;
    {
        const bool branch_taken_0x799e3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E3Cu;
        // 0x799e40: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e3c) {
            ctx->pc = 0x799F44u;
            goto label_799f44;
        }
    }
    ctx->pc = 0x799E44u;
    // 0x799e44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e48: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x799e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x799e4c: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x799e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x799e50: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799e50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799e54: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799e54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799e58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799e58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e5c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799E5Cu;
    SET_GPR_U32(ctx, 31, 0x799E64u);
    ctx->pc = 0x799E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E5Cu;
    // 0x799e60: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799E5Cu, 0x799E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E64u;
label_799e64:
    // 0x799e64: 0x8e250088  lw          $a1, 0x88($s1)
    ctx->pc = 0x799e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x799e68: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x799e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x799e6c: 0x8e260084  lw          $a2, 0x84($s1)
    ctx->pc = 0x799e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x799e70: 0x2484a990  addiu       $a0, $a0, -0x5670
    ctx->pc = 0x799e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945168));
    // 0x799e74: 0x8e270080  lw          $a3, 0x80($s1)
    ctx->pc = 0x799e74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x799e78: 0x24a50084  addiu       $a1, $a1, 0x84
    ctx->pc = 0x799e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 132));
    // 0x799e7c: 0x24c60084  addiu       $a2, $a2, 0x84
    ctx->pc = 0x799e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 132));
    // 0x799e80: 0xc0b677a  jal         func_2D9DE8
    ctx->pc = 0x799E80u;
    SET_GPR_U32(ctx, 31, 0x799E88u);
    ctx->pc = 0x799E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E80u;
    // 0x799e84: 0x24e70084  addiu       $a3, $a3, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9DE8u, 0x799E80u, 0x799E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E88u;
label_799e88:
    // 0x799e88: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799e8c: 0x8e2a0088  lw          $t2, 0x88($s1)
    ctx->pc = 0x799e8cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x799e90: 0x2448bd78  addiu       $t0, $v0, -0x4288
    ctx->pc = 0x799e90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950264));
    // 0x799e94: 0x8e290084  lw          $t1, 0x84($s1)
    ctx->pc = 0x799e94u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x799e98: 0x200782d  daddu       $t7, $s0, $zero
    ctx->pc = 0x799e98u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e9c: 0x240e0054  addiu       $t6, $zero, 0x54
    ctx->pc = 0x799e9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x799ea0: 0x240d003c  addiu       $t5, $zero, 0x3C
    ctx->pc = 0x799ea0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x799ea4: 0x240c0003  addiu       $t4, $zero, 0x3
    ctx->pc = 0x799ea4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799ea8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799ea8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799eac: 0x250b0004  addiu       $t3, $t0, 0x4
    ctx->pc = 0x799eacu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x799eb0: 0x91e205b7  lbu         $v0, 0x5B7($t7)
    ctx->pc = 0x799eb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 1463)));
    // 0x799eb4: 0x0  nop
    ctx->pc = 0x799eb4u;
    // NOP
label_799eb8:
    // 0x799eb8: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x799eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799ebc: 0x8d430084  lw          $v1, 0x84($t2)
    ctx->pc = 0x799ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 132)));
    // 0x799ec0: 0x4e1018  mult        $v0, $v0, $t6
    ctx->pc = 0x799ec0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x799ec4: 0x8d250084  lw          $a1, 0x84($t1)
    ctx->pc = 0x799ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 132)));
    // 0x799ec8: 0x6d1818  mult        $v1, $v1, $t5
    ctx->pc = 0x799ec8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x799ecc: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x799eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x799ed0: 0xc82021  addu        $a0, $a2, $t0
    ctx->pc = 0x799ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x799ed4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x799ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x799ed8: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x799ed8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799edc: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x799edcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x799ee0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799EE0u;
    {
        const bool branch_taken_0x799ee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EE0u;
        // 0x799ee4: 0xcb1821  addu        $v1, $a2, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ee0) {
            ctx->pc = 0x799EF4u;
            goto label_799ef4;
        }
    }
    ctx->pc = 0x799EE8u;
    // 0x799ee8: 0x14ec0007  bne         $a3, $t4, . + 4 + (0x7 << 2)
    ctx->pc = 0x799EE8u;
    {
        const bool branch_taken_0x799ee8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 12));
        ctx->pc = 0x799EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EE8u;
        // 0x799eec: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ee8) {
            ctx->pc = 0x799F08u;
            goto label_799f08;
        }
    }
    ctx->pc = 0x799EF0u;
    // 0x799ef0: 0xcb1821  addu        $v1, $a2, $t3
    ctx->pc = 0x799ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
label_799ef4:
    // 0x799ef4: 0x9624012a  lhu         $a0, 0x12A($s1)
    ctx->pc = 0x799ef4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 298)));
    // 0x799ef8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x799ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799efc: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x799efcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x799f00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799F00u;
    {
        const bool branch_taken_0x799f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F00u;
        // 0x799f04: 0xae2200ec  sw          $v0, 0xEC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f00) {
            ctx->pc = 0x799F18u;
            goto label_799f18;
        }
    }
    ctx->pc = 0x799F08u;
label_799f08:
    // 0x799f08: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x799f08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x799f0c: 0x2ce30004  sltiu       $v1, $a3, 0x4
    ctx->pc = 0x799f0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x799f10: 0x5460ffe9  bnel        $v1, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x799F10u;
    {
        const bool branch_taken_0x799f10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x799f10) {
            ctx->pc = 0x799F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799F10u;
            // 0x799f14: 0x91e205b7  lbu         $v0, 0x5B7($t7) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 1463)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799eb8;
        }
    }
    ctx->pc = 0x799F18u;
label_799f18:
    // 0x799f18: 0x8e2200ec  lw          $v0, 0xEC($s1)
    ctx->pc = 0x799f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
    // 0x799f1c: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x799f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x799f20: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x799f20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    // 0x799f24: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x799f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x799f28: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x799f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x799f2c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x799f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799f30: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x799f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x799f34: 0xa6200002  sh          $zero, 0x2($s1)
    ctx->pc = 0x799f34u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x799f38: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x799f38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x799f3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799f40: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x799f40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_799f44:
    // 0x799f44: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x799f44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_799f48:
    // 0x799f48: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x799f48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799f4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x799f4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799f50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799f54: 0x3e00008  jr          $ra
    ctx->pc = 0x799F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F54u;
        // 0x799f58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799F5Cu;
    // 0x799f5c: 0x0  nop
    ctx->pc = 0x799f5cu;
    // NOP
    ctx->pc = 0x799f60u;
}
} // namespace gh_r021
