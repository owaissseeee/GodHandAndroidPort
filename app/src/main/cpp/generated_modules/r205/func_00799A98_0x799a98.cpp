#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r205_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r205
{
// Function: func_00799A98
// Address: 0x799a98 - 0x799ef0
void func_00799A98_0x799a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799A98_0x799a98");
#endif

    switch (ctx->pc) {
        case 0x799b58u: goto label_799b58;
        case 0x799b88u: goto label_799b88;
        case 0x799bb0u: goto label_799bb0;
        case 0x799be0u: goto label_799be0;
        case 0x799bfcu: goto label_799bfc;
        case 0x799c0cu: goto label_799c0c;
        case 0x799c60u: goto label_799c60;
        case 0x799c70u: goto label_799c70;
        case 0x799c78u: goto label_799c78;
        case 0x799c88u: goto label_799c88;
        case 0x799c98u: goto label_799c98;
        case 0x799cacu: goto label_799cac;
        case 0x799ce0u: goto label_799ce0;
        case 0x799d04u: goto label_799d04;
        case 0x799d20u: goto label_799d20;
        case 0x799d38u: goto label_799d38;
        case 0x799d4cu: goto label_799d4c;
        case 0x799d58u: goto label_799d58;
        case 0x799d64u: goto label_799d64;
        case 0x799d78u: goto label_799d78;
        case 0x799d98u: goto label_799d98;
        case 0x799db0u: goto label_799db0;
        case 0x799dc0u: goto label_799dc0;
        case 0x799dd0u: goto label_799dd0;
        case 0x799dd8u: goto label_799dd8;
        case 0x799de0u: goto label_799de0;
        case 0x799e14u: goto label_799e14;
        case 0x799e24u: goto label_799e24;
        case 0x799e30u: goto label_799e30;
        case 0x799e50u: goto label_799e50;
        case 0x799e5cu: goto label_799e5c;
        case 0x799ea0u: goto label_799ea0;
        case 0x799eb0u: goto label_799eb0;
        case 0x799ebcu: goto label_799ebc;
        default: break;
    }

    ctx->pc = 0x799a98u;

    // 0x799a98: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x799a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x799a9c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x799a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x799aa0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x799aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x799aa4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x799aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x799aa8: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x799aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x799aac: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799aacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x799ab0: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799ab4: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x799ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x799ab8: 0xa3a40020  sb          $a0, 0x20($sp)
    ctx->pc = 0x799ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 4));
    // 0x799abc: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x799abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x799ac0: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x799ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x799ac4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x799ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799ac8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x799ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799acc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x799accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x799ad0: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x799ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x799ad4: 0x24e8a5b8  addiu       $t0, $a3, -0x5A48
    ctx->pc = 0x799ad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944184));
    // 0x799ad8: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x799ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x799adc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x799adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ae0: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x799ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x799ae4: 0x24494c58  addiu       $t1, $v0, 0x4C58
    ctx->pc = 0x799ae4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x799ae8: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x799ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x799aec: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x799aecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x799af0: 0xafa60054  sw          $a2, 0x54($sp)
    ctx->pc = 0x799af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 6));
    // 0x799af4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799af8: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x799af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x799afc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799afcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b00: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x799b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x799b04: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x799b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x799b08: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x799b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x799b0c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x799b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x799b10: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x799b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x799b14: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x799b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x799b18: 0xafa4005c  sw          $a0, 0x5C($sp)
    ctx->pc = 0x799b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
    // 0x799b1c: 0x80e3a5b8  lb          $v1, -0x5A48($a3)
    ctx->pc = 0x799b1cu;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x79A5B8u));
    // 0x799b20: 0xafbd0050  sw          $sp, 0x50($sp)
    ctx->pc = 0x799b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 29));
    // 0x799b24: 0x6ba20057  ldl         $v0, 0x57($sp)
    ctx->pc = 0x799b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x799b28: 0x6fa20050  ldr         $v0, 0x50($sp)
    ctx->pc = 0x799b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x799b2c: 0x6ba4005f  ldl         $a0, 0x5F($sp)
    ctx->pc = 0x799b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x799b30: 0x6fa40058  ldr         $a0, 0x58($sp)
    ctx->pc = 0x799b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x799b34: 0xb3a20047  sdl         $v0, 0x47($sp)
    ctx->pc = 0x799b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799b38: 0xb7a20040  sdr         $v0, 0x40($sp)
    ctx->pc = 0x799b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799b3c: 0xb3a4004f  sdl         $a0, 0x4F($sp)
    ctx->pc = 0x799b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799b40: 0xb7a40048  sdr         $a0, 0x48($sp)
    ctx->pc = 0x799b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799b44: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x799B44u;
    {
        const bool branch_taken_0x799b44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B44u;
        // 0x799b48: 0x3c15003c  lui         $s5, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b44) {
            ctx->pc = 0x799B80u;
            goto label_799b80;
        }
    }
    ctx->pc = 0x799B4Cu;
    // 0x799b4c: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x799b4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b50: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x799b50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x799b54: 0x0  nop
    ctx->pc = 0x799b54u;
    // NOP
label_799b58:
    // 0x799b58: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x799b58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x799b5c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799b60: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799b60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799b64: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799b68: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x799b68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799b6c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799B6Cu;
    {
        const bool branch_taken_0x799b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B6Cu;
        // 0x799b70: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b6c) {
            ctx->pc = 0x799B80u;
            goto label_799b80;
        }
    }
    ctx->pc = 0x799B74u;
    // 0x799b74: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x799b74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x799b78: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799B78u;
    {
        const bool branch_taken_0x799b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799b78) {
            ctx->pc = 0x799B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799B78u;
            // 0x799b7c: 0x80e20000  lb          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b58;
        }
    }
    ctx->pc = 0x799B80u;
label_799b80:
    // 0x799b80: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799B80u;
    SET_GPR_U32(ctx, 31, 0x799B88u);
    ctx->pc = 0x799B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B80u;
    // 0x799b84: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799B80u, 0x799B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B88u;
label_799b88:
    // 0x799b88: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x799b88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b8c: 0x26284c58  addiu       $t0, $s1, 0x4C58
    ctx->pc = 0x799b8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19544));
    // 0x799b90: 0x8202a5c0  lb          $v0, -0x5A40($s0)
    ctx->pc = 0x799b90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294944192)));
    // 0x799b94: 0x2603a5c0  addiu       $v1, $s0, -0x5A40
    ctx->pc = 0x799b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944192));
    // 0x799b98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b9c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x799B9Cu;
    {
        const bool branch_taken_0x799b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B9Cu;
        // 0x799ba0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b9c) {
            ctx->pc = 0x799BD8u;
            goto label_799bd8;
        }
    }
    ctx->pc = 0x799BA4u;
    // 0x799ba4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799ba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ba8: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799ba8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799bac: 0x0  nop
    ctx->pc = 0x799bacu;
    // NOP
label_799bb0:
    // 0x799bb0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799bb4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799bb8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799bbc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799bc0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799bc0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799bc4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799BC4u;
    {
        const bool branch_taken_0x799bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BC4u;
        // 0x799bc8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bc4) {
            ctx->pc = 0x799BD8u;
            goto label_799bd8;
        }
    }
    ctx->pc = 0x799BCCu;
    // 0x799bcc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799bccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799bd0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799BD0u;
    {
        const bool branch_taken_0x799bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799bd0) {
            ctx->pc = 0x799BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799BD0u;
            // 0x799bd4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799bb0;
        }
    }
    ctx->pc = 0x799BD8u;
label_799bd8:
    // 0x799bd8: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799BD8u;
    SET_GPR_U32(ctx, 31, 0x799BE0u);
    ctx->pc = 0x799BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BD8u;
    // 0x799bdc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799BD8u, 0x799BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BE0u;
label_799be0:
    // 0x799be0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x799be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x799be4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799be8: 0x2470ae50  addiu       $s0, $v1, -0x51B0
    ctx->pc = 0x799be8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946384));
    // 0x799bec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799bf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799bf4: 0xc04cccc  jal         func_133330
    ctx->pc = 0x799BF4u;
    SET_GPR_U32(ctx, 31, 0x799BFCu);
    ctx->pc = 0x799BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BF4u;
    // 0x799bf8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x799BF4u, 0x799BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BFCu;
label_799bfc:
    // 0x799bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799c04: 0xc04cccc  jal         func_133330
    ctx->pc = 0x799C04u;
    SET_GPR_U32(ctx, 31, 0x799C0Cu);
    ctx->pc = 0x799C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C04u;
    // 0x799c08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x799C04u, 0x799C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C0Cu;
label_799c0c:
    // 0x799c0c: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x799C0Cu;
    {
        const bool branch_taken_0x799c0c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x799C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C0Cu;
        // 0x799c10: 0x3c07005f  lui         $a3, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c0c) {
            ctx->pc = 0x799C2Cu;
            goto label_799c2c;
        }
    }
    ctx->pc = 0x799C14u;
    // 0x799c14: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x799c14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
    // 0x799c18: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x799c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x799c1c: 0x8ca48658  lw          $a0, -0x79A8($a1)
    ctx->pc = 0x799c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799c20: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x799c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x799c24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x799c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x799c28: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x799c28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_799c2c:
    // 0x799c2c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x799c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x799c30: 0x8ce28658  lw          $v0, -0x79A8($a3)
    ctx->pc = 0x799c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294936152)));
    // 0x799c34: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x799c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x799c38: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x799c3c: 0x1460006a  bnez        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x799C3Cu;
    {
        const bool branch_taken_0x799c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C3Cu;
        // 0x799c40: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c3c) {
            ctx->pc = 0x799DE8u;
            goto label_799de8;
        }
    }
    ctx->pc = 0x799C44u;
    // 0x799c44: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x799c44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x799c48: 0x3c130058  lui         $s3, 0x58
    ctx->pc = 0x799c48u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
    // 0x799c4c: 0x27b60050  addiu       $s6, $sp, 0x50
    ctx->pc = 0x799c4cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x799c50: 0x3c170074  lui         $s7, 0x74
    ctx->pc = 0x799c50u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)116 << 16));
    // 0x799c54: 0x3c14007a  lui         $s4, 0x7A
    ctx->pc = 0x799c54u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
    // 0x799c58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799C58u;
    {
        const bool branch_taken_0x799c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C58u;
        // 0x799c5c: 0x3c1e0060  lui         $fp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c58) {
            ctx->pc = 0x799C70u;
            goto label_799c70;
        }
    }
    ctx->pc = 0x799C60u;
label_799c60:
    // 0x799c60: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x799c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x799c64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799c68: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799C68u;
    SET_GPR_U32(ctx, 31, 0x799C70u);
    ctx->pc = 0x799C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C68u;
    // 0x799c6c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799C68u, 0x799C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C70u;
label_799c70:
    // 0x799c70: 0xc0693c4  jal         func_1A4F10
    ctx->pc = 0x799C70u;
    SET_GPR_U32(ctx, 31, 0x799C78u);
    ctx->pc = 0x799C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C70u;
    // 0x799c74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F10u, 0x799C70u, 0x799C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C78u;
label_799c78:
    // 0x799c78: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x799C78u;
    {
        const bool branch_taken_0x799c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C78u;
        // 0x799c7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c78) {
            ctx->pc = 0x799C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799c60;
        }
    }
    ctx->pc = 0x799C80u;
    // 0x799c80: 0xc0693ca  jal         func_1A4F28
    ctx->pc = 0x799C80u;
    SET_GPR_U32(ctx, 31, 0x799C88u);
    ctx->pc = 0x799C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C80u;
    // 0x799c84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x799C80u, 0x799C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C88u;
label_799c88:
    // 0x799c88: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x799c88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c8c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x799c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799c94: 0x0  nop
    ctx->pc = 0x799c94u;
    // NOP
label_799c98:
    // 0x799c98: 0x26646ab0  addiu       $a0, $s3, 0x6AB0
    ctx->pc = 0x799c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 27312));
    // 0x799c9c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x799c9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x799ca0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x799ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x799ca4: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799CA4u;
    SET_GPR_U32(ctx, 31, 0x799CACu);
    ctx->pc = 0x799CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CA4u;
    // 0x799ca8: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799CA4u, 0x799CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CACu;
label_799cac:
    // 0x799cac: 0x2e430004  sltiu       $v1, $s2, 0x4
    ctx->pc = 0x799cacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x799cb0: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x799CB0u;
    {
        const bool branch_taken_0x799cb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x799cb0) {
            ctx->pc = 0x799CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799CB0u;
            // 0x799cb4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799c98;
        }
    }
    ctx->pc = 0x799CB8u;
    // 0x799cb8: 0x26e27b00  addiu       $v0, $s7, 0x7B00
    ctx->pc = 0x799cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 31488));
    // 0x799cbc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x799cbcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799cc0: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x799cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799cc4: 0x8e84a680  lw          $a0, -0x5980($s4)
    ctx->pc = 0x799cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294944384)));
    // 0x799cc8: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x799cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x799ccc: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x799cccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x799cd0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x799cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799cd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799cd8: 0xc0b0346  jal         func_2C0D18
    ctx->pc = 0x799CD8u;
    SET_GPR_U32(ctx, 31, 0x799CE0u);
    ctx->pc = 0x799CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CD8u;
    // 0x799cdc: 0x27d0ea60  addiu       $s0, $fp, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D18u, 0x799CD8u, 0x799CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CE0u;
label_799ce0:
    // 0x799ce0: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x799ce0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799ce4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x799ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x799ce8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799ce8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799cec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799cf0: 0x8e84a680  lw          $a0, -0x5980($s4)
    ctx->pc = 0x799cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294944384)));
    // 0x799cf4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x799cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799cf8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x799cf8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x799cfc: 0xc0b036a  jal         func_2C0DA8
    ctx->pc = 0x799CFCu;
    SET_GPR_U32(ctx, 31, 0x799D04u);
    ctx->pc = 0x799D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CFCu;
    // 0x799d00: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DA8u, 0x799CFCu, 0x799D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D04u;
label_799d04:
    // 0x799d04: 0x8e83a680  lw          $v1, -0x5980($s4)
    ctx->pc = 0x799d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294944384)));
    // 0x799d08: 0x24021002  addiu       $v0, $zero, 0x1002
    ctx->pc = 0x799d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4098));
    // 0x799d0c: 0x3c0a0058  lui         $t2, 0x58
    ctx->pc = 0x799d0cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)88 << 16));
    // 0x799d10: 0xa462005e  sh          $v0, 0x5E($v1)
    ctx->pc = 0x799d10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 94), (uint16_t)GPR_U32(ctx, 2));
    // 0x799d14: 0x254464f0  addiu       $a0, $t2, 0x64F0
    ctx->pc = 0x799d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 25840));
    // 0x799d18: 0xc0a421a  jal         func_290868
    ctx->pc = 0x799D18u;
    SET_GPR_U32(ctx, 31, 0x799D20u);
    ctx->pc = 0x799D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D18u;
    // 0x799d1c: 0x93a50030  lbu         $a1, 0x30($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799D18u, 0x799D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D20u;
label_799d20:
    // 0x799d20: 0x8e85a680  lw          $a1, -0x5980($s4)
    ctx->pc = 0x799d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294944384)));
    // 0x799d24: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x799d24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d2c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799d2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799d30: 0xc0b0be4  jal         func_2C2F90
    ctx->pc = 0x799D30u;
    SET_GPR_U32(ctx, 31, 0x799D38u);
    ctx->pc = 0x799D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D30u;
    // 0x799d34: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F90u, 0x799D30u, 0x799D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D38u;
label_799d38:
    // 0x799d38: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x799d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x799d3c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799d40: 0x2445a080  addiu       $a1, $v0, -0x5F80
    ctx->pc = 0x799d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942848));
    // 0x799d44: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799D44u;
    SET_GPR_U32(ctx, 31, 0x799D4Cu);
    ctx->pc = 0x799D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D44u;
    // 0x799d48: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799D44u, 0x799D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D4Cu;
label_799d4c:
    // 0x799d4c: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x799d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x799d50: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x799D50u;
    SET_GPR_U32(ctx, 31, 0x799D58u);
    ctx->pc = 0x799D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D50u;
    // 0x799d54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799D50u, 0x799D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D58u;
label_799d58:
    // 0x799d58: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x799d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x799d5c: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x799D5Cu;
    SET_GPR_U32(ctx, 31, 0x799D64u);
    ctx->pc = 0x799D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D5Cu;
    // 0x799d60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799D5Cu, 0x799D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D64u;
label_799d64:
    // 0x799d64: 0x52530005  beql        $s2, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x799D64u;
    {
        const bool branch_taken_0x799d64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        if (branch_taken_0x799d64) {
            ctx->pc = 0x799D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799D64u;
            // 0x799d68: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799D7Cu;
            goto label_799d7c;
        }
    }
    ctx->pc = 0x799D6Cu;
    // 0x799d6c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x799d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x799d70: 0xc0a588c  jal         func_296230
    ctx->pc = 0x799D70u;
    SET_GPR_U32(ctx, 31, 0x799D78u);
    ctx->pc = 0x799D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D70u;
    // 0x799d74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296230u, 0x799D70u, 0x799D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D78u;
label_799d78:
    // 0x799d78: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x799d78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_799d7c:
    // 0x799d7c: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x799d7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x799d80: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x799D80u;
    {
        const bool branch_taken_0x799d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D80u;
        // 0x799d84: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d80) {
            ctx->pc = 0x799D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799d58;
        }
    }
    ctx->pc = 0x799D88u;
    // 0x799d88: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799d8c: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x799d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x799d90: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x799D90u;
    SET_GPR_U32(ctx, 31, 0x799D98u);
    ctx->pc = 0x799D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D90u;
    // 0x799d94: 0x2465a5c8  addiu       $a1, $v1, -0x5A38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799D90u, 0x799D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D98u;
label_799d98:
    // 0x799d98: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799d98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x799d9c: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x799d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x799da0: 0x24e59f28  addiu       $a1, $a3, -0x60D8
    ctx->pc = 0x799da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942504));
    // 0x799da4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799da4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799da8: 0xc0b0e48  jal         func_2C3920
    ctx->pc = 0x799DA8u;
    SET_GPR_U32(ctx, 31, 0x799DB0u);
    ctx->pc = 0x799DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DA8u;
    // 0x799dac: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x799DA8u, 0x799DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DB0u;
label_799db0:
    // 0x799db0: 0x8ea32f84  lw          $v1, 0x2F84($s5)
    ctx->pc = 0x799db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x799db4: 0x2405004b  addiu       $a1, $zero, 0x4B
    ctx->pc = 0x799db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x799db8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799DB8u;
    SET_GPR_U32(ctx, 31, 0x799DC0u);
    ctx->pc = 0x799DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DB8u;
    // 0x799dbc: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799DB8u, 0x799DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DC0u;
label_799dc0:
    // 0x799dc0: 0x3c0a007a  lui         $t2, 0x7A
    ctx->pc = 0x799dc0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)122 << 16));
    // 0x799dc4: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x799dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x799dc8: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x799DC8u;
    SET_GPR_U32(ctx, 31, 0x799DD0u);
    ctx->pc = 0x799DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DC8u;
    // 0x799dcc: 0x2545a5d0  addiu       $a1, $t2, -0x5A30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 4294944208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799DC8u, 0x799DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DD0u;
label_799dd0:
    // 0x799dd0: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799DD0u;
    SET_GPR_U32(ctx, 31, 0x799DD8u);
    ctx->pc = 0x799DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DD0u;
    // 0x799dd4: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799DD0u, 0x799DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DD8u;
label_799dd8:
    // 0x799dd8: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x799DD8u;
    SET_GPR_U32(ctx, 31, 0x799DE0u);
    ctx->pc = 0x799DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DD8u;
    // 0x799ddc: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x799DD8u, 0x799DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DE0u;
label_799de0:
    // 0x799de0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x799DE0u;
    {
        const bool branch_taken_0x799de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DE0u;
        // 0x799de4: 0x3c050074  lui         $a1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799de0) {
            ctx->pc = 0x799E34u;
            goto label_799e34;
        }
    }
    ctx->pc = 0x799DE8u;
label_799de8:
    // 0x799de8: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x799de8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x799dec: 0x8c627a8c  lw          $v0, 0x7A8C($v1)
    ctx->pc = 0x799decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31372)));
    // 0x799df0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x799df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x799df4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x799df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x799df8: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x799DF8u;
    {
        const bool branch_taken_0x799df8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x799DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DF8u;
        // 0x799dfc: 0xac827a8c  sw          $v0, 0x7A8C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 31372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799df8) {
            ctx->pc = 0x799E14u;
            goto label_799e14;
        }
    }
    ctx->pc = 0x799E00u;
    // 0x799e00: 0x8e2205a0  lw          $v0, 0x5A0($s1)
    ctx->pc = 0x799e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
    // 0x799e04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e08: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x799e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x799e0c: 0xc0c49c2  jal         func_312708
    ctx->pc = 0x799E0Cu;
    SET_GPR_U32(ctx, 31, 0x799E14u);
    ctx->pc = 0x799E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E0Cu;
    // 0x799e10: 0xae2205a0  sw          $v0, 0x5A0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1440), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x799E0Cu, 0x799E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E14u;
label_799e14:
    // 0x799e14: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x799E14u;
    {
        const bool branch_taken_0x799e14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E14u;
        // 0x799e18: 0x3c050074  lui         $a1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e14) {
            ctx->pc = 0x799E34u;
            goto label_799e34;
        }
    }
    ctx->pc = 0x799E1Cu;
    // 0x799e1c: 0xc069380  jal         func_1A4E00
    ctx->pc = 0x799E1Cu;
    SET_GPR_U32(ctx, 31, 0x799E24u);
    ctx->pc = 0x799E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E1Cu;
    // 0x799e20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E00u, 0x799E1Cu, 0x799E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E24u;
label_799e24:
    // 0x799e24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e28: 0xc0693ca  jal         func_1A4F28
    ctx->pc = 0x799E28u;
    SET_GPR_U32(ctx, 31, 0x799E30u);
    ctx->pc = 0x799E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E28u;
    // 0x799e2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x799E28u, 0x799E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E30u;
label_799e30:
    // 0x799e30: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x799e30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
label_799e34:
    // 0x799e34: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x799e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x799e38: 0x8ca27a8c  lw          $v0, 0x7A8C($a1)
    ctx->pc = 0x799e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 31372)));
    // 0x799e3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x799e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x799e40: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x799E40u;
    {
        const bool branch_taken_0x799e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E40u;
        // 0x799e44: 0x3c0a005f  lui         $t2, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e40) {
            ctx->pc = 0x799E74u;
            goto label_799e74;
        }
    }
    ctx->pc = 0x799E48u;
    // 0x799e48: 0x3c100800  lui         $s0, 0x800
    ctx->pc = 0x799e48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)2048 << 16));
    // 0x799e4c: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x799e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_799e50:
    // 0x799e50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799e54: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799E54u;
    SET_GPR_U32(ctx, 31, 0x799E5Cu);
    ctx->pc = 0x799E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E54u;
    // 0x799e58: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799E54u, 0x799E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E5Cu;
label_799e5c:
    // 0x799e5c: 0x3c070074  lui         $a3, 0x74
    ctx->pc = 0x799e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)116 << 16));
    // 0x799e60: 0x8ce27a8c  lw          $v0, 0x7A8C($a3)
    ctx->pc = 0x799e60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A8Cu));
    // 0x799e64: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x799e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x799e68: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x799E68u;
    {
        const bool branch_taken_0x799e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E68u;
        // 0x799e6c: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e68) {
            ctx->pc = 0x799E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799e50;
        }
    }
    ctx->pc = 0x799E70u;
    // 0x799e70: 0x3c0a005f  lui         $t2, 0x5F
    ctx->pc = 0x799e70u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)95 << 16));
label_799e74:
    // 0x799e74: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x799e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x799e78: 0x8d438658  lw          $v1, -0x79A8($t2)
    ctx->pc = 0x799e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294936152)));
    // 0x799e7c: 0x2450ae50  addiu       $s0, $v0, -0x51B0
    ctx->pc = 0x799e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946384));
    // 0x799e80: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x799e80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    // 0x799e84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e88: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799e8c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799e90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799e90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e94: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x799e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x799e98: 0xc04cccc  jal         func_133330
    ctx->pc = 0x799E98u;
    SET_GPR_U32(ctx, 31, 0x799EA0u);
    ctx->pc = 0x799E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E98u;
    // 0x799e9c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x799E98u, 0x799EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EA0u;
label_799ea0:
    // 0x799ea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ea4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799ea8: 0xc04cccc  jal         func_133330
    ctx->pc = 0x799EA8u;
    SET_GPR_U32(ctx, 31, 0x799EB0u);
    ctx->pc = 0x799EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EA8u;
    // 0x799eac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x799EA8u, 0x799EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EB0u;
label_799eb0:
    // 0x799eb0: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x799eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x799eb4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799EB4u;
    SET_GPR_U32(ctx, 31, 0x799EBCu);
    ctx->pc = 0x799EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EB4u;
    // 0x799eb8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799EB4u, 0x799EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EBCu;
label_799ebc:
    // 0x799ebc: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x799ebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x799ec0: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x799ec0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x799ec4: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x799ec4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x799ec8: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x799ec8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x799ecc: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x799eccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x799ed0: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x799ed0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x799ed4: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x799ed4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799ed8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x799ed8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799edc: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x799edcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799ee0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x799ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x799EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EE4u;
        // 0x799ee8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799EECu;
    // 0x799eec: 0x0  nop
    ctx->pc = 0x799eecu;
    // NOP
    ctx->pc = 0x799ef0u;
}
} // namespace gh_r205
