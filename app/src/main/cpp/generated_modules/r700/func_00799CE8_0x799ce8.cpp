#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r700_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r700
{
// Function: func_00799CE8
// Address: 0x799ce8 - 0x799fa8
void func_00799CE8_0x799ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799CE8_0x799ce8");
#endif

    switch (ctx->pc) {
        case 0x799d2cu: goto label_799d2c;
        case 0x799d44u: goto label_799d44;
        case 0x799d58u: goto label_799d58;
        case 0x799d70u: goto label_799d70;
        case 0x799d84u: goto label_799d84;
        case 0x799d98u: goto label_799d98;
        case 0x799db8u: goto label_799db8;
        case 0x799dc0u: goto label_799dc0;
        case 0x799e10u: goto label_799e10;
        case 0x799e28u: goto label_799e28;
        case 0x799e70u: goto label_799e70;
        case 0x799e9cu: goto label_799e9c;
        case 0x799ef0u: goto label_799ef0;
        case 0x799ef8u: goto label_799ef8;
        case 0x799f10u: goto label_799f10;
        case 0x799f3cu: goto label_799f3c;
        case 0x799f50u: goto label_799f50;
        case 0x799f64u: goto label_799f64;
        case 0x799f74u: goto label_799f74;
        default: break;
    }

    ctx->pc = 0x799ce8u;

    // 0x799ce8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x799ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x799cec: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x799cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799cf0: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x799cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x799cf4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x799cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x799cf8: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x799cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x799cfc: 0x24508658  addiu       $s0, $v0, -0x79A8
    ctx->pc = 0x799cfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936152));
    // 0x799d00: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x799d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x799d04: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x799d04u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d08: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x799d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x799d0c: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x799d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x799d10: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x799d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x799d14: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x799d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x799d18: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x799d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x799d1c: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x799d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x799d20: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x799d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x799d24: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799D24u;
    SET_GPR_U32(ctx, 31, 0x799D2Cu);
    ctx->pc = 0x799D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D24u;
    // 0x799d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799D24u, 0x799D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D2Cu;
label_799d2c:
    // 0x799d2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799d30: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x799D30u;
    {
        const bool branch_taken_0x799d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D30u;
        // 0x799d34: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d30) {
            ctx->pc = 0x799D4Cu;
            goto label_799d4c;
        }
    }
    ctx->pc = 0x799D38u;
    // 0x799d38: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x799d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x799d3c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799D3Cu;
    SET_GPR_U32(ctx, 31, 0x799D44u);
    ctx->pc = 0x799D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D3Cu;
    // 0x799d40: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799D3Cu, 0x799D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D44u;
label_799d44:
    // 0x799d44: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x799D44u;
    {
        const bool branch_taken_0x799d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D44u;
        // 0x799d48: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d44) {
            ctx->pc = 0x799F78u;
            goto label_799f78;
        }
    }
    ctx->pc = 0x799D4Cu;
label_799d4c:
    // 0x799d4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d50: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799D50u;
    SET_GPR_U32(ctx, 31, 0x799D58u);
    ctx->pc = 0x799D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D50u;
    // 0x799d54: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799D50u, 0x799D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D58u;
label_799d58:
    // 0x799d58: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x799d58u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x799d5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x799d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d64: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x799d64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x799d68: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799D68u;
    SET_GPR_U32(ctx, 31, 0x799D70u);
    ctx->pc = 0x799D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D68u;
    // 0x799d6c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799D68u, 0x799D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D70u;
label_799d70:
    // 0x799d70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799d74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d7c: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799D7Cu;
    SET_GPR_U32(ctx, 31, 0x799D84u);
    ctx->pc = 0x799D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D7Cu;
    // 0x799d80: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799D7Cu, 0x799D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D84u;
label_799d84:
    // 0x799d84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799d88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799d90: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799D90u;
    SET_GPR_U32(ctx, 31, 0x799D98u);
    ctx->pc = 0x799D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D90u;
    // 0x799d94: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799D90u, 0x799D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D98u;
label_799d98:
    // 0x799d98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799d9c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x799d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x799da0: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x799da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x799da4: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x799da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x799da8: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x799da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799dac: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x799dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799db0: 0x27c48658  addiu       $a0, $fp, -0x79A8
    ctx->pc = 0x799db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294936152));
    // 0x799db4: 0x0  nop
    ctx->pc = 0x799db4u;
    // NOP
label_799db8:
    // 0x799db8: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799DB8u;
    SET_GPR_U32(ctx, 31, 0x799DC0u);
    ctx->pc = 0x799DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DB8u;
    // 0x799dbc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799DB8u, 0x799DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DC0u;
label_799dc0:
    // 0x799dc0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799dc4: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x799dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x799dc8: 0x8c827a84  lw          $v0, 0x7A84($a0)
    ctx->pc = 0x799dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A84u));
    // 0x799dcc: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x799dccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x799dd0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x799dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x799dd4: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x799DD4u;
    {
        const bool branch_taken_0x799dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DD4u;
        // 0x799dd8: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799dd4) {
            ctx->pc = 0x799F58u;
            goto label_799f58;
        }
    }
    ctx->pc = 0x799DDCu;
    // 0x799ddc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x799ddcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799de0: 0x24637a84  addiu       $v1, $v1, 0x7A84
    ctx->pc = 0x799de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31364));
    // 0x799de4: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x799de4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x799de8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x799de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x799dec: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x799decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x799df0: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x799DF0u;
    {
        const bool branch_taken_0x799df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DF0u;
        // 0x799df4: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799df0) {
            ctx->pc = 0x799F58u;
            goto label_799f58;
        }
    }
    ctx->pc = 0x799DF8u;
    // 0x799df8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x799df8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799dfc: 0x2456c118  addiu       $s6, $v0, -0x3EE8
    ctx->pc = 0x799dfcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951192));
    // 0x799e00: 0x3c14005f  lui         $s4, 0x5F
    ctx->pc = 0x799e00u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)95 << 16));
    // 0x799e04: 0x3c171000  lui         $s7, 0x1000
    ctx->pc = 0x799e04u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)4096 << 16));
    // 0x799e08: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x799e08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e0c: 0x0  nop
    ctx->pc = 0x799e0cu;
    // NOP
label_799e10:
    // 0x799e10: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799e14: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x799e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x799e18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x799e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x799e1c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x799e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x799e20: 0xc0b145a  jal         func_2C5168
    ctx->pc = 0x799E20u;
    SET_GPR_U32(ctx, 31, 0x799E28u);
    ctx->pc = 0x799E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E20u;
    // 0x799e24: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5168u, 0x799E20u, 0x799E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E28u;
label_799e28:
    // 0x799e28: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x799E28u;
    {
        const bool branch_taken_0x799e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E28u;
        // 0x799e2c: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e28) {
            ctx->pc = 0x799EDCu;
            goto label_799edc;
        }
    }
    ctx->pc = 0x799E30u;
    // 0x799e30: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x799e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799e34: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x799e34u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x799e38: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x799e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x799e3c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x799e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x799e40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x799e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x799e44: 0x732006  srlv        $a0, $s3, $v1
    ctx->pc = 0x799e44u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
    // 0x799e48: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x799e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x799e4c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x799e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x799e50: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x799e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x799e54: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x799E54u;
    {
        const bool branch_taken_0x799e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799e54) {
            ctx->pc = 0x799E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799E54u;
            // 0x799e58: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799EE0u;
            goto label_799ee0;
        }
    }
    ctx->pc = 0x799E5Cu;
    // 0x799e5c: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x799e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x799e60: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x799e60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x799e64: 0x26848658  addiu       $a0, $s4, -0x79A8
    ctx->pc = 0x799e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936152));
    // 0x799e68: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799E68u;
    SET_GPR_U32(ctx, 31, 0x799E70u);
    ctx->pc = 0x799E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E68u;
    // 0x799e6c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799E68u, 0x799E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E70u;
label_799e70:
    // 0x799e70: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x799e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799e74: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x799e74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x799e78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x799e78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x799e7c: 0x8e848658  lw          $a0, -0x79A8($s4)
    ctx->pc = 0x799e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
    // 0x799e80: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x799e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x799e84: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x799e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x799e88: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x799E88u;
    {
        const bool branch_taken_0x799e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E88u;
        // 0x799e8c: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e88) {
            ctx->pc = 0x799F24u;
            goto label_799f24;
        }
    }
    ctx->pc = 0x799E90u;
    // 0x799e90: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x799e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x799e94: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799E94u;
    SET_GPR_U32(ctx, 31, 0x799E9Cu);
    ctx->pc = 0x799E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E94u;
    // 0x799e98: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799E94u, 0x799E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E9Cu;
label_799e9c:
    // 0x799e9c: 0x8fc38658  lw          $v1, -0x79A8($fp)
    ctx->pc = 0x799e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294936152)));
    // 0x799ea0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799ea4: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x799ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x799ea8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x799EA8u;
    {
        const bool branch_taken_0x799ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EA8u;
        // 0x799eac: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ea8) {
            ctx->pc = 0x799F18u;
            goto label_799f18;
        }
    }
    ctx->pc = 0x799EB0u;
    // 0x799eb0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799eb4: 0x22142  srl         $a0, $v0, 5
    ctx->pc = 0x799eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x799eb8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x799eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x799ebc: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x799ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x799ec0: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x799ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x799ec4: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x799ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x799ec8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x799ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799ecc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x799eccu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x799ed0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x799ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x799ed4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799ED4u;
    {
        const bool branch_taken_0x799ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799ED4u;
        // 0x799ed8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ed4) {
            ctx->pc = 0x799EECu;
            goto label_799eec;
        }
    }
    ctx->pc = 0x799EDCu;
label_799edc:
    // 0x799edc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x799edcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_799ee0:
    // 0x799ee0: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x799ee0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x799ee4: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x799EE4u;
    {
        const bool branch_taken_0x799ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EE4u;
        // 0x799ee8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ee4) {
            ctx->pc = 0x799E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799e10;
        }
    }
    ctx->pc = 0x799EECu;
label_799eec:
    // 0x799eec: 0x27c48658  addiu       $a0, $fp, -0x79A8
    ctx->pc = 0x799eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294936152));
label_799ef0:
    // 0x799ef0: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799EF0u;
    SET_GPR_U32(ctx, 31, 0x799EF8u);
    ctx->pc = 0x799EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EF0u;
    // 0x799ef4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799EF0u, 0x799EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EF8u;
label_799ef8:
    // 0x799ef8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x799ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799efc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799f00: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x799f00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x799f04: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x799f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x799f08: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799F08u;
    SET_GPR_U32(ctx, 31, 0x799F10u);
    ctx->pc = 0x799F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F08u;
    // 0x799f0c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799F08u, 0x799F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F10u;
label_799f10:
    // 0x799f10: 0x1000ffa9  b           . + 4 + (-0x57 << 2)
    ctx->pc = 0x799F10u;
    {
        const bool branch_taken_0x799f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F10u;
        // 0x799f14: 0x27c48658  addiu       $a0, $fp, -0x79A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294936152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f10) {
            ctx->pc = 0x799DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799db8;
        }
    }
    ctx->pc = 0x799F18u;
label_799f18:
    // 0x799f18: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x799f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x799f1c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x799F1Cu;
    {
        const bool branch_taken_0x799f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F1Cu;
        // 0x799f20: 0x2445a3f8  addiu       $a1, $v0, -0x5C08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f1c) {
            ctx->pc = 0x799F48u;
            goto label_799f48;
        }
    }
    ctx->pc = 0x799F24u;
label_799f24:
    // 0x799f24: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x799f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x799f28: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x799f28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x799f2c: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x799f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x799f30: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x799f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x799f34: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799F34u;
    SET_GPR_U32(ctx, 31, 0x799F3Cu);
    ctx->pc = 0x799F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F34u;
    // 0x799f38: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799F34u, 0x799F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F3Cu;
label_799f3c:
    // 0x799f3c: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799f40: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x799f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x799f44: 0x24659fa8  addiu       $a1, $v1, -0x6058
    ctx->pc = 0x799f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942632));
label_799f48:
    // 0x799f48: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799F48u;
    SET_GPR_U32(ctx, 31, 0x799F50u);
    ctx->pc = 0x799F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F48u;
    // 0x799f4c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799F48u, 0x799F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F50u;
label_799f50:
    // 0x799f50: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x799F50u;
    {
        const bool branch_taken_0x799f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F50u;
        // 0x799f54: 0x27c48658  addiu       $a0, $fp, -0x79A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294936152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f50) {
            ctx->pc = 0x799EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799ef0;
        }
    }
    ctx->pc = 0x799F58u;
label_799f58:
    // 0x799f58: 0x27c48658  addiu       $a0, $fp, -0x79A8
    ctx->pc = 0x799f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294936152));
    // 0x799f5c: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799F5Cu;
    SET_GPR_U32(ctx, 31, 0x799F64u);
    ctx->pc = 0x799F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F5Cu;
    // 0x799f60: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799F5Cu, 0x799F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F64u;
label_799f64:
    // 0x799f64: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x799f64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x799f68: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x799f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x799f6c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799F6Cu;
    SET_GPR_U32(ctx, 31, 0x799F74u);
    ctx->pc = 0x799F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F6Cu;
    // 0x799f70: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799F6Cu, 0x799F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F74u;
label_799f74:
    // 0x799f74: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x799f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_799f78:
    // 0x799f78: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x799f78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x799f7c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x799f7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x799f80: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x799f80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799f84: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x799f84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799f88: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x799f88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799f8c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x799f8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799f90: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x799f90u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799f94: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x799f94u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799f98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x799f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x799F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F9Cu;
        // 0x799fa0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799FA4u;
    // 0x799fa4: 0x0  nop
    ctx->pc = 0x799fa4u;
    // NOP
    ctx->pc = 0x799fa8u;
}
} // namespace gh_r700
