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

// Function: func_00190D28
// Address: 0x190d28 - 0x1915b8
void func_00190D28_0x190d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00190D28_0x190d28");
#endif

    switch (ctx->pc) {
        case 0x190db4u: goto label_190db4;
        case 0x190e00u: goto label_190e00;
        case 0x190e18u: goto label_190e18;
        case 0x190e30u: goto label_190e30;
        case 0x190e44u: goto label_190e44;
        case 0x190e54u: goto label_190e54;
        case 0x190e68u: goto label_190e68;
        case 0x190ebcu: goto label_190ebc;
        case 0x190ef0u: goto label_190ef0;
        case 0x190f18u: goto label_190f18;
        case 0x190f2cu: goto label_190f2c;
        case 0x190f48u: goto label_190f48;
        case 0x191064u: goto label_191064;
        case 0x191070u: goto label_191070;
        case 0x19107cu: goto label_19107c;
        case 0x19108cu: goto label_19108c;
        case 0x191098u: goto label_191098;
        case 0x1910a4u: goto label_1910a4;
        case 0x1910c0u: goto label_1910c0;
        case 0x1911ecu: goto label_1911ec;
        case 0x1911f8u: goto label_1911f8;
        case 0x191204u: goto label_191204;
        case 0x191214u: goto label_191214;
        case 0x191220u: goto label_191220;
        case 0x19122cu: goto label_19122c;
        case 0x191248u: goto label_191248;
        case 0x191274u: goto label_191274;
        case 0x19129cu: goto label_19129c;
        case 0x1912d0u: goto label_1912d0;
        case 0x191328u: goto label_191328;
        case 0x19137cu: goto label_19137c;
        case 0x191390u: goto label_191390;
        case 0x1913a4u: goto label_1913a4;
        case 0x1913b4u: goto label_1913b4;
        case 0x191430u: goto label_191430;
        case 0x1914a8u: goto label_1914a8;
        case 0x1914c4u: goto label_1914c4;
        case 0x191518u: goto label_191518;
        default: break;
    }

    ctx->pc = 0x190d28u;

    // 0x190d28: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x190d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x190d2c: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x190d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x190d30: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x190d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x190d34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x190d34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190d38: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x190d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x190d3c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x190d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x190d40: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x190d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x190d44: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x190d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x190d48: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x190d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x190d4c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x190d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x190d50: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x190d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x190d54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x190d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x190d58: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x190d58u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x190d5c: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x190d5cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x190d60: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x190d60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x190d64: 0x924302f5  lbu         $v1, 0x2F5($s2)
    ctx->pc = 0x190d64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 757)));
    // 0x190d68: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x190d68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x190d6c: 0x10400202  beqz        $v0, . + 4 + (0x202 << 2)
    ctx->pc = 0x190D6Cu;
    {
        const bool branch_taken_0x190d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D6Cu;
        // 0x190d70: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d6c) {
            ctx->pc = 0x191578u;
            goto label_191578;
        }
    }
    ctx->pc = 0x190D74u;
    // 0x190d74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x190d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x190d78: 0x24423f40  addiu       $v0, $v0, 0x3F40
    ctx->pc = 0x190d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16192));
    // 0x190d7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x190d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x190d80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x190d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x190d84: 0x800008  jr          $a0
    ctx->pc = 0x190D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190D8Cu: goto label_190d8c;
            case 0x1912E0u: goto label_1912e0;
            case 0x191304u: goto label_191304;
            case 0x1914DCu: goto label_1914dc;
            case 0x191520u: goto label_191520;
            case 0x191564u: goto label_191564;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190D84u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x190D8Cu;
label_190d8c:
    // 0x190d8c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x190d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x190d90: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x190d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x190d94: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x190d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x190d98: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x190d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x190d9c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x190d9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190da0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x190da0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190da4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x190da4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190da8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x190da8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190dac: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x190DACu;
    SET_GPR_U32(ctx, 31, 0x190DB4u);
    ctx->pc = 0x190DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190DACu;
    // 0x190db0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x190DACu, 0x190DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190DB4u;
label_190db4:
    // 0x190db4: 0x82430f90  lb          $v1, 0xF90($s2)
    ctx->pc = 0x190db4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3984)));
    // 0x190db8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x190db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190dbc: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x190DBCu;
    {
        const bool branch_taken_0x190dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x190DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DBCu;
        // 0x190dc0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x190dbc) {
            ctx->pc = 0x190E08u;
            goto label_190e08;
        }
    }
    ctx->pc = 0x190DC4u;
    // 0x190dc4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x190DC4u;
    {
        const bool branch_taken_0x190dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DC4u;
        // 0x190dc8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190dc4) {
            ctx->pc = 0x190DDCu;
            goto label_190ddc;
        }
    }
    ctx->pc = 0x190DCCu;
    // 0x190dcc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x190DCCu;
    {
        const bool branch_taken_0x190dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x190DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DCCu;
        // 0x190dd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190dcc) {
            ctx->pc = 0x190DF4u;
            goto label_190df4;
        }
    }
    ctx->pc = 0x190DD4u;
    // 0x190dd4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x190DD4u;
    {
        const bool branch_taken_0x190dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DD4u;
        // 0x190dd8: 0x82450f90  lb          $a1, 0xF90($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3984)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190dd4) {
            ctx->pc = 0x190E4Cu;
            goto label_190e4c;
        }
    }
    ctx->pc = 0x190DDCu;
label_190ddc:
    // 0x190ddc: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x190DDCu;
    {
        const bool branch_taken_0x190ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x190DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DDCu;
        // 0x190de0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ddc) {
            ctx->pc = 0x190E20u;
            goto label_190e20;
        }
    }
    ctx->pc = 0x190DE4u;
    // 0x190de4: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x190DE4u;
    {
        const bool branch_taken_0x190de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x190DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DE4u;
        // 0x190de8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190de4) {
            ctx->pc = 0x190E38u;
            goto label_190e38;
        }
    }
    ctx->pc = 0x190DECu;
    // 0x190dec: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x190DECu;
    {
        const bool branch_taken_0x190dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DECu;
        // 0x190df0: 0x82450f90  lb          $a1, 0xF90($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3984)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190dec) {
            ctx->pc = 0x190E4Cu;
            goto label_190e4c;
        }
    }
    ctx->pc = 0x190DF4u;
label_190df4:
    // 0x190df4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x190df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190df8: 0xc064634  jal         func_1918D0
    ctx->pc = 0x190DF8u;
    SET_GPR_U32(ctx, 31, 0x190E00u);
    ctx->pc = 0x190DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190DF8u;
    // 0x190dfc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1918D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1918D0u, 0x190DF8u, 0x190E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190E00u;
label_190e00:
    // 0x190e00: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x190E00u;
    {
        const bool branch_taken_0x190e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E00u;
        // 0x190e04: 0x82450f90  lb          $a1, 0xF90($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3984)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e00) {
            ctx->pc = 0x190E48u;
            goto label_190e48;
        }
    }
    ctx->pc = 0x190E08u;
label_190e08:
    // 0x190e08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x190e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190e0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x190e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190e10: 0xc064634  jal         func_1918D0
    ctx->pc = 0x190E10u;
    SET_GPR_U32(ctx, 31, 0x190E18u);
    ctx->pc = 0x190E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190E10u;
    // 0x190e14: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1918D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1918D0u, 0x190E10u, 0x190E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190E18u;
label_190e18:
    // 0x190e18: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x190E18u;
    {
        const bool branch_taken_0x190e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E18u;
        // 0x190e1c: 0x82450f90  lb          $a1, 0xF90($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3984)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e18) {
            ctx->pc = 0x190E48u;
            goto label_190e48;
        }
    }
    ctx->pc = 0x190E20u;
label_190e20:
    // 0x190e20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x190e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190e24: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x190e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x190e28: 0xc064634  jal         func_1918D0
    ctx->pc = 0x190E28u;
    SET_GPR_U32(ctx, 31, 0x190E30u);
    ctx->pc = 0x190E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190E28u;
    // 0x190e2c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1918D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1918D0u, 0x190E28u, 0x190E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190E30u;
label_190e30:
    // 0x190e30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x190E30u;
    {
        const bool branch_taken_0x190e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E30u;
        // 0x190e34: 0x82450f90  lb          $a1, 0xF90($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3984)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e30) {
            ctx->pc = 0x190E48u;
            goto label_190e48;
        }
    }
    ctx->pc = 0x190E38u;
label_190e38:
    // 0x190e38: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x190e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x190e3c: 0xc064634  jal         func_1918D0
    ctx->pc = 0x190E3Cu;
    SET_GPR_U32(ctx, 31, 0x190E44u);
    ctx->pc = 0x190E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190E3Cu;
    // 0x190e40: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1918D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1918D0u, 0x190E3Cu, 0x190E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190E44u;
label_190e44:
    // 0x190e44: 0x82450f90  lb          $a1, 0xF90($s2)
    ctx->pc = 0x190e44u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3984)));
label_190e48:
    // 0x190e48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x190e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_190e4c:
    // 0x190e4c: 0xc064618  jal         func_191860
    ctx->pc = 0x190E4Cu;
    SET_GPR_U32(ctx, 31, 0x190E54u);
    ctx->pc = 0x190E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190E4Cu;
    // 0x190e50: 0x26550f80  addiu       $s5, $s2, 0xF80 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 3968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191860u, 0x190E4Cu, 0x190E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190E54u;
label_190e54:
    // 0x190e54: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x190e54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190e58: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x190e58u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x190e5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x190e5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190e60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x190e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190e64: 0x0  nop
    ctx->pc = 0x190e64u;
    // NOP
label_190e68:
    // 0x190e68: 0x61142  srl         $v0, $a2, 5
    ctx->pc = 0x190e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x190e6c: 0x30c4001f  andi        $a0, $a2, 0x1F
    ctx->pc = 0x190e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x190e70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x190e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x190e74: 0x892006  srlv        $a0, $t1, $a0
    ctx->pc = 0x190e74u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x190e78: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x190e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x190e7c: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x190e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x190e80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x190e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190e84: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x190e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x190e88: 0x2cc20004  sltiu       $v0, $a2, 0x4
    ctx->pc = 0x190e88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x190e8c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x190e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x190e90: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x190E90u;
    {
        const bool branch_taken_0x190e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x190E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E90u;
        // 0x190e94: 0xa3380b  movn        $a3, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e90) {
            ctx->pc = 0x190E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190e68;
        }
    }
    ctx->pc = 0x190E98u;
    // 0x190e98: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x190E98u;
    {
        const bool branch_taken_0x190e98 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x190e98) {
            ctx->pc = 0x190EACu;
            goto label_190eac;
        }
    }
    ctx->pc = 0x190EA0u;
    // 0x190ea0: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x190ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x190ea4: 0x100001b2  b           . + 4 + (0x1B2 << 2)
    ctx->pc = 0x190EA4u;
    {
        const bool branch_taken_0x190ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190EA4u;
        // 0x190ea8: 0xa24002f4  sb          $zero, 0x2F4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ea4) {
            ctx->pc = 0x191570u;
            goto label_191570;
        }
    }
    ctx->pc = 0x190EACu;
label_190eac:
    // 0x190eac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x190eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x190eb0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x190eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x190eb4: 0xc06de42  jal         func_1B7908
    ctx->pc = 0x190EB4u;
    SET_GPR_U32(ctx, 31, 0x190EBCu);
    ctx->pc = 0x190EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190EB4u;
    // 0x190eb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x190EB4u, 0x190EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190EBCu;
label_190ebc:
    // 0x190ebc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x190ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x190ec0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x190ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x190ec4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x190ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x190ec8: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x190ec8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x190ecc: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x190eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x190ed0: 0x264205c0  addiu       $v0, $s2, 0x5C0
    ctx->pc = 0x190ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
    // 0x190ed4: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x190ed4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x190ed8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x190ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x190edc: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x190edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x190ee0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x190ee0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x190ee4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x190ee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x190ee8: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x190EE8u;
    SET_GPR_U32(ctx, 31, 0x190EF0u);
    ctx->pc = 0x190EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190EE8u;
    // 0x190eec: 0x3c1e0042  lui         $fp, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)66 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x190EE8u, 0x190EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190EF0u;
label_190ef0:
    // 0x190ef0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x190ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190ef4: 0x27d64010  addiu       $s6, $fp, 0x4010
    ctx->pc = 0x190ef4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 16400));
    // 0x190ef8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x190ef8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x190efc: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x190efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x190f00: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x190f00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x190f04: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x190f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x190f08: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x190f08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190f0c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x190f0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x190f10: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x190F10u;
    SET_GPR_U32(ctx, 31, 0x190F18u);
    ctx->pc = 0x190F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190F10u;
    // 0x190f14: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x190F10u, 0x190F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190F18u;
label_190f18:
    // 0x190f18: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x190f18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x190f1c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x190f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190f20: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x190f20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x190f24: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x190F24u;
    SET_GPR_U32(ctx, 31, 0x190F2Cu);
    ctx->pc = 0x190F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190F24u;
    // 0x190f28: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x190F24u, 0x190F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190F2Cu;
label_190f2c:
    // 0x190f2c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x190f2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x190f30: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x190f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190f34: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x190f34u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x190f38: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x190f38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x190f3c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x190f3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x190f40: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x190f40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x190f44: 0x131942  srl         $v1, $s3, 5
    ctx->pc = 0x190f44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 5));
label_190f48:
    // 0x190f48: 0x3265001f  andi        $a1, $s3, 0x1F
    ctx->pc = 0x190f48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)31);
    // 0x190f4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x190f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x190f50: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x190f50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x190f54: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x190f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x190f58: 0xa42006  srlv        $a0, $a0, $a1
    ctx->pc = 0x190f58u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x190f5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x190f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x190f60: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x190f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x190f64: 0x54400058  bnel        $v0, $zero, . + 4 + (0x58 << 2)
    ctx->pc = 0x190F64u;
    {
        const bool branch_taken_0x190f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190f64) {
            ctx->pc = 0x190F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190F64u;
            // 0x190f68: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1910C8u;
            goto label_1910c8;
        }
    }
    ctx->pc = 0x190F6Cu;
    // 0x190f6c: 0x92c20012  lbu         $v0, 0x12($s6)
    ctx->pc = 0x190f6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 18)));
    // 0x190f70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x190f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190f74: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x190f74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x190f78: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x190f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x190f7c: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x190F7Cu;
    {
        const bool branch_taken_0x190f7c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x190F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F7Cu;
        // 0x190f80: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190f7c) {
            ctx->pc = 0x190F8Cu;
            goto label_190f8c;
        }
    }
    ctx->pc = 0x190F84u;
    // 0x190f84: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x190f84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x190f88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x190f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_190f8c:
    // 0x190f8c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x190f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x190f90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x190F90u;
    {
        const bool branch_taken_0x190f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F90u;
        // 0x190f94: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190f90) {
            ctx->pc = 0x190FA8u;
            goto label_190fa8;
        }
    }
    ctx->pc = 0x190F98u;
    // 0x190f98: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x190f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x190f9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x190f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190fa0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x190FA0u;
    {
        const bool branch_taken_0x190fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FA0u;
        // 0x190fa4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190fa0) {
            ctx->pc = 0x190FACu;
            goto label_190fac;
        }
    }
    ctx->pc = 0x190FA8u;
label_190fa8:
    // 0x190fa8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x190fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190fac:
    // 0x190fac: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x190facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x190fb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x190fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190fb4: 0x92c30012  lbu         $v1, 0x12($s6)
    ctx->pc = 0x190fb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 18)));
    // 0x190fb8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x190fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x190fbc: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x190fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x190fc0: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x190fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x190fc4: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x190fc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x190fc8: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x190FC8u;
    {
        const bool branch_taken_0x190fc8 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x190FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FC8u;
        // 0x190fcc: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190fc8) {
            ctx->pc = 0x190FD8u;
            goto label_190fd8;
        }
    }
    ctx->pc = 0x190FD0u;
    // 0x190fd0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x190fd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x190fd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x190fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_190fd8:
    // 0x190fd8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x190fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x190fdc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x190FDCu;
    {
        const bool branch_taken_0x190fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FDCu;
        // 0x190fe0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190fdc) {
            ctx->pc = 0x190FF4u;
            goto label_190ff4;
        }
    }
    ctx->pc = 0x190FE4u;
    // 0x190fe4: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x190fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x190fe8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x190fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190fec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x190FECu;
    {
        const bool branch_taken_0x190fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FECu;
        // 0x190ff0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190fec) {
            ctx->pc = 0x190FF8u;
            goto label_190ff8;
        }
    }
    ctx->pc = 0x190FF4u;
label_190ff4:
    // 0x190ff4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x190ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190ff8:
    // 0x190ff8: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x190ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x190ffc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x190ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191000: 0x92c30012  lbu         $v1, 0x12($s6)
    ctx->pc = 0x191000u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 18)));
    // 0x191004: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x191004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x191008: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x191008u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x19100c: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x19100cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x191010: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x191010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x191014: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x191014u;
    {
        const bool branch_taken_0x191014 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x191018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191014u;
        // 0x191018: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191014) {
            ctx->pc = 0x191024u;
            goto label_191024;
        }
    }
    ctx->pc = 0x19101Cu;
    // 0x19101c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x19101cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x191020: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x191020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191024:
    // 0x191024: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x191024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x191028: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x191028u;
    {
        const bool branch_taken_0x191028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191028u;
        // 0x19102c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191028) {
            ctx->pc = 0x191040u;
            goto label_191040;
        }
    }
    ctx->pc = 0x191030u;
    // 0x191030: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x191030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x191034: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191038: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x191038u;
    {
        const bool branch_taken_0x191038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191038u;
        // 0x19103c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191038) {
            ctx->pc = 0x191044u;
            goto label_191044;
        }
    }
    ctx->pc = 0x191040u;
label_191040:
    // 0x191040: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x191040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191044:
    // 0x191044: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x191044u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x191048: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x191048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x19104c: 0x901018  mult        $v0, $a0, $s0
    ctx->pc = 0x19104cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x191050: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x191050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191054: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x191054u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x191058: 0x26100620  addiu       $s0, $s0, 0x620
    ctx->pc = 0x191058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x19105c: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x19105Cu;
    SET_GPR_U32(ctx, 31, 0x191064u);
    ctx->pc = 0x191060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19105Cu;
    // 0x191060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x19105Cu, 0x191064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191064u;
label_191064:
    // 0x191064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191068: 0xc05ce66  jal         func_173998
    ctx->pc = 0x191068u;
    SET_GPR_U32(ctx, 31, 0x191070u);
    ctx->pc = 0x19106Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191068u;
    // 0x19106c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x191068u, 0x191070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191070u;
label_191070:
    // 0x191070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191074: 0xc051f18  jal         func_147C60
    ctx->pc = 0x191074u;
    SET_GPR_U32(ctx, 31, 0x19107Cu);
    ctx->pc = 0x191078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191074u;
    // 0x191078: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x191074u, 0x19107Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19107Cu;
label_19107c:
    // 0x19107c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19107cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191080: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x191080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191084: 0xc051f22  jal         func_147C88
    ctx->pc = 0x191084u;
    SET_GPR_U32(ctx, 31, 0x19108Cu);
    ctx->pc = 0x191088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191084u;
    // 0x191088: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x191084u, 0x19108Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19108Cu;
label_19108c:
    // 0x19108c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19108cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191090: 0xc05ce42  jal         func_173908
    ctx->pc = 0x191090u;
    SET_GPR_U32(ctx, 31, 0x191098u);
    ctx->pc = 0x191094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191090u;
    // 0x191094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x191090u, 0x191098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191098u;
label_191098:
    // 0x191098: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x191098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19109c: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x19109Cu;
    SET_GPR_U32(ctx, 31, 0x1910A4u);
    ctx->pc = 0x1910A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19109Cu;
    // 0x1910a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x19109Cu, 0x1910A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1910A4u;
label_1910a4:
    // 0x1910a4: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x1910a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1910a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1910a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1910ac: 0xe6950004  swc1        $f21, 0x4($s4)
    ctx->pc = 0x1910acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x1910b0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1910b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1910b4: 0xe6950008  swc1        $f21, 0x8($s4)
    ctx->pc = 0x1910b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x1910b8: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x1910B8u;
    SET_GPR_U32(ctx, 31, 0x1910C0u);
    ctx->pc = 0x1910BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1910B8u;
    // 0x1910bc: 0xe695000c  swc1        $f21, 0xC($s4) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x1910B8u, 0x1910C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1910C0u;
label_1910c0:
    // 0x1910c0: 0xe6160058  swc1        $f22, 0x58($s0)
    ctx->pc = 0x1910c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1910c4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1910c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1910c8:
    // 0x1910c8: 0x2e620004  sltiu       $v0, $s3, 0x4
    ctx->pc = 0x1910c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1910cc: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
    ctx->pc = 0x1910CCu;
    {
        const bool branch_taken_0x1910cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1910D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910CCu;
        // 0x1910d0: 0x131942  srl         $v1, $s3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1910cc) {
            ctx->pc = 0x190F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190f48;
        }
    }
    ctx->pc = 0x1910D4u;
    // 0x1910d4: 0x27c24010  addiu       $v0, $fp, 0x4010
    ctx->pc = 0x1910d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16400));
    // 0x1910d8: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x1910d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1910dc: 0x90440008  lbu         $a0, 0x8($v0)
    ctx->pc = 0x1910dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1910e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1910e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1910e4: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x1910e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1910e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1910E8u;
    {
        const bool branch_taken_0x1910e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1910ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910E8u;
        // 0x1910ec: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1910e8) {
            ctx->pc = 0x1910F8u;
            goto label_1910f8;
        }
    }
    ctx->pc = 0x1910F0u;
    // 0x1910f0: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1910f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1910f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1910f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1910f8:
    // 0x1910f8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1910f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1910fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1910FCu;
    {
        const bool branch_taken_0x1910fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910FCu;
        // 0x191100: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1910fc) {
            ctx->pc = 0x191114u;
            goto label_191114;
        }
    }
    ctx->pc = 0x191104u;
    // 0x191104: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x191104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x191108: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19110c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19110Cu;
    {
        const bool branch_taken_0x19110c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19110Cu;
        // 0x191110: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19110c) {
            ctx->pc = 0x191118u;
            goto label_191118;
        }
    }
    ctx->pc = 0x191114u;
label_191114:
    // 0x191114: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x191114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191118:
    // 0x191118: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x191118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x19111c: 0x27c34010  addiu       $v1, $fp, 0x4010
    ctx->pc = 0x19111cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 16400));
    // 0x191120: 0x90650008  lbu         $a1, 0x8($v1)
    ctx->pc = 0x191120u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x191124: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x191124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191128: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x191128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x19112c: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x19112cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x191130: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x191130u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x191134: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x191134u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x191138: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x191138u;
    {
        const bool branch_taken_0x191138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191138u;
        // 0x19113c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191138) {
            ctx->pc = 0x191148u;
            goto label_191148;
        }
    }
    ctx->pc = 0x191140u;
    // 0x191140: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x191140u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x191144: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x191144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191148:
    // 0x191148: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x191148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x19114c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19114Cu;
    {
        const bool branch_taken_0x19114c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19114Cu;
        // 0x191150: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19114c) {
            ctx->pc = 0x191164u;
            goto label_191164;
        }
    }
    ctx->pc = 0x191154u;
    // 0x191154: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x191154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x191158: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19115c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19115Cu;
    {
        const bool branch_taken_0x19115c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19115Cu;
        // 0x191160: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19115c) {
            ctx->pc = 0x191168u;
            goto label_191168;
        }
    }
    ctx->pc = 0x191164u;
label_191164:
    // 0x191164: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x191164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191168:
    // 0x191168: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x191168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x19116c: 0x27c34010  addiu       $v1, $fp, 0x4010
    ctx->pc = 0x19116cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 16400));
    // 0x191170: 0x90650008  lbu         $a1, 0x8($v1)
    ctx->pc = 0x191170u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x191174: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x191174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191178: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x191178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x19117c: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x19117cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x191180: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x191180u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x191184: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x191184u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x191188: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x191188u;
    {
        const bool branch_taken_0x191188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191188u;
        // 0x19118c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191188) {
            ctx->pc = 0x191198u;
            goto label_191198;
        }
    }
    ctx->pc = 0x191190u;
    // 0x191190: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x191190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x191194: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x191194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191198:
    // 0x191198: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x191198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x19119c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19119Cu;
    {
        const bool branch_taken_0x19119c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1911A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19119Cu;
        // 0x1911a0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19119c) {
            ctx->pc = 0x1911B4u;
            goto label_1911b4;
        }
    }
    ctx->pc = 0x1911A4u;
    // 0x1911a4: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1911a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1911a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1911a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1911ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1911ACu;
    {
        const bool branch_taken_0x1911ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1911B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911ACu;
        // 0x1911b0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1911ac) {
            ctx->pc = 0x1911B8u;
            goto label_1911b8;
        }
    }
    ctx->pc = 0x1911B4u;
label_1911b4:
    // 0x1911b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1911b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1911b8:
    // 0x1911b8: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x1911b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1911bc: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x1911bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1911c0: 0xb01018  mult        $v0, $a1, $s0
    ctx->pc = 0x1911c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1911c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1911c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1911c8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1911c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1911cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1911ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1911d0: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x1911d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x1911d4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1911d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1911d8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1911d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1911dc: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x1911dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1911e0: 0x26100620  addiu       $s0, $s0, 0x620
    ctx->pc = 0x1911e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x1911e4: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1911E4u;
    SET_GPR_U32(ctx, 31, 0x1911ECu);
    ctx->pc = 0x1911E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1911E4u;
    // 0x1911e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1911E4u, 0x1911ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1911ECu;
label_1911ec:
    // 0x1911ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1911ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1911f0: 0xc05ce66  jal         func_173998
    ctx->pc = 0x1911F0u;
    SET_GPR_U32(ctx, 31, 0x1911F8u);
    ctx->pc = 0x1911F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1911F0u;
    // 0x1911f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x1911F0u, 0x1911F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1911F8u;
label_1911f8:
    // 0x1911f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1911f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1911fc: 0xc051f18  jal         func_147C60
    ctx->pc = 0x1911FCu;
    SET_GPR_U32(ctx, 31, 0x191204u);
    ctx->pc = 0x191200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1911FCu;
    // 0x191200: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1911FCu, 0x191204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191204u;
label_191204:
    // 0x191204: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x191204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191208: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x191208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19120c: 0xc051f22  jal         func_147C88
    ctx->pc = 0x19120Cu;
    SET_GPR_U32(ctx, 31, 0x191214u);
    ctx->pc = 0x191210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19120Cu;
    // 0x191210: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x19120Cu, 0x191214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191214u;
label_191214:
    // 0x191214: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x191214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191218: 0xc05ce42  jal         func_173908
    ctx->pc = 0x191218u;
    SET_GPR_U32(ctx, 31, 0x191220u);
    ctx->pc = 0x19121Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191218u;
    // 0x19121c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x191218u, 0x191220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191220u;
label_191220:
    // 0x191220: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x191220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x191224: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x191224u;
    SET_GPR_U32(ctx, 31, 0x19122Cu);
    ctx->pc = 0x191228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191224u;
    // 0x191228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x191224u, 0x19122Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19122Cu;
label_19122c:
    // 0x19122c: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x19122cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x191230: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x191230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191234: 0xe6f50004  swc1        $f21, 0x4($s7)
    ctx->pc = 0x191234u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x191238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19123c: 0xe6f50008  swc1        $f21, 0x8($s7)
    ctx->pc = 0x19123cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x191240: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x191240u;
    SET_GPR_U32(ctx, 31, 0x191248u);
    ctx->pc = 0x191244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191240u;
    // 0x191244: 0xe6f5000c  swc1        $f21, 0xC($s7) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x191240u, 0x191248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191248u;
label_191248:
    // 0x191248: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x191248u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x19124c: 0x8e4505ec  lw          $a1, 0x5EC($s2)
    ctx->pc = 0x19124cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1516)));
    // 0x191250: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x191250u;
    {
        const bool branch_taken_0x191250 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x191254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191250u;
        // 0x191254: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191250) {
            ctx->pc = 0x191278u;
            goto label_191278;
        }
    }
    ctx->pc = 0x191258u;
    // 0x191258: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x191258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19125c: 0x8e4405f0  lw          $a0, 0x5F0($s2)
    ctx->pc = 0x19125cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1520)));
    // 0x191260: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x191260u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x191264: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x191264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191268: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x191268u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19126c: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x19126Cu;
    SET_GPR_U32(ctx, 31, 0x191274u);
    ctx->pc = 0x191270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19126Cu;
    // 0x191270: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x19126Cu, 0x191274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191274u;
label_191274:
    // 0x191274: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x191274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_191278:
    // 0x191278: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x191278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19127c: 0x2464ee00  addiu       $a0, $v1, -0x1200
    ctx->pc = 0x19127cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962688));
    // 0x191280: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x191280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x191284: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x191284u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191288: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x191288u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19128c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19128cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191290: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x191290u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191294: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x191294u;
    SET_GPR_U32(ctx, 31, 0x19129Cu);
    ctx->pc = 0x191298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191294u;
    // 0x191298: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x191294u, 0x19129Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19129Cu;
label_19129c:
    // 0x19129c: 0xae4005c0  sw          $zero, 0x5C0($s2)
    ctx->pc = 0x19129cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1472), GPR_U32(ctx, 0));
    // 0x1912a0: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1912a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1912a4: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x1912a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x1912a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1912a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1912ac: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1912acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1912b0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1912b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1912b4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1912b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1912b8: 0xa6420f84  sh          $v0, 0xF84($s2)
    ctx->pc = 0x1912b8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3972), (uint16_t)GPR_U32(ctx, 2));
    // 0x1912bc: 0x8e440610  lw          $a0, 0x610($s2)
    ctx->pc = 0x1912bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1552)));
    // 0x1912c0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1912C0u;
    {
        const bool branch_taken_0x1912c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1912C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912C0u;
        // 0x1912c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1912c0) {
            ctx->pc = 0x1912D4u;
            goto label_1912d4;
        }
    }
    ctx->pc = 0x1912C8u;
    // 0x1912c8: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1912C8u;
    SET_GPR_U32(ctx, 31, 0x1912D0u);
    ctx->pc = 0x1912CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1912C8u;
    // 0x1912cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1912C8u, 0x1912D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1912D0u;
label_1912d0:
    // 0x1912d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1912d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1912d4:
    // 0x1912d4: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x1912d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1912d8: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x1912d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1912dc: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x1912dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_1912e0:
    // 0x1912e0: 0x96420f84  lhu         $v0, 0xF84($s2)
    ctx->pc = 0x1912e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 3972)));
    // 0x1912e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1912e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1912e8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1912e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1912ec: 0x1c6000a2  bgtz        $v1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x1912ECu;
    {
        const bool branch_taken_0x1912ec = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1912F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912ECu;
        // 0x1912f0: 0xa6420f84  sh          $v0, 0xF84($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 3972), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1912ec) {
            ctx->pc = 0x191578u;
            goto label_191578;
        }
    }
    ctx->pc = 0x1912F4u;
    // 0x1912f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1912f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1912f8: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x1912f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1912fc: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x1912FCu;
    {
        const bool branch_taken_0x1912fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912FCu;
        // 0x191300: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1912fc) {
            ctx->pc = 0x191574u;
            goto label_191574;
        }
    }
    ctx->pc = 0x191304u;
label_191304:
    // 0x191304: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x191304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191308: 0x26550f80  addiu       $s5, $s2, 0xF80
    ctx->pc = 0x191308u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 3968));
    // 0x19130c: 0x3c1e0042  lui         $fp, 0x42
    ctx->pc = 0x19130cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)66 << 16));
    // 0x191310: 0x3c168000  lui         $s6, 0x8000
    ctx->pc = 0x191310u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)32768 << 16));
    // 0x191314: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x191314u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191318: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x191318u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19131c: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x19131cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x191320: 0x101142  srl         $v0, $s0, 5
    ctx->pc = 0x191320u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x191324: 0x0  nop
    ctx->pc = 0x191324u;
    // NOP
label_191328:
    // 0x191328: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x191328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x19132c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19132cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x191330: 0x962006  srlv        $a0, $s6, $a0
    ctx->pc = 0x191330u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 22), GPR_U32(ctx, 4) & 0x1F));
    // 0x191334: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x191334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x191338: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x191338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19133c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x19133cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x191340: 0x5460001d  bnel        $v1, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x191340u;
    {
        const bool branch_taken_0x191340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x191340) {
            ctx->pc = 0x191344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191340u;
            // 0x191344: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1913B8u;
            goto label_1913b8;
        }
    }
    ctx->pc = 0x191348u;
    // 0x191348: 0x5214000e  beql        $s0, $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x191348u;
    {
        const bool branch_taken_0x191348 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        if (branch_taken_0x191348) {
            ctx->pc = 0x19134Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191348u;
            // 0x19134c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191384u;
            goto label_191384;
        }
    }
    ctx->pc = 0x191350u;
    // 0x191350: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x191350u;
    {
        const bool branch_taken_0x191350 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x191354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191350u;
        // 0x191354: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191350) {
            ctx->pc = 0x191370u;
            goto label_191370;
        }
    }
    ctx->pc = 0x191358u;
    // 0x191358: 0x1213000f  beq         $s0, $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x191358u;
    {
        const bool branch_taken_0x191358 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x191358) {
            ctx->pc = 0x191398u;
            goto label_191398;
        }
    }
    ctx->pc = 0x191360u;
    // 0x191360: 0x12110012  beq         $s0, $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x191360u;
    {
        const bool branch_taken_0x191360 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x191364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191360u;
        // 0x191364: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191360) {
            ctx->pc = 0x1913ACu;
            goto label_1913ac;
        }
    }
    ctx->pc = 0x191368u;
    // 0x191368: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x191368u;
    {
        const bool branch_taken_0x191368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191368u;
        // 0x19136c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191368) {
            ctx->pc = 0x1913B8u;
            goto label_1913b8;
        }
    }
    ctx->pc = 0x191370u;
label_191370:
    // 0x191370: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x191370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191374: 0xc064634  jal         func_1918D0
    ctx->pc = 0x191374u;
    SET_GPR_U32(ctx, 31, 0x19137Cu);
    ctx->pc = 0x191378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191374u;
    // 0x191378: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1918D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1918D0u, 0x191374u, 0x19137Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19137Cu;
label_19137c:
    // 0x19137c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x19137Cu;
    {
        const bool branch_taken_0x19137c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19137Cu;
        // 0x191380: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19137c) {
            ctx->pc = 0x1913B8u;
            goto label_1913b8;
        }
    }
    ctx->pc = 0x191384u;
label_191384:
    // 0x191384: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x191384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191388: 0xc064634  jal         func_1918D0
    ctx->pc = 0x191388u;
    SET_GPR_U32(ctx, 31, 0x191390u);
    ctx->pc = 0x19138Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191388u;
    // 0x19138c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1918D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1918D0u, 0x191388u, 0x191390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191390u;
label_191390:
    // 0x191390: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x191390u;
    {
        const bool branch_taken_0x191390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191390u;
        // 0x191394: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191390) {
            ctx->pc = 0x1913B8u;
            goto label_1913b8;
        }
    }
    ctx->pc = 0x191398u;
label_191398:
    // 0x191398: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x191398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19139c: 0xc064634  jal         func_1918D0
    ctx->pc = 0x19139Cu;
    SET_GPR_U32(ctx, 31, 0x1913A4u);
    ctx->pc = 0x1913A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19139Cu;
    // 0x1913a0: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1918D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1918D0u, 0x19139Cu, 0x1913A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1913A4u;
label_1913a4:
    // 0x1913a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1913A4u;
    {
        const bool branch_taken_0x1913a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1913A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913A4u;
        // 0x1913a8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1913a4) {
            ctx->pc = 0x1913B8u;
            goto label_1913b8;
        }
    }
    ctx->pc = 0x1913ACu;
label_1913ac:
    // 0x1913ac: 0xc064634  jal         func_1918D0
    ctx->pc = 0x1913ACu;
    SET_GPR_U32(ctx, 31, 0x1913B4u);
    ctx->pc = 0x1913B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1913ACu;
    // 0x1913b0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1918D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1918D0u, 0x1913ACu, 0x1913B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1913B4u;
label_1913b4:
    // 0x1913b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1913b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1913b8:
    // 0x1913b8: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x1913b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1913bc: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1913BCu;
    {
        const bool branch_taken_0x1913bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1913C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913BCu;
        // 0x1913c0: 0x101142  srl         $v0, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1913bc) {
            ctx->pc = 0x191328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191328;
        }
    }
    ctx->pc = 0x1913C4u;
    // 0x1913c4: 0x27c24010  addiu       $v0, $fp, 0x4010
    ctx->pc = 0x1913c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16400));
    // 0x1913c8: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x1913c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1913cc: 0x90440008  lbu         $a0, 0x8($v0)
    ctx->pc = 0x1913ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1913d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1913d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1913d4: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x1913d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1913d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1913D8u;
    {
        const bool branch_taken_0x1913d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1913DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913D8u;
        // 0x1913dc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1913d8) {
            ctx->pc = 0x1913E8u;
            goto label_1913e8;
        }
    }
    ctx->pc = 0x1913E0u;
    // 0x1913e0: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1913e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1913e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1913e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1913e8:
    // 0x1913e8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1913e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1913ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1913ECu;
    {
        const bool branch_taken_0x1913ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1913F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913ECu;
        // 0x1913f0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1913ec) {
            ctx->pc = 0x191404u;
            goto label_191404;
        }
    }
    ctx->pc = 0x1913F4u;
    // 0x1913f4: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1913f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1913f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1913f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1913fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1913FCu;
    {
        const bool branch_taken_0x1913fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913FCu;
        // 0x191400: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1913fc) {
            ctx->pc = 0x191408u;
            goto label_191408;
        }
    }
    ctx->pc = 0x191404u;
label_191404:
    // 0x191404: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x191404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191408:
    // 0x191408: 0x27c24010  addiu       $v0, $fp, 0x4010
    ctx->pc = 0x191408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16400));
    // 0x19140c: 0x90430013  lbu         $v1, 0x13($v0)
    ctx->pc = 0x19140cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x191410: 0x90500012  lbu         $s0, 0x12($v0)
    ctx->pc = 0x191410u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x191414: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x191414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x191418: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x191418u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19141c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x19141Cu;
    {
        const bool branch_taken_0x19141c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19141Cu;
        // 0x191420: 0x24b40080  addiu       $s4, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19141c) {
            ctx->pc = 0x1914B4u;
            goto label_1914b4;
        }
    }
    ctx->pc = 0x191424u;
    // 0x191424: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x191424u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191428: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x191428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19142c: 0x0  nop
    ctx->pc = 0x19142cu;
    // NOP
label_191430:
    // 0x191430: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x191430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x191434: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x191434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191438: 0x6200002  bltz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x191438u;
    {
        const bool branch_taken_0x191438 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x19143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191438u;
        // 0x19143c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191438) {
            ctx->pc = 0x191444u;
            goto label_191444;
        }
    }
    ctx->pc = 0x191440u;
    // 0x191440: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x191440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_191444:
    // 0x191444: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x191444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x191448: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x191448u;
    {
        const bool branch_taken_0x191448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191448u;
        // 0x19144c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191448) {
            ctx->pc = 0x191460u;
            goto label_191460;
        }
    }
    ctx->pc = 0x191450u;
    // 0x191450: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x191450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x191454: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191458: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x191458u;
    {
        const bool branch_taken_0x191458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191458u;
        // 0x19145c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191458) {
            ctx->pc = 0x191464u;
            goto label_191464;
        }
    }
    ctx->pc = 0x191460u;
label_191460:
    // 0x191460: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x191460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191464:
    // 0x191464: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x191464u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x191468: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x191468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x19146c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19146cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191470: 0x6200002  bltz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x191470u;
    {
        const bool branch_taken_0x191470 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x191474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191470u;
        // 0x191474: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191470) {
            ctx->pc = 0x19147Cu;
            goto label_19147c;
        }
    }
    ctx->pc = 0x191478u;
    // 0x191478: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x191478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_19147c:
    // 0x19147c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19147cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x191480: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x191480u;
    {
        const bool branch_taken_0x191480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191480u;
        // 0x191484: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191480) {
            ctx->pc = 0x191498u;
            goto label_191498;
        }
    }
    ctx->pc = 0x191488u;
    // 0x191488: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x191488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x19148c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19148cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191490: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x191490u;
    {
        const bool branch_taken_0x191490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191490u;
        // 0x191494: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191490) {
            ctx->pc = 0x19149Cu;
            goto label_19149c;
        }
    }
    ctx->pc = 0x191498u;
label_191498:
    // 0x191498: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x191498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19149c:
    // 0x19149c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x19149cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1914a0: 0xc051d52  jal         func_147548
    ctx->pc = 0x1914A0u;
    SET_GPR_U32(ctx, 31, 0x1914A8u);
    ctx->pc = 0x1914A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1914A0u;
    // 0x1914a4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x1914A0u, 0x1914A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1914A8u;
label_1914a8:
    // 0x1914a8: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x1914a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1914ac: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1914ACu;
    {
        const bool branch_taken_0x1914ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1914B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1914ACu;
        // 0x1914b0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1914ac) {
            ctx->pc = 0x191430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191430;
        }
    }
    ctx->pc = 0x1914B4u;
label_1914b4:
    // 0x1914b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1914b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1914b8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1914b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1914bc: 0xc064634  jal         func_1918D0
    ctx->pc = 0x1914BCu;
    SET_GPR_U32(ctx, 31, 0x1914C4u);
    ctx->pc = 0x1914C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1914BCu;
    // 0x1914c0: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1918D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1918D0u, 0x1914BCu, 0x1914C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1914C4u;
label_1914c4:
    // 0x1914c4: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x1914c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1914c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1914c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1914cc: 0xa6420f84  sh          $v0, 0xF84($s2)
    ctx->pc = 0x1914ccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3972), (uint16_t)GPR_U32(ctx, 2));
    // 0x1914d0: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x1914d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x1914d4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1914D4u;
    {
        const bool branch_taken_0x1914d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1914D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1914D4u;
        // 0x1914d8: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1914d4) {
            ctx->pc = 0x191574u;
            goto label_191574;
        }
    }
    ctx->pc = 0x1914DCu;
label_1914dc:
    // 0x1914dc: 0x96420f84  lhu         $v0, 0xF84($s2)
    ctx->pc = 0x1914dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 3972)));
    // 0x1914e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1914e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1914e4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1914e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1914e8: 0x1c600023  bgtz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1914E8u;
    {
        const bool branch_taken_0x1914e8 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1914ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1914E8u;
        // 0x1914ec: 0xa6420f84  sh          $v0, 0xF84($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 3972), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1914e8) {
            ctx->pc = 0x191578u;
            goto label_191578;
        }
    }
    ctx->pc = 0x1914F0u;
    // 0x1914f0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1914f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1914f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1914f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1914f8: 0x8e440610  lw          $a0, 0x610($s2)
    ctx->pc = 0x1914f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1552)));
    // 0x1914fc: 0xa6420f84  sh          $v0, 0xF84($s2)
    ctx->pc = 0x1914fcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3972), (uint16_t)GPR_U32(ctx, 2));
    // 0x191500: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x191500u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x191504: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x191504u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x191508: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x191508u;
    {
        const bool branch_taken_0x191508 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191508u;
        // 0x19150c: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191508) {
            ctx->pc = 0x191578u;
            goto label_191578;
        }
    }
    ctx->pc = 0x191510u;
    // 0x191510: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x191510u;
    SET_GPR_U32(ctx, 31, 0x191518u);
    ctx->pc = 0x191514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191510u;
    // 0x191514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x191510u, 0x191518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191518u;
label_191518:
    // 0x191518: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x191518u;
    {
        const bool branch_taken_0x191518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191518u;
        // 0x19151c: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191518) {
            ctx->pc = 0x19157Cu;
            goto label_19157c;
        }
    }
    ctx->pc = 0x191520u;
label_191520:
    // 0x191520: 0x96420f84  lhu         $v0, 0xF84($s2)
    ctx->pc = 0x191520u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 3972)));
    // 0x191524: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x191524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x191528: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x191528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19152c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19152cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x191530: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x191530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x191534: 0xa6420f84  sh          $v0, 0xF84($s2)
    ctx->pc = 0x191534u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3972), (uint16_t)GPR_U32(ctx, 2));
    // 0x191538: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x191538u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x19153c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19153cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191540: 0x0  nop
    ctx->pc = 0x191540u;
    // NOP
    // 0x191544: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x191544u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x191548: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x191548u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x19154c: 0x1c60000a  bgtz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x19154Cu;
    {
        const bool branch_taken_0x19154c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x191550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19154Cu;
        // 0x191550: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19154c) {
            ctx->pc = 0x191578u;
            goto label_191578;
        }
    }
    ctx->pc = 0x191554u;
    // 0x191554: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x191554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x191558: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x191558u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x19155c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19155Cu;
    {
        const bool branch_taken_0x19155c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19155Cu;
        // 0x191560: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19155c) {
            ctx->pc = 0x191574u;
            goto label_191574;
        }
    }
    ctx->pc = 0x191564u;
label_191564:
    // 0x191564: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x191564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x191568: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x191568u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x19156c: 0xa24202f4  sb          $v0, 0x2F4($s2)
    ctx->pc = 0x19156cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
label_191570:
    // 0x191570: 0xa24002f5  sb          $zero, 0x2F5($s2)
    ctx->pc = 0x191570u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 0));
label_191574:
    // 0x191574: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x191574u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_191578:
    // 0x191578: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x191578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_19157c:
    // 0x19157c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x19157cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x191580: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x191580u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x191584: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x191584u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x191588: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x191588u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19158c: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x19158cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x191590: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x191590u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x191594: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x191594u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x191598: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x191598u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19159c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x19159cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1915a0: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x1915a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1915a4: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x1915a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1915a8: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x1915a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1915ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1915ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1915B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1915ACu;
        // 0x1915b0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1915ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1915B4u;
    // 0x1915b4: 0x0  nop
    ctx->pc = 0x1915b4u;
    // NOP
    ctx->pc = 0x1915b8u;
}
