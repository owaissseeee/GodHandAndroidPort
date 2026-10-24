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

// Function: func_001B0078
// Address: 0x1b0078 - 0x1b0150
void func_001B0078_0x1b0078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B0078_0x1b0078");
#endif

    switch (ctx->pc) {
        case 0x1b0144u: goto label_1b0144;
        default: break;
    }

    ctx->pc = 0x1b0078u;

    // 0x1b0078: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b0078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b007c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1b007cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0080: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b0080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b0084: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b0084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0088: 0x84c2054a  lh          $v0, 0x54A($a2)
    ctx->pc = 0x1b0088u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 1354)));
    // 0x1b008c: 0x84c50548  lh          $a1, 0x548($a2)
    ctx->pc = 0x1b008cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 1352)));
    // 0x1b0090: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b0090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b0094: 0x0  nop
    ctx->pc = 0x1b0094u;
    // NOP
    // 0x1b0098: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b0098u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b009c: 0x90c302b4  lbu         $v1, 0x2B4($a2)
    ctx->pc = 0x1b009cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 692)));
    // 0x1b00a0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b00a0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b00a4: 0x0  nop
    ctx->pc = 0x1b00a4u;
    // NOP
    // 0x1b00a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b00a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b00ac: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x1b00acu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b00b0: 0x0  nop
    ctx->pc = 0x1b00b0u;
    // NOP
    // 0x1b00b4: 0x0  nop
    ctx->pc = 0x1b00b4u;
    // NOP
    // 0x1b00b8: 0x46000b43  div.s       $f13, $f1, $f0
    ctx->pc = 0x1b00b8u;
    ctx->f[13] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x1b00bc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B00BCu;
    {
        const bool branch_taken_0x1b00bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B00C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B00BCu;
        // 0x1b00c0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b00bc) {
            ctx->pc = 0x1B00D0u;
            goto label_1b00d0;
        }
    }
    ctx->pc = 0x1B00C4u;
    // 0x1b00c4: 0x8cc20278  lw          $v0, 0x278($a2)
    ctx->pc = 0x1b00c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 632)));
    // 0x1b00c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B00C8u;
    {
        const bool branch_taken_0x1b00c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B00CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B00C8u;
        // 0x1b00cc: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b00c8) {
            ctx->pc = 0x1B00D4u;
            goto label_1b00d4;
        }
    }
    ctx->pc = 0x1B00D0u;
label_1b00d0:
    // 0x1b00d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b00d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b00d4:
    // 0x1b00d4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B00D4u;
    {
        const bool branch_taken_0x1b00d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B00D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B00D4u;
        // 0x1b00d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b00d4) {
            ctx->pc = 0x1B011Cu;
            goto label_1b011c;
        }
    }
    ctx->pc = 0x1B00DCu;
    // 0x1b00dc: 0x90c302b4  lbu         $v1, 0x2B4($a2)
    ctx->pc = 0x1b00dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 692)));
    // 0x1b00e0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b00e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b00e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B00E4u;
    {
        const bool branch_taken_0x1b00e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B00E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B00E4u;
        // 0x1b00e8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b00e4) {
            ctx->pc = 0x1B00F8u;
            goto label_1b00f8;
        }
    }
    ctx->pc = 0x1B00ECu;
    // 0x1b00ec: 0x8cc20278  lw          $v0, 0x278($a2)
    ctx->pc = 0x1b00ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 632)));
    // 0x1b00f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B00F0u;
    {
        const bool branch_taken_0x1b00f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B00F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B00F0u;
        // 0x1b00f4: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b00f0) {
            ctx->pc = 0x1B00FCu;
            goto label_1b00fc;
        }
    }
    ctx->pc = 0x1B00F8u;
label_1b00f8:
    // 0x1b00f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b00f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b00fc:
    // 0x1b00fc: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1b00fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1b0100: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b0100u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b0104: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b0104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0108: 0xc4c1060c  lwc1        $f1, 0x60C($a2)
    ctx->pc = 0x1b0108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 1548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b010c: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x1b010cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x1b0110: 0x8c4200d0  lw          $v0, 0xD0($v0)
    ctx->pc = 0x1b0110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x1b0114: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1b0114u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b0118: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1b0118u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1b011c:
    // 0x1b011c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b011cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1b0120: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b0120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0124: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b0124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0128: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b0128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b012c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b012cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b0130: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0134: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x1b0134u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x1b0138: 0x46006b40  add.s       $f13, $f13, $f0
    ctx->pc = 0x1b0138u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x1b013c: 0xc06dc68  jal         func_1B71A0
    ctx->pc = 0x1B013Cu;
    SET_GPR_U32(ctx, 31, 0x1B0144u);
    ctx->pc = 0x1B0140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B013Cu;
    // 0x1b0140: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71A0u, 0x1B013Cu, 0x1B0144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0144u;
label_1b0144:
    // 0x1b0144: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b0144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0148: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0148u;
        // 0x1b014c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0150u;
}
