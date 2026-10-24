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

// Function: func_00281F38
// Address: 0x281f38 - 0x282080
void func_00281F38_0x281f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00281F38_0x281f38");
#endif

    switch (ctx->pc) {
        case 0x281fccu: goto label_281fcc;
        case 0x281ffcu: goto label_281ffc;
        case 0x282010u: goto label_282010;
        case 0x282040u: goto label_282040;
        case 0x282054u: goto label_282054;
        default: break;
    }

    ctx->pc = 0x281f38u;

    // 0x281f38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x281f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x281f3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x281f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x281f40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x281f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x281f44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x281f44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281f48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281f4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x281f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281f50: 0x920502f6  lbu         $a1, 0x2F6($s0)
    ctx->pc = 0x281f50u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x281f54: 0x920315b0  lbu         $v1, 0x15B0($s0)
    ctx->pc = 0x281f54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x281f58: 0x2ca40006  sltiu       $a0, $a1, 0x6
    ctx->pc = 0x281f58u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x281f5c: 0x10800043  beqz        $a0, . + 4 + (0x43 << 2)
    ctx->pc = 0x281F5Cu;
    {
        const bool branch_taken_0x281f5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x281F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F5Cu;
        // 0x281f60: 0x43400b  movn        $t0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f5c) {
            ctx->pc = 0x28206Cu;
            goto label_28206c;
        }
    }
    ctx->pc = 0x281F64u;
    // 0x281f64: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x281f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x281f68: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x281f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x281f6c: 0x244286b0  addiu       $v0, $v0, -0x7950
    ctx->pc = 0x281f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936240));
    // 0x281f70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x281f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x281f74: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x281f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x281f78: 0x800008  jr          $a0
    ctx->pc = 0x281F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x281F80u: goto label_281f80;
            case 0x281FD4u: goto label_281fd4;
            case 0x282008u: goto label_282008;
            case 0x282018u: goto label_282018;
            case 0x28204Cu: goto label_28204c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281F78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x281F80u;
label_281f80:
    // 0x281f80: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x281f80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x281f84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x281F84u;
    {
        const bool branch_taken_0x281f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F84u;
        // 0x281f88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f84) {
            ctx->pc = 0x281FA8u;
            goto label_281fa8;
        }
    }
    ctx->pc = 0x281F8Cu;
    // 0x281f8c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x281f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x281f90: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x281f90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x281f94: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x281f94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x281f98: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x281f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x281f9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x281f9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281fa0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x281FA0u;
    {
        const bool branch_taken_0x281fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281FA0u;
        // 0x281fa4: 0x8c460068  lw          $a2, 0x68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281fa0) {
            ctx->pc = 0x281FF0u;
            goto label_281ff0;
        }
    }
    ctx->pc = 0x281FA8u;
label_281fa8:
    // 0x281fa8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x281fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x281fac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x281facu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x281fb0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x281fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x281fb4: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x281fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x281fb8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x281fb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281fbc: 0x8c460064  lw          $a2, 0x64($v0)
    ctx->pc = 0x281fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x281fc0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x281fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x281fc4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x281FC4u;
    SET_GPR_U32(ctx, 31, 0x281FCCu);
    ctx->pc = 0x281FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281FC4u;
    // 0x281fc8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x281FC4u, 0x281FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281FCCu;
label_281fcc:
    // 0x281fcc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x281FCCu;
    {
        const bool branch_taken_0x281fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281FCCu;
        // 0x281fd0: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281fcc) {
            ctx->pc = 0x282000u;
            goto label_282000;
        }
    }
    ctx->pc = 0x281FD4u;
label_281fd4:
    // 0x281fd4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x281fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x281fd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x281fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281fdc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x281fdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x281fe0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x281fe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x281fe4: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x281fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x281fe8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x281fe8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281fec: 0x8c460070  lw          $a2, 0x70($v0)
    ctx->pc = 0x281fecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_281ff0:
    // 0x281ff0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x281ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x281ff4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x281FF4u;
    SET_GPR_U32(ctx, 31, 0x281FFCu);
    ctx->pc = 0x281FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281FF4u;
    // 0x281ff8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x281FF4u, 0x281FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281FFCu;
label_281ffc:
    // 0x281ffc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x281ffcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_282000:
    // 0x282000: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x282000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x282004: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x282004u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_282008:
    // 0x282008: 0xc055f06  jal         func_157C18
    ctx->pc = 0x282008u;
    SET_GPR_U32(ctx, 31, 0x282010u);
    ctx->pc = 0x28200Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282008u;
    // 0x28200c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x282008u, 0x282010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282010u;
label_282010:
    // 0x282010: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x282010u;
    {
        const bool branch_taken_0x282010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282010u;
        // 0x282014: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282010) {
            ctx->pc = 0x282070u;
            goto label_282070;
        }
    }
    ctx->pc = 0x282018u;
label_282018:
    // 0x282018: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x282018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28201c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28201cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282020: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x282020u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282024: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x282024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x282028: 0x8c450074  lw          $a1, 0x74($v0)
    ctx->pc = 0x282028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x28202c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28202cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282030: 0x8c460078  lw          $a2, 0x78($v0)
    ctx->pc = 0x282030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x282034: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x282034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x282038: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x282038u;
    SET_GPR_U32(ctx, 31, 0x282040u);
    ctx->pc = 0x28203Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282038u;
    // 0x28203c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x282038u, 0x282040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282040u;
label_282040:
    // 0x282040: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x282040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x282044: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x282044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x282048: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x282048u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_28204c:
    // 0x28204c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x28204Cu;
    SET_GPR_U32(ctx, 31, 0x282054u);
    ctx->pc = 0x282050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28204Cu;
    // 0x282050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x28204Cu, 0x282054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282054u;
label_282054:
    // 0x282054: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x282054u;
    {
        const bool branch_taken_0x282054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282054) {
            ctx->pc = 0x282058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282054u;
            // 0x282058: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282070u;
            goto label_282070;
        }
    }
    ctx->pc = 0x28205Cu;
    // 0x28205c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x28205cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x282060: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x282060u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x282064: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x282064u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x282068: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x282068u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_28206c:
    // 0x28206c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28206cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_282070:
    // 0x282070: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x282070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282074: 0x3e00008  jr          $ra
    ctx->pc = 0x282074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282074u;
        // 0x282078: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28207Cu;
    // 0x28207c: 0x0  nop
    ctx->pc = 0x28207cu;
    // NOP
    ctx->pc = 0x282080u;
}
