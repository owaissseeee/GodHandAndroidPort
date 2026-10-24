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

// Function: cOmBase_updateWithHitRecord
// Address: 0x1c7e30 - 0x1c7f80
void cOmBase_updateWithHitRecord_0x1c7e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_updateWithHitRecord_0x1c7e30");
#endif

    switch (ctx->pc) {
        case 0x1c7e30u: goto label_1c7e30;
        case 0x1c7e34u: goto label_1c7e34;
        case 0x1c7e38u: goto label_1c7e38;
        case 0x1c7e3cu: goto label_1c7e3c;
        case 0x1c7e40u: goto label_1c7e40;
        case 0x1c7e44u: goto label_1c7e44;
        case 0x1c7e48u: goto label_1c7e48;
        case 0x1c7e4cu: goto label_1c7e4c;
        case 0x1c7e50u: goto label_1c7e50;
        case 0x1c7e54u: goto label_1c7e54;
        case 0x1c7e58u: goto label_1c7e58;
        case 0x1c7e5cu: goto label_1c7e5c;
        case 0x1c7e60u: goto label_1c7e60;
        case 0x1c7e64u: goto label_1c7e64;
        case 0x1c7e68u: goto label_1c7e68;
        case 0x1c7e6cu: goto label_1c7e6c;
        case 0x1c7e70u: goto label_1c7e70;
        case 0x1c7e74u: goto label_1c7e74;
        case 0x1c7e78u: goto label_1c7e78;
        case 0x1c7e7cu: goto label_1c7e7c;
        case 0x1c7e80u: goto label_1c7e80;
        case 0x1c7e84u: goto label_1c7e84;
        case 0x1c7e88u: goto label_1c7e88;
        case 0x1c7e8cu: goto label_1c7e8c;
        case 0x1c7e90u: goto label_1c7e90;
        case 0x1c7e94u: goto label_1c7e94;
        case 0x1c7e98u: goto label_1c7e98;
        case 0x1c7e9cu: goto label_1c7e9c;
        case 0x1c7ea0u: goto label_1c7ea0;
        case 0x1c7ea4u: goto label_1c7ea4;
        case 0x1c7ea8u: goto label_1c7ea8;
        case 0x1c7eacu: goto label_1c7eac;
        case 0x1c7eb0u: goto label_1c7eb0;
        case 0x1c7eb4u: goto label_1c7eb4;
        case 0x1c7eb8u: goto label_1c7eb8;
        case 0x1c7ebcu: goto label_1c7ebc;
        case 0x1c7ec0u: goto label_1c7ec0;
        case 0x1c7ec4u: goto label_1c7ec4;
        case 0x1c7ec8u: goto label_1c7ec8;
        case 0x1c7eccu: goto label_1c7ecc;
        case 0x1c7ed0u: goto label_1c7ed0;
        case 0x1c7ed4u: goto label_1c7ed4;
        case 0x1c7ed8u: goto label_1c7ed8;
        case 0x1c7edcu: goto label_1c7edc;
        case 0x1c7ee0u: goto label_1c7ee0;
        case 0x1c7ee4u: goto label_1c7ee4;
        case 0x1c7ee8u: goto label_1c7ee8;
        case 0x1c7eecu: goto label_1c7eec;
        case 0x1c7ef0u: goto label_1c7ef0;
        case 0x1c7ef4u: goto label_1c7ef4;
        case 0x1c7ef8u: goto label_1c7ef8;
        case 0x1c7efcu: goto label_1c7efc;
        case 0x1c7f00u: goto label_1c7f00;
        case 0x1c7f04u: goto label_1c7f04;
        case 0x1c7f08u: goto label_1c7f08;
        case 0x1c7f0cu: goto label_1c7f0c;
        case 0x1c7f10u: goto label_1c7f10;
        case 0x1c7f14u: goto label_1c7f14;
        case 0x1c7f18u: goto label_1c7f18;
        case 0x1c7f1cu: goto label_1c7f1c;
        case 0x1c7f20u: goto label_1c7f20;
        case 0x1c7f24u: goto label_1c7f24;
        case 0x1c7f28u: goto label_1c7f28;
        case 0x1c7f2cu: goto label_1c7f2c;
        case 0x1c7f30u: goto label_1c7f30;
        case 0x1c7f34u: goto label_1c7f34;
        case 0x1c7f38u: goto label_1c7f38;
        case 0x1c7f3cu: goto label_1c7f3c;
        case 0x1c7f40u: goto label_1c7f40;
        case 0x1c7f44u: goto label_1c7f44;
        case 0x1c7f48u: goto label_1c7f48;
        case 0x1c7f4cu: goto label_1c7f4c;
        case 0x1c7f50u: goto label_1c7f50;
        case 0x1c7f54u: goto label_1c7f54;
        case 0x1c7f58u: goto label_1c7f58;
        case 0x1c7f5cu: goto label_1c7f5c;
        case 0x1c7f60u: goto label_1c7f60;
        case 0x1c7f64u: goto label_1c7f64;
        case 0x1c7f68u: goto label_1c7f68;
        case 0x1c7f6cu: goto label_1c7f6c;
        case 0x1c7f70u: goto label_1c7f70;
        case 0x1c7f74u: goto label_1c7f74;
        case 0x1c7f78u: goto label_1c7f78;
        case 0x1c7f7cu: goto label_1c7f7c;
        default: break;
    }

    ctx->pc = 0x1c7e30u;

label_1c7e30:
    // 0x1c7e30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c7e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1c7e34:
    // 0x1c7e34: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1c7e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1c7e38:
    // 0x1c7e38: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c7e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1c7e3c:
    // 0x1c7e3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c7e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c7e40:
    // 0x1c7e40: 0xc06ddac  jal         func_1B76B0
label_1c7e44:
    if (ctx->pc == 0x1C7E44u) {
        ctx->pc = 0x1C7E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7E40u;
        // 0x1c7e44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7E48u;
        goto label_1c7e48;
    }
    ctx->pc = 0x1C7E40u;
    SET_GPR_U32(ctx, 31, 0x1C7E48u);
    ctx->pc = 0x1C7E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7E40u;
    // 0x1c7e44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1C7E40u, 0x1C7E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E48u;
label_1c7e48:
    // 0x1c7e48: 0x50400048  beql        $v0, $zero, . + 4 + (0x48 << 2)
label_1c7e4c:
    if (ctx->pc == 0x1C7E4Cu) {
        ctx->pc = 0x1C7E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7E48u;
        // 0x1c7e4c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7E50u;
        goto label_1c7e50;
    }
    ctx->pc = 0x1C7E48u;
    {
        const bool branch_taken_0x1c7e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7e48) {
            ctx->pc = 0x1C7E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7E48u;
            // 0x1c7e4c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7F6Cu;
            goto label_1c7f6c;
        }
    }
    ctx->pc = 0x1C7E50u;
label_1c7e50:
    // 0x1c7e50: 0x8e020600  lw          $v0, 0x600($s0)
    ctx->pc = 0x1c7e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
label_1c7e54:
    // 0x1c7e54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c7e58:
    if (ctx->pc == 0x1C7E58u) {
        ctx->pc = 0x1C7E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7E54u;
        // 0x1c7e58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7E5Cu;
        goto label_1c7e5c;
    }
    ctx->pc = 0x1C7E54u;
    {
        const bool branch_taken_0x1c7e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7E54u;
        // 0x1c7e58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7e54) {
            ctx->pc = 0x1C7E70u;
            goto label_1c7e70;
        }
    }
    ctx->pc = 0x1C7E5Cu;
label_1c7e5c:
    // 0x1c7e5c: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x1c7e5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_1c7e60:
    // 0x1c7e60: 0x8e020600  lw          $v0, 0x600($s0)
    ctx->pc = 0x1c7e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
label_1c7e64:
    // 0x1c7e64: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x1c7e64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
label_1c7e68:
    // 0x1c7e68: 0xc07f59a  jal         func_1FD668
label_1c7e6c:
    if (ctx->pc == 0x1C7E6Cu) {
        ctx->pc = 0x1C7E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7E68u;
        // 0x1c7e6c: 0x8e040600  lw          $a0, 0x600($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7E70u;
        goto label_1c7e70;
    }
    ctx->pc = 0x1C7E68u;
    SET_GPR_U32(ctx, 31, 0x1C7E70u);
    ctx->pc = 0x1C7E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7E68u;
    // 0x1c7e6c: 0x8e040600  lw          $a0, 0x600($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1C7E68u, 0x1C7E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E70u;
label_1c7e70:
    // 0x1c7e70: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1c7e70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1c7e74:
    // 0x1c7e74: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1c7e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_1c7e78:
    // 0x1c7e78: 0x24479dd0  addiu       $a3, $v0, -0x6230
    ctx->pc = 0x1c7e78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942160));
label_1c7e7c:
    // 0x1c7e7c: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x1c7e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1c7e80:
    // 0x1c7e80: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x1c7e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1c7e84:
    // 0x1c7e84: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x1c7e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c7e88:
    // 0x1c7e88: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x1c7e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c7e8c:
    // 0x1c7e8c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1c7e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1c7e90:
    // 0x1c7e90: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x1c7e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_1c7e94:
    // 0x1c7e94: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x1c7e94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1c7e98:
    // 0x1c7e98: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1c7e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1c7e9c:
    // 0x1c7e9c: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x1c7e9cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_1c7ea0:
    // 0x1c7ea0: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_1c7ea4:
    if (ctx->pc == 0x1C7EA4u) {
        ctx->pc = 0x1C7EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7EA0u;
        // 0x1c7ea4: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7EA8u;
        goto label_1c7ea8;
    }
    ctx->pc = 0x1C7EA0u;
    {
        const bool branch_taken_0x1c7ea0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1C7EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7EA0u;
        // 0x1c7ea4: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7ea0) {
            ctx->pc = 0x1C7ED4u;
            goto label_1c7ed4;
        }
    }
    ctx->pc = 0x1C7EA8u;
label_1c7ea8:
    // 0x1c7ea8: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x1c7ea8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1c7eac:
    // 0x1c7eac: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1c7eacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1c7eb0:
    // 0x1c7eb0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1c7eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1c7eb4:
    // 0x1c7eb4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1c7eb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1c7eb8:
    // 0x1c7eb8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1c7eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1c7ebc:
    // 0x1c7ebc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c7ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c7ec0:
    // 0x1c7ec0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1c7ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1c7ec4:
    // 0x1c7ec4: 0xdc91fff8  ld          $s1, -0x8($a0)
    ctx->pc = 0x1c7ec4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_1c7ec8:
    // 0x1c7ec8: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1c7ec8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1c7ecc:
    // 0x1c7ecc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1c7ed0:
    if (ctx->pc == 0x1C7ED0u) {
        ctx->pc = 0x1C7ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7ECCu;
        // 0x1c7ed0: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7ED4u;
        goto label_1c7ed4;
    }
    ctx->pc = 0x1C7ECCu;
    {
        const bool branch_taken_0x1c7ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7ECCu;
        // 0x1c7ed0: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7ecc) {
            ctx->pc = 0x1C7EE0u;
            goto label_1c7ee0;
        }
    }
    ctx->pc = 0x1C7ED4u;
label_1c7ed4:
    // 0x1c7ed4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c7ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c7ed8:
    // 0x1c7ed8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1c7ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c7edc:
    // 0x1c7edc: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x1c7edcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1c7ee0:
    // 0x1c7ee0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1c7ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1c7ee4:
    // 0x1c7ee4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1c7ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1c7ee8:
    // 0x1c7ee8: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1c7eec:
    if (ctx->pc == 0x1C7EECu) {
        ctx->pc = 0x1C7EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7EE8u;
        // 0x1c7eec: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7EF0u;
        goto label_1c7ef0;
    }
    ctx->pc = 0x1C7EE8u;
    {
        const bool branch_taken_0x1c7ee8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1C7EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7EE8u;
        // 0x1c7eec: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7ee8) {
            ctx->pc = 0x1C7F04u;
            goto label_1c7f04;
        }
    }
    ctx->pc = 0x1C7EF0u;
label_1c7ef0:
    // 0x1c7ef0: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1c7ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1c7ef4:
    // 0x1c7ef4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1c7ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1c7ef8:
    // 0x1c7ef8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1c7ef8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1c7efc:
    // 0x1c7efc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c7f00:
    if (ctx->pc == 0x1C7F00u) {
        ctx->pc = 0x1C7F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7EFCu;
        // 0x1c7f00: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7F04u;
        goto label_1c7f04;
    }
    ctx->pc = 0x1C7EFCu;
    {
        const bool branch_taken_0x1c7efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7EFCu;
        // 0x1c7f00: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7efc) {
            ctx->pc = 0x1C7F08u;
            goto label_1c7f08;
        }
    }
    ctx->pc = 0x1C7F04u;
label_1c7f04:
    // 0x1c7f04: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c7f04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c7f08:
    // 0x1c7f08: 0xc0f809  jalr        $a2
label_1c7f0c:
    if (ctx->pc == 0x1C7F0Cu) {
        ctx->pc = 0x1C7F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7F08u;
        // 0x1c7f0c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7F10u;
        goto label_1c7f10;
    }
    ctx->pc = 0x1C7F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1C7F10u);
        ctx->pc = 0x1C7F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7F08u;
        // 0x1c7f0c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7F08u, 0x1C7F10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C7F10u;
label_1c7f10:
    // 0x1c7f10: 0xc0527ae  jal         func_149EB8
label_1c7f14:
    if (ctx->pc == 0x1C7F14u) {
        ctx->pc = 0x1C7F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7F10u;
        // 0x1c7f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7F18u;
        goto label_1c7f18;
    }
    ctx->pc = 0x1C7F10u;
    SET_GPR_U32(ctx, 31, 0x1C7F18u);
    ctx->pc = 0x1C7F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7F10u;
    // 0x1c7f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1C7F10u, 0x1C7F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7F18u;
label_1c7f18:
    // 0x1c7f18: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1c7f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1c7f1c:
    // 0x1c7f1c: 0x26030490  addiu       $v1, $s0, 0x490
    ctx->pc = 0x1c7f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
label_1c7f20:
    // 0x1c7f20: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_1c7f24:
    if (ctx->pc == 0x1C7F24u) {
        ctx->pc = 0x1C7F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7F20u;
        // 0x1c7f24: 0x260305d0  addiu       $v1, $s0, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7F28u;
        goto label_1c7f28;
    }
    ctx->pc = 0x1C7F20u;
    {
        const bool branch_taken_0x1c7f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c7f20) {
            ctx->pc = 0x1C7F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7F20u;
            // 0x1c7f24: 0x260305d0  addiu       $v1, $s0, 0x5D0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1488));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7F44u;
            goto label_1c7f44;
        }
    }
    ctx->pc = 0x1C7F28u;
label_1c7f28:
    // 0x1c7f28: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1c7f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7f2c:
    // 0x1c7f2c: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x1c7f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
label_1c7f30:
    // 0x1c7f30: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1c7f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7f34:
    // 0x1c7f34: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1c7f34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1c7f38:
    // 0x1c7f38: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c7f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7f3c:
    // 0x1c7f3c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c7f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1c7f40:
    // 0x1c7f40: 0x260305d0  addiu       $v1, $s0, 0x5D0
    ctx->pc = 0x1c7f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1488));
label_1c7f44:
    // 0x1c7f44: 0x26020100  addiu       $v0, $s0, 0x100
    ctx->pc = 0x1c7f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_1c7f48:
    // 0x1c7f48: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_1c7f4c:
    if (ctx->pc == 0x1C7F4Cu) {
        ctx->pc = 0x1C7F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7F48u;
        // 0x1c7f4c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7F50u;
        goto label_1c7f50;
    }
    ctx->pc = 0x1C7F48u;
    {
        const bool branch_taken_0x1c7f48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c7f48) {
            ctx->pc = 0x1C7F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7F48u;
            // 0x1c7f4c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7F6Cu;
            goto label_1c7f6c;
        }
    }
    ctx->pc = 0x1C7F50u;
label_1c7f50:
    // 0x1c7f50: 0xc6000100  lwc1        $f0, 0x100($s0)
    ctx->pc = 0x1c7f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7f54:
    // 0x1c7f54: 0xe60005d0  swc1        $f0, 0x5D0($s0)
    ctx->pc = 0x1c7f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1488), bits); }
label_1c7f58:
    // 0x1c7f58: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1c7f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7f5c:
    // 0x1c7f5c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1c7f5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1c7f60:
    // 0x1c7f60: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c7f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7f64:
    // 0x1c7f64: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c7f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1c7f68:
    // 0x1c7f68: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1c7f68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c7f6c:
    // 0x1c7f6c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c7f6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c7f70:
    // 0x1c7f70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c7f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c7f74:
    // 0x1c7f74: 0x3e00008  jr          $ra
label_1c7f78:
    if (ctx->pc == 0x1C7F78u) {
        ctx->pc = 0x1C7F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7F74u;
        // 0x1c7f78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7F7Cu;
        goto label_1c7f7c;
    }
    ctx->pc = 0x1C7F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7F74u;
        // 0x1c7f78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7F7Cu;
label_1c7f7c:
    // 0x1c7f7c: 0x0  nop
    ctx->pc = 0x1c7f7cu;
    // NOP
    ctx->pc = 0x1c7f80u;
}
