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

// Function: func_00145FC8
// Address: 0x145fc8 - 0x146190
void func_00145FC8_0x145fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00145FC8_0x145fc8");
#endif

    switch (ctx->pc) {
        case 0x146088u: goto label_146088;
        default: break;
    }

    ctx->pc = 0x145fc8u;

    // 0x145fc8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x145fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145fcc: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x145fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x145fd0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x145fd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x145fd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x145fd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145fd8: 0xc4a10338  lwc1        $f1, 0x338($a1)
    ctx->pc = 0x145fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145fdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x145fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145fe0: 0x84a30420  lh          $v1, 0x420($a1)
    ctx->pc = 0x145fe0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 1056)));
    // 0x145fe4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x145fe4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x145fe8: 0x94a60420  lhu         $a2, 0x420($a1)
    ctx->pc = 0x145fe8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1056)));
    // 0x145fec: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x145FECu;
    {
        const bool branch_taken_0x145fec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x145FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145FECu;
        // 0x145ff0: 0xe4a10338  swc1        $f1, 0x338($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 824), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x145fec) {
            ctx->pc = 0x14602Cu;
            goto label_14602c;
        }
    }
    ctx->pc = 0x145FF4u;
    // 0x145ff4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x145ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x145ff8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x145FF8u;
    {
        const bool branch_taken_0x145ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145ff8) {
            ctx->pc = 0x145FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145FF8u;
            // 0x145ffc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146010u;
            goto label_146010;
        }
    }
    ctx->pc = 0x146000u;
    // 0x146000: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x146000u;
    {
        const bool branch_taken_0x146000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x146004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146000u;
        // 0x146004: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146000) {
            ctx->pc = 0x146028u;
            goto label_146028;
        }
    }
    ctx->pc = 0x146008u;
    // 0x146008: 0x3e00008  jr          $ra
    ctx->pc = 0x146008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146010u;
label_146010:
    // 0x146010: 0x10620039  beq         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x146010u;
    {
        const bool branch_taken_0x146010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x146014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146010u;
        // 0x146014: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146010) {
            ctx->pc = 0x1460F8u;
            goto label_1460f8;
        }
    }
    ctx->pc = 0x146018u;
    // 0x146018: 0x50620052  beql        $v1, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x146018u;
    {
        const bool branch_taken_0x146018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x146018) {
            ctx->pc = 0x14601Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146018u;
            // 0x14601c: 0x8ca20090  lw          $v0, 0x90($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146164u;
            goto label_146164;
        }
    }
    ctx->pc = 0x146020u;
    // 0x146020: 0x3e00008  jr          $ra
    ctx->pc = 0x146020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146028u;
label_146028:
    // 0x146028: 0xa4a20420  sh          $v0, 0x420($a1)
    ctx->pc = 0x146028u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1056), (uint16_t)GPR_U32(ctx, 2));
label_14602c:
    // 0x14602c: 0x8ca20364  lw          $v0, 0x364($a1)
    ctx->pc = 0x14602cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 868)));
    // 0x146030: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x146030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
    // 0x146034: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x146034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x146038: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x146038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14603c: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x14603cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x146040: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x146040u;
    {
        const bool branch_taken_0x146040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x146044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146040u;
        // 0x146044: 0xaca20364  sw          $v0, 0x364($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 868), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146040) {
            ctx->pc = 0x146060u;
            goto label_146060;
        }
    }
    ctx->pc = 0x146048u;
    // 0x146048: 0x94a20420  lhu         $v0, 0x420($a1)
    ctx->pc = 0x146048u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1056)));
    // 0x14604c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14604cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x146050: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x146050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146054: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x146054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x146058: 0xe4a00338  swc1        $f0, 0x338($a1)
    ctx->pc = 0x146058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 824), bits); }
    // 0x14605c: 0xa4a20420  sh          $v0, 0x420($a1)
    ctx->pc = 0x14605cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1056), (uint16_t)GPR_U32(ctx, 2));
label_146060:
    // 0x146060: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x146060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x146064: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x146064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x146068: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x146068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14606c: 0x244be880  addiu       $t3, $v0, -0x1780
    ctx->pc = 0x14606cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x146070: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x146070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146074: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x146074u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x146078: 0x24a8009c  addiu       $t0, $a1, 0x9C
    ctx->pc = 0x146078u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 156));
    // 0x14607c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x14607cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146080: 0x24a70094  addiu       $a3, $a1, 0x94
    ctx->pc = 0x146080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 148));
    // 0x146084: 0xc4a00338  lwc1        $f0, 0x338($a1)
    ctx->pc = 0x146084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_146088:
    // 0x146088: 0xca2018  mult        $a0, $a2, $t2
    ctx->pc = 0x146088u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x14608c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x14608cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x146090: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x146090u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x146094: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x146094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x146098: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x146098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14609c: 0x1041821  addu        $v1, $t0, $a0
    ctx->pc = 0x14609cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1460a0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1460a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1460a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1460a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1460a8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1460a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1460ac: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x1460acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x1460b0: 0xc4a10338  lwc1        $f1, 0x338($a1)
    ctx->pc = 0x1460b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1460b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1460b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1460b8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1460b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1460bc: 0x10c90005  beq         $a2, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1460BCu;
    {
        const bool branch_taken_0x1460bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        ctx->pc = 0x1460C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1460BCu;
        // 0x1460c0: 0xe4420044  swc1        $f2, 0x44($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1460bc) {
            ctx->pc = 0x1460D4u;
            goto label_1460d4;
        }
    }
    ctx->pc = 0x1460C4u;
    // 0x1460c4: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x1460c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1460c8: 0x8ca40364  lw          $a0, 0x364($a1)
    ctx->pc = 0x1460c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 868)));
    // 0x1460cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1460ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1460d0: 0xac64004c  sw          $a0, 0x4C($v1)
    ctx->pc = 0x1460d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 4));
label_1460d4:
    // 0x1460d4: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x1460d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1460d8: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x1460d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1460dc: 0x2cc30005  sltiu       $v1, $a2, 0x5
    ctx->pc = 0x1460dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1460e0: 0x5460ffe9  bnel        $v1, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1460E0u;
    {
        const bool branch_taken_0x1460e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1460e0) {
            ctx->pc = 0x1460E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1460E0u;
            // 0x1460e4: 0xc4a00338  lwc1        $f0, 0x338($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x146088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146088;
        }
    }
    ctx->pc = 0x1460E8u;
    // 0x1460e8: 0x8ca30364  lw          $v1, 0x364($a1)
    ctx->pc = 0x1460e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 868)));
    // 0x1460ec: 0x8ca200b0  lw          $v0, 0xB0($a1)
    ctx->pc = 0x1460ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 176)));
    // 0x1460f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1460F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1460F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1460F0u;
        // 0x1460f4: 0xac43004c  sw          $v1, 0x4C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1460F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1460F8u;
label_1460f8:
    // 0x1460f8: 0x8ca20368  lw          $v0, 0x368($a1)
    ctx->pc = 0x1460f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
    // 0x1460fc: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x1460fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x146100: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x146100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x146104: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x146104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x146108: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x146108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x14610c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14610Cu;
    {
        const bool branch_taken_0x14610c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x146110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14610Cu;
        // 0x146110: 0xaca20368  sw          $v0, 0x368($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 872), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14610c) {
            ctx->pc = 0x14611Cu;
            goto label_14611c;
        }
    }
    ctx->pc = 0x146114u;
    // 0x146114: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x146114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x146118: 0xa4a20420  sh          $v0, 0x420($a1)
    ctx->pc = 0x146118u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1056), (uint16_t)GPR_U32(ctx, 2));
label_14611c:
    // 0x14611c: 0x8ca20368  lw          $v0, 0x368($a1)
    ctx->pc = 0x14611cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
    // 0x146120: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x146120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x146124: 0x8ca300b4  lw          $v1, 0xB4($a1)
    ctx->pc = 0x146124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
    // 0x146128: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x146128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14612c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14612cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x146130: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x146130u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x146134: 0xc481e884  lwc1        $f1, -0x177C($a0)
    ctx->pc = 0x146134u;
    { uint32_t bits = FAST_READ32(0x41E884u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146138: 0xc4a00338  lwc1        $f0, 0x338($a1)
    ctx->pc = 0x146138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14613c: 0x8ca200b4  lw          $v0, 0xB4($a1)
    ctx->pc = 0x14613cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
    // 0x146140: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x146140u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x146144: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x146144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x146148: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x146148u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14614c: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x14614cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x146150: 0xc4a20338  lwc1        $f2, 0x338($a1)
    ctx->pc = 0x146150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x146154: 0x8ca200b4  lw          $v0, 0xB4($a1)
    ctx->pc = 0x146154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
    // 0x146158: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x146158u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x14615c: 0x3e00008  jr          $ra
    ctx->pc = 0x14615Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14615Cu;
        // 0x146160: 0xe4410044  swc1        $f1, 0x44($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14615Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146164u;
label_146164:
    // 0x146164: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x146164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x146168: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x146168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x14616c: 0x3c04dfff  lui         $a0, 0xDFFF
    ctx->pc = 0x14616cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57343 << 16));
    // 0x146170: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x146170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x146174: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x146174u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x146178: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x146178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x14617c: 0xa4a00420  sh          $zero, 0x420($a1)
    ctx->pc = 0x14617cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1056), (uint16_t)GPR_U32(ctx, 0));
    // 0x146180: 0xaca20090  sw          $v0, 0x90($a1)
    ctx->pc = 0x146180u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 2));
    // 0x146184: 0x3e00008  jr          $ra
    ctx->pc = 0x146184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146184u;
        // 0x146188: 0xa4a0041e  sh          $zero, 0x41E($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 1054), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14618Cu;
    // 0x14618c: 0x0  nop
    ctx->pc = 0x14618cu;
    // NOP
    ctx->pc = 0x146190u;
}
