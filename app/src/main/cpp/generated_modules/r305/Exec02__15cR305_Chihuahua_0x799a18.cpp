#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r305_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r305
{
// Function: Exec02__15cR305_Chihuahua
// Address: 0x799a18 - 0x799c98
void Exec02__15cR305_Chihuahua_0x799a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Exec02__15cR305_Chihuahua_0x799a18");
#endif

    switch (ctx->pc) {
        case 0x799a58u: goto label_799a58;
        case 0x799a9cu: goto label_799a9c;
        case 0x799ad0u: goto label_799ad0;
        case 0x799aecu: goto label_799aec;
        case 0x799b00u: goto label_799b00;
        case 0x799b40u: goto label_799b40;
        case 0x799b48u: goto label_799b48;
        case 0x799b70u: goto label_799b70;
        case 0x799bb0u: goto label_799bb0;
        case 0x799bb8u: goto label_799bb8;
        case 0x799c0cu: goto label_799c0c;
        case 0x799c38u: goto label_799c38;
        case 0x799c40u: goto label_799c40;
        default: break;
    }

    ctx->pc = 0x799a18u;

    // 0x799a18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x799a1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x799a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x799a20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799a24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x799a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a28: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x799a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x799a2c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x799a2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x799a30: 0x10400095  beqz        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x799A30u;
    {
        const bool branch_taken_0x799a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A30u;
        // 0x799a34: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a30) {
            ctx->pc = 0x799C88u;
            goto label_799c88;
        }
    }
    ctx->pc = 0x799A38u;
    // 0x799a38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x799a38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x799a3c: 0x2442a710  addiu       $v0, $v0, -0x58F0
    ctx->pc = 0x799a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944528));
    // 0x799a40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x799a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x799a44: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x799a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799a48: 0x800008  jr          $a0
    ctx->pc = 0x799A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x799A50u: goto label_799a50;
            case 0x799B54u: goto label_799b54;
            case 0x799BC8u: goto label_799bc8;
            case 0x799C5Cu: goto label_799c5c;
            case 0x799C88u: goto label_799c88;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x799A50u;
label_799a50:
    // 0x799a50: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x799A50u;
    SET_GPR_U32(ctx, 31, 0x799A58u);
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x799A50u, 0x799A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A58u;
label_799a58:
    // 0x799a58: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x799a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x799a5c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x799a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x799a60: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799a60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x799a64: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799a68: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x799a68u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x799a6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799a70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799a74: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x799A74u;
    {
        const bool branch_taken_0x799a74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x799a74) {
            ctx->pc = 0x799A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799A74u;
            // 0x799a78: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x799A7Cu;
            goto label_799a7c;
        }
    }
    ctx->pc = 0x799A7Cu;
label_799a7c:
    // 0x799a7c: 0x2010  mfhi        $a0
    ctx->pc = 0x799a7cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x799a80: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x799a80u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799a84: 0x0  nop
    ctx->pc = 0x799a84u;
    // NOP
    // 0x799a88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x799a88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x799a8c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x799a8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x799a90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x799a90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x799a94: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x799A94u;
    SET_GPR_U32(ctx, 31, 0x799A9Cu);
    ctx->pc = 0x799A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A94u;
    // 0x799a98: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x799A94u, 0x799A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A9Cu;
label_799a9c:
    // 0x799a9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x799a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799aa0: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x799aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x799aa4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x799aa4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x799aa8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x799AA8u;
    {
        const bool branch_taken_0x799aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x799aa8) {
            ctx->pc = 0x799AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799AA8u;
            // 0x799aac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x799AB0u;
            goto label_799ab0;
        }
    }
    ctx->pc = 0x799AB0u;
label_799ab0:
    // 0x799ab0: 0x3c01401c  lui         $at, 0x401C
    ctx->pc = 0x799ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16412 << 16));
    // 0x799ab4: 0x342161aa  ori         $at, $at, 0x61AA
    ctx->pc = 0x799ab4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25002);
    // 0x799ab8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799ab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799abc: 0x2010  mfhi        $a0
    ctx->pc = 0x799abcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x799ac0: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x799ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x799ac4: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x799ac4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x799ac8: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x799AC8u;
    SET_GPR_U32(ctx, 31, 0x799AD0u);
    ctx->pc = 0x799ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AC8u;
    // 0x799acc: 0xae04000c  sw          $a0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x799AC8u, 0x799AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AD0u;
label_799ad0:
    // 0x799ad0: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x799ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x799ad4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x799ad4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799ad8: 0x0  nop
    ctx->pc = 0x799ad8u;
    // NOP
    // 0x799adc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x799ADCu;
    {
        const bool branch_taken_0x799adc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x799adc) {
            ctx->pc = 0x799AF8u;
            goto label_799af8;
        }
    }
    ctx->pc = 0x799AE4u;
    // 0x799ae4: 0xc06c7f8  jal         func_1B1FE0
    ctx->pc = 0x799AE4u;
    SET_GPR_U32(ctx, 31, 0x799AECu);
    ctx->pc = 0x799AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AE4u;
    // 0x799ae8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1FE0u, 0x799AE4u, 0x799AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AECu;
label_799aec:
    // 0x799aec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799af0: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x799AF0u;
    {
        const bool branch_taken_0x799af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AF0u;
        // 0x799af4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799af0) {
            ctx->pc = 0x799C88u;
            goto label_799c88;
        }
    }
    ctx->pc = 0x799AF8u;
label_799af8:
    // 0x799af8: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x799AF8u;
    SET_GPR_U32(ctx, 31, 0x799B00u);
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x799AF8u, 0x799B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B00u;
label_799b00:
    // 0x799b00: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x799b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x799b04: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x799b04u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x799b08: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x799B08u;
    {
        const bool branch_taken_0x799b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x799b08) {
            ctx->pc = 0x799B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799B08u;
            // 0x799b0c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x799B10u;
            goto label_799b10;
        }
    }
    ctx->pc = 0x799B10u;
label_799b10:
    // 0x799b10: 0x2010  mfhi        $a0
    ctx->pc = 0x799b10u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x799b14: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x799B14u;
    {
        const bool branch_taken_0x799b14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x799B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B14u;
        // 0x799b18: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b14) {
            ctx->pc = 0x799B40u;
            goto label_799b40;
        }
    }
    ctx->pc = 0x799B1Cu;
    // 0x799b1c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x799b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799b20: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x799b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x799b24: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799b28: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x799b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x799b2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799b2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b30: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799b30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b34: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799b34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b38: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x799B38u;
    SET_GPR_U32(ctx, 31, 0x799B40u);
    ctx->pc = 0x799B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B38u;
    // 0x799b3c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x799B38u, 0x799B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B40u;
label_799b40:
    // 0x799b40: 0xc06c7d6  jal         func_1B1F58
    ctx->pc = 0x799B40u;
    SET_GPR_U32(ctx, 31, 0x799B48u);
    ctx->pc = 0x799B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B40u;
    // 0x799b44: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1F58u, 0x799B40u, 0x799B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B48u;
label_799b48:
    // 0x799b48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x799b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799b4c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x799B4Cu;
    {
        const bool branch_taken_0x799b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B4Cu;
        // 0x799b50: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b4c) {
            ctx->pc = 0x799C88u;
            goto label_799c88;
        }
    }
    ctx->pc = 0x799B54u;
label_799b54:
    // 0x799b54: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x799b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799b58: 0x90620601  lbu         $v0, 0x601($v1)
    ctx->pc = 0x799b58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1537)));
    // 0x799b5c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x799b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x799b60: 0x5040004a  beql        $v0, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x799B60u;
    {
        const bool branch_taken_0x799b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799b60) {
            ctx->pc = 0x799B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799B60u;
            // 0x799b64: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799C8Cu;
            goto label_799c8c;
        }
    }
    ctx->pc = 0x799B68u;
    // 0x799b68: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x799B68u;
    SET_GPR_U32(ctx, 31, 0x799B70u);
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x799B68u, 0x799B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B70u;
label_799b70:
    // 0x799b70: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x799b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x799b74: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x799b74u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x799b78: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x799B78u;
    {
        const bool branch_taken_0x799b78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x799b78) {
            ctx->pc = 0x799B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799B78u;
            // 0x799b7c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x799B80u;
            goto label_799b80;
        }
    }
    ctx->pc = 0x799B80u;
label_799b80:
    // 0x799b80: 0x2010  mfhi        $a0
    ctx->pc = 0x799b80u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x799b84: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x799B84u;
    {
        const bool branch_taken_0x799b84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x799B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B84u;
        // 0x799b88: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b84) {
            ctx->pc = 0x799BB0u;
            goto label_799bb0;
        }
    }
    ctx->pc = 0x799B8Cu;
    // 0x799b8c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x799b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799b90: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x799b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x799b94: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799b98: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x799b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x799b9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799b9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ba0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799ba0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ba4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799ba4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ba8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x799BA8u;
    SET_GPR_U32(ctx, 31, 0x799BB0u);
    ctx->pc = 0x799BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BA8u;
    // 0x799bac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x799BA8u, 0x799BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BB0u;
label_799bb0:
    // 0x799bb0: 0xc06c7d6  jal         func_1B1F58
    ctx->pc = 0x799BB0u;
    SET_GPR_U32(ctx, 31, 0x799BB8u);
    ctx->pc = 0x799BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BB0u;
    // 0x799bb4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1F58u, 0x799BB0u, 0x799BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BB8u;
label_799bb8:
    // 0x799bb8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x799bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x799bbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799bc0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x799BC0u;
    {
        const bool branch_taken_0x799bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BC0u;
        // 0x799bc4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bc0) {
            ctx->pc = 0x799C88u;
            goto label_799c88;
        }
    }
    ctx->pc = 0x799BC8u;
label_799bc8:
    // 0x799bc8: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x799bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x799bcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x799bccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799bd0: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x799bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x799bd4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799bd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799bd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x799bd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799bdc: 0x0  nop
    ctx->pc = 0x799bdcu;
    // NOP
    // 0x799be0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x799BE0u;
    {
        const bool branch_taken_0x799be0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x799be0) {
            ctx->pc = 0x799BF0u;
            goto label_799bf0;
        }
    }
    ctx->pc = 0x799BE8u;
    // 0x799be8: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x799be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x799bec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_799bf0:
    // 0x799bf0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x799bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x799bf4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x799bf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x799bf8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799bf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799bfc: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x799bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x799c00: 0x46026303  div.s       $f12, $f12, $f2
    ctx->pc = 0x799c00u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[2]);
    // 0x799c04: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x799C04u;
    SET_GPR_U32(ctx, 31, 0x799C0Cu);
    ctx->pc = 0x799C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C04u;
    // 0x799c08: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x799C04u, 0x799C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C0Cu;
label_799c0c:
    // 0x799c0c: 0xc6010060  lwc1        $f1, 0x60($s0)
    ctx->pc = 0x799c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x799c10: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x799c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799c14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x799c14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799c18: 0x0  nop
    ctx->pc = 0x799c18u;
    // NOP
    // 0x799c1c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x799C1Cu;
    {
        const bool branch_taken_0x799c1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x799c1c) {
            ctx->pc = 0x799C30u;
            goto label_799c30;
        }
    }
    ctx->pc = 0x799C24u;
    // 0x799c24: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x799c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x799c28: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x799C28u;
    {
        const bool branch_taken_0x799c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C28u;
        // 0x799c2c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c28) {
            ctx->pc = 0x799C84u;
            goto label_799c84;
        }
    }
    ctx->pc = 0x799C30u;
label_799c30:
    // 0x799c30: 0xc06c7c0  jal         func_1B1F00
    ctx->pc = 0x799C30u;
    SET_GPR_U32(ctx, 31, 0x799C38u);
    ctx->pc = 0x799C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C30u;
    // 0x799c34: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1F00u, 0x799C30u, 0x799C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C38u;
label_799c38:
    // 0x799c38: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x799C38u;
    SET_GPR_U32(ctx, 31, 0x799C40u);
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x799C38u, 0x799C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C40u;
label_799c40:
    // 0x799c40: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x799c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x799c44: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x799c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x799c48: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x799c48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x799c4c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x799c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x799c50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x799c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x799c54: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x799C54u;
    {
        const bool branch_taken_0x799c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C54u;
        // 0x799c58: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c54) {
            ctx->pc = 0x799C84u;
            goto label_799c84;
        }
    }
    ctx->pc = 0x799C5Cu;
label_799c5c:
    // 0x799c5c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x799c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x799c60: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x799C60u;
    {
        const bool branch_taken_0x799c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C60u;
        // 0x799c64: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c60) {
            ctx->pc = 0x799C84u;
            goto label_799c84;
        }
    }
    ctx->pc = 0x799C68u;
    // 0x799c68: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x799c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x799c6c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x799c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x799c70: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x799c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x799c74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x799c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x799c78: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x799c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x799c7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x799C7Cu;
    {
        const bool branch_taken_0x799c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C7Cu;
        // 0x799c80: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c7c) {
            ctx->pc = 0x799C88u;
            goto label_799c88;
        }
    }
    ctx->pc = 0x799C84u;
label_799c84:
    // 0x799c84: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x799c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_799c88:
    // 0x799c88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x799c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_799c8c:
    // 0x799c8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799c90: 0x3e00008  jr          $ra
    ctx->pc = 0x799C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C90u;
        // 0x799c94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799C98u;
}
} // namespace gh_r305
