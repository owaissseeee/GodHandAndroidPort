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

// Function: cSescr_At_ck
// Address: 0x2c8cf8 - 0x2c8e60
void cSescr_At_ck_0x2c8cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSescr_At_ck_0x2c8cf8");
#endif

    switch (ctx->pc) {
        case 0x2c8d80u: goto label_2c8d80;
        case 0x2c8dc0u: goto label_2c8dc0;
        case 0x2c8de4u: goto label_2c8de4;
        case 0x2c8e18u: goto label_2c8e18;
        default: break;
    }

    ctx->pc = 0x2c8cf8u;

    // 0x2c8cf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c8cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c8cfc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2c8cfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8d00: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2c8d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2c8d04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c8d04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8d08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c8d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c8d0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c8d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8d10: 0x26090020  addiu       $t1, $s0, 0x20
    ctx->pc = 0x2c8d10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2c8d14: 0x9203000d  lbu         $v1, 0xD($s0)
    ctx->pc = 0x2c8d14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x2c8d18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c8d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8d1c: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C8D1Cu;
    {
        const bool branch_taken_0x2c8d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C8D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D1Cu;
        // 0x2c8d20: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8d1c) {
            ctx->pc = 0x2C8D88u;
            goto label_2c8d88;
        }
    }
    ctx->pc = 0x2C8D24u;
    // 0x2c8d24: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2c8d24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c8d28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C8D28u;
    {
        const bool branch_taken_0x2c8d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D28u;
        // 0x2c8d2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8d28) {
            ctx->pc = 0x2C8D40u;
            goto label_2c8d40;
        }
    }
    ctx->pc = 0x2C8D30u;
    // 0x2c8d30: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C8D30u;
    {
        const bool branch_taken_0x2c8d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D30u;
        // 0x2c8d34: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8d30) {
            ctx->pc = 0x2C8D58u;
            goto label_2c8d58;
        }
    }
    ctx->pc = 0x2C8D38u;
    // 0x2c8d38: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2C8D38u;
    {
        const bool branch_taken_0x2c8d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D38u;
        // 0x2c8d3c: 0x9202000c  lbu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8d38) {
            ctx->pc = 0x2C8E24u;
            goto label_2c8e24;
        }
    }
    ctx->pc = 0x2C8D40u;
label_2c8d40:
    // 0x2c8d40: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2C8D40u;
    {
        const bool branch_taken_0x2c8d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C8D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D40u;
        // 0x2c8d44: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8d40) {
            ctx->pc = 0x2C8DC8u;
            goto label_2c8dc8;
        }
    }
    ctx->pc = 0x2C8D48u;
    // 0x2c8d48: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2C8D48u;
    {
        const bool branch_taken_0x2c8d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C8D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D48u;
        // 0x2c8d4c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8d48) {
            ctx->pc = 0x2C8DECu;
            goto label_2c8dec;
        }
    }
    ctx->pc = 0x2C8D50u;
    // 0x2c8d50: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2C8D50u;
    {
        const bool branch_taken_0x2c8d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D50u;
        // 0x2c8d54: 0x9202000c  lbu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8d50) {
            ctx->pc = 0x2C8E24u;
            goto label_2c8e24;
        }
    }
    ctx->pc = 0x2C8D58u;
label_2c8d58:
    // 0x2c8d58: 0x95220004  lhu         $v0, 0x4($t1)
    ctx->pc = 0x2c8d58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2c8d5c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2c8d5cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2c8d60: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2c8d60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8d64: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2c8d64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8d68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c8d68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c8d6c: 0x0  nop
    ctx->pc = 0x2c8d6cu;
    // NOP
    // 0x2c8d70: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2c8d70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2c8d74: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x2c8d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2c8d78: 0xc0b6a90  jal         func_2DAA40
    ctx->pc = 0x2C8D78u;
    SET_GPR_U32(ctx, 31, 0x2C8D80u);
    ctx->pc = 0x2C8D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8D78u;
    // 0x2c8d7c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAA40u, 0x2C8D78u, 0x2C8D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8D80u;
label_2c8d80:
    // 0x2c8d80: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2C8D80u;
    {
        const bool branch_taken_0x2c8d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D80u;
        // 0x2c8d84: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8d80) {
            ctx->pc = 0x2C8E1Cu;
            goto label_2c8e1c;
        }
    }
    ctx->pc = 0x2C8D88u;
label_2c8d88:
    // 0x2c8d88: 0x95220006  lhu         $v0, 0x6($t1)
    ctx->pc = 0x2c8d88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x2c8d8c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2c8d8cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2c8d90: 0x95230004  lhu         $v1, 0x4($t1)
    ctx->pc = 0x2c8d90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2c8d94: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2c8d94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8d98: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2c8d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c8d9c: 0x0  nop
    ctx->pc = 0x2c8d9cu;
    // NOP
    // 0x2c8da0: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x2c8da0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2c8da4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2c8da4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8da8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2c8da8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c8dac: 0x0  nop
    ctx->pc = 0x2c8dacu;
    // NOP
    // 0x2c8db0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2c8db0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2c8db4: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x2c8db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2c8db8: 0xc0b6b3a  jal         func_2DACE8
    ctx->pc = 0x2C8DB8u;
    SET_GPR_U32(ctx, 31, 0x2C8DC0u);
    ctx->pc = 0x2C8DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8DB8u;
    // 0x2c8dbc: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DACE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DACE8u, 0x2C8DB8u, 0x2C8DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8DC0u;
label_2c8dc0:
    // 0x2c8dc0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2C8DC0u;
    {
        const bool branch_taken_0x2c8dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8DC0u;
        // 0x2c8dc4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8dc0) {
            ctx->pc = 0x2C8E1Cu;
            goto label_2c8e1c;
        }
    }
    ctx->pc = 0x2C8DC8u;
label_2c8dc8:
    // 0x2c8dc8: 0x95220004  lhu         $v0, 0x4($t1)
    ctx->pc = 0x2c8dc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2c8dcc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2c8dccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2c8dd0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c8dd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c8dd4: 0x0  nop
    ctx->pc = 0x2c8dd4u;
    // NOP
    // 0x2c8dd8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2c8dd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2c8ddc: 0xc0b6bda  jal         func_2DAF68
    ctx->pc = 0x2C8DDCu;
    SET_GPR_U32(ctx, 31, 0x2C8DE4u);
    ctx->pc = 0x2C8DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8DDCu;
    // 0x2c8de0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAF68u, 0x2C8DDCu, 0x2C8DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8DE4u;
label_2c8de4:
    // 0x2c8de4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2C8DE4u;
    {
        const bool branch_taken_0x2c8de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8DE4u;
        // 0x2c8de8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8de4) {
            ctx->pc = 0x2C8E1Cu;
            goto label_2c8e1c;
        }
    }
    ctx->pc = 0x2C8DECu;
label_2c8dec:
    // 0x2c8dec: 0x95220006  lhu         $v0, 0x6($t1)
    ctx->pc = 0x2c8decu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x2c8df0: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2c8df0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2c8df4: 0x95230004  lhu         $v1, 0x4($t1)
    ctx->pc = 0x2c8df4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2c8df8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2c8df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c8dfc: 0x0  nop
    ctx->pc = 0x2c8dfcu;
    // NOP
    // 0x2c8e00: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x2c8e00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2c8e04: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2c8e04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c8e08: 0x0  nop
    ctx->pc = 0x2c8e08u;
    // NOP
    // 0x2c8e0c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2c8e0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2c8e10: 0xc0b6c02  jal         func_2DB008
    ctx->pc = 0x2C8E10u;
    SET_GPR_U32(ctx, 31, 0x2C8E18u);
    ctx->pc = 0x2C8E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8E10u;
    // 0x2c8e14: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB008u, 0x2C8E10u, 0x2C8E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8E18u;
label_2c8e18:
    // 0x2c8e18: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c8e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8e1c:
    // 0x2c8e1c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2c8e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8e20: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x2c8e20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
label_2c8e24:
    // 0x2c8e24: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c8e24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c8e28: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2c8e28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c8e2c: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x2c8e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x2c8e30: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x2c8e30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c8e34: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8E34u;
    {
        const bool branch_taken_0x2c8e34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8E34u;
        // 0x2c8e38: 0xa6030010  sh          $v1, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8e34) {
            ctx->pc = 0x2C8E44u;
            goto label_2c8e44;
        }
    }
    ctx->pc = 0x2C8E3Cu;
    // 0x2c8e3c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2c8e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2c8e40: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x2c8e40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
label_2c8e44:
    // 0x2c8e44: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2c8e44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c8e48: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2c8e48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8e4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c8e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8e50: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8E50u;
        // 0x2c8e54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8E58u;
    // 0x2c8e58: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x2c8e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2c8e5c: 0x0  nop
    ctx->pc = 0x2c8e5cu;
    // NOP
    ctx->pc = 0x2c8e60u;
}
