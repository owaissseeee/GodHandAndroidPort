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

// Function: func_00143BE8
// Address: 0x143be8 - 0x143d20
void func_00143BE8_0x143be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00143BE8_0x143be8");
#endif

    switch (ctx->pc) {
        case 0x143c30u: goto label_143c30;
        case 0x143c48u: goto label_143c48;
        case 0x143c54u: goto label_143c54;
        case 0x143c60u: goto label_143c60;
        case 0x143c68u: goto label_143c68;
        case 0x143c74u: goto label_143c74;
        case 0x143c7cu: goto label_143c7c;
        case 0x143c88u: goto label_143c88;
        case 0x143c90u: goto label_143c90;
        case 0x143cbcu: goto label_143cbc;
        case 0x143cccu: goto label_143ccc;
        case 0x143cdcu: goto label_143cdc;
        default: break;
    }

    ctx->pc = 0x143be8u;

    // 0x143be8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x143be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x143bec: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x143becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x143bf0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x143bf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143bf4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x143bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x143bf8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x143bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x143bfc: 0x26900500  addiu       $s0, $s4, 0x500
    ctx->pc = 0x143bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 1280));
    // 0x143c00: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x143c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x143c04: 0x26910550  addiu       $s1, $s4, 0x550
    ctx->pc = 0x143c04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 1360));
    // 0x143c08: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x143c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x143c0c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x143c0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143c10: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x143c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x143c14: 0x269304b0  addiu       $s3, $s4, 0x4B0
    ctx->pc = 0x143c14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1200));
    // 0x143c18: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x143c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x143c1c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x143c1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143c20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x143c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x143c24: 0x269604a0  addiu       $s6, $s4, 0x4A0
    ctx->pc = 0x143c24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 1184));
    // 0x143c28: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x143C28u;
    SET_GPR_U32(ctx, 31, 0x143C30u);
    ctx->pc = 0x143C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143C28u;
    // 0x143c2c: 0xae800090  sw          $zero, 0x90($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x143C28u, 0x143C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143C30u;
label_143c30:
    // 0x143c30: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x143c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x143c34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x143c34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143c38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x143c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143c3c: 0xae820098  sw          $v0, 0x98($s4)
    ctx->pc = 0x143c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 152), GPR_U32(ctx, 2));
    // 0x143c40: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x143C40u;
    SET_GPR_U32(ctx, 31, 0x143C48u);
    ctx->pc = 0x143C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143C40u;
    // 0x143c44: 0xe68005d0  swc1        $f0, 0x5D0($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1488), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x143C40u, 0x143C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143C48u;
label_143c48:
    // 0x143c48: 0xa292001c  sb          $s2, 0x1C($s4)
    ctx->pc = 0x143c48u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 28), (uint8_t)GPR_U32(ctx, 18));
    // 0x143c4c: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x143C4Cu;
    SET_GPR_U32(ctx, 31, 0x143C54u);
    ctx->pc = 0x143C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143C4Cu;
    // 0x143c50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x143C4Cu, 0x143C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143C54u;
label_143c54:
    // 0x143c54: 0xa212001c  sb          $s2, 0x1C($s0)
    ctx->pc = 0x143c54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 18));
    // 0x143c58: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x143C58u;
    SET_GPR_U32(ctx, 31, 0x143C60u);
    ctx->pc = 0x143C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143C58u;
    // 0x143c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x143C58u, 0x143C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143C60u;
label_143c60:
    // 0x143c60: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x143C60u;
    SET_GPR_U32(ctx, 31, 0x143C68u);
    ctx->pc = 0x143C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143C60u;
    // 0x143c64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x143C60u, 0x143C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143C68u;
label_143c68:
    // 0x143c68: 0xa232001c  sb          $s2, 0x1C($s1)
    ctx->pc = 0x143c68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 18));
    // 0x143c6c: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x143C6Cu;
    SET_GPR_U32(ctx, 31, 0x143C74u);
    ctx->pc = 0x143C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143C6Cu;
    // 0x143c70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x143C6Cu, 0x143C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143C74u;
label_143c74:
    // 0x143c74: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x143C74u;
    SET_GPR_U32(ctx, 31, 0x143C7Cu);
    ctx->pc = 0x143C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143C74u;
    // 0x143c78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x143C74u, 0x143C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143C7Cu;
label_143c7c:
    // 0x143c7c: 0xa272001c  sb          $s2, 0x1C($s3)
    ctx->pc = 0x143c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 28), (uint8_t)GPR_U32(ctx, 18));
    // 0x143c80: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x143c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143c84: 0x0  nop
    ctx->pc = 0x143c84u;
    // NOP
label_143c88:
    // 0x143c88: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x143C88u;
    SET_GPR_U32(ctx, 31, 0x143C90u);
    ctx->pc = 0x143C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143C88u;
    // 0x143c8c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x143C88u, 0x143C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143C90u;
label_143c90:
    // 0x143c90: 0x152080  sll         $a0, $s5, 2
    ctx->pc = 0x143c90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x143c94: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x143c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x143c98: 0x2c42021  addu        $a0, $s6, $a0
    ctx->pc = 0x143c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x143c9c: 0x3075ffff  andi        $s5, $v1, 0xFFFF
    ctx->pc = 0x143c9cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x143ca0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x143ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x143ca4: 0x2ea20002  sltiu       $v0, $s5, 0x2
    ctx->pc = 0x143ca4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x143ca8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x143CA8u;
    {
        const bool branch_taken_0x143ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x143CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143CA8u;
        // 0x143cac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ca8) {
            ctx->pc = 0x143C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143c88;
        }
    }
    ctx->pc = 0x143CB0u;
    // 0x143cb0: 0x26840500  addiu       $a0, $s4, 0x500
    ctx->pc = 0x143cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1280));
    // 0x143cb4: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x143CB4u;
    SET_GPR_U32(ctx, 31, 0x143CBCu);
    ctx->pc = 0x143CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143CB4u;
    // 0x143cb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x143CB4u, 0x143CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143CBCu;
label_143cbc:
    // 0x143cbc: 0x26840550  addiu       $a0, $s4, 0x550
    ctx->pc = 0x143cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1360));
    // 0x143cc0: 0xae8205a4  sw          $v0, 0x5A4($s4)
    ctx->pc = 0x143cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1444), GPR_U32(ctx, 2));
    // 0x143cc4: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x143CC4u;
    SET_GPR_U32(ctx, 31, 0x143CCCu);
    ctx->pc = 0x143CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143CC4u;
    // 0x143cc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x143CC4u, 0x143CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143CCCu;
label_143ccc:
    // 0x143ccc: 0x268404b0  addiu       $a0, $s4, 0x4B0
    ctx->pc = 0x143cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1200));
    // 0x143cd0: 0xae8205a8  sw          $v0, 0x5A8($s4)
    ctx->pc = 0x143cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1448), GPR_U32(ctx, 2));
    // 0x143cd4: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x143CD4u;
    SET_GPR_U32(ctx, 31, 0x143CDCu);
    ctx->pc = 0x143CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143CD4u;
    // 0x143cd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x143CD4u, 0x143CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143CDCu;
label_143cdc:
    // 0x143cdc: 0x3c038080  lui         $v1, 0x8080
    ctx->pc = 0x143cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
    // 0x143ce0: 0xae8205a0  sw          $v0, 0x5A0($s4)
    ctx->pc = 0x143ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1440), GPR_U32(ctx, 2));
    // 0x143ce4: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x143ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x143ce8: 0xa28005dc  sb          $zero, 0x5DC($s4)
    ctx->pc = 0x143ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1500), (uint8_t)GPR_U32(ctx, 0));
    // 0x143cec: 0xae8305d8  sw          $v1, 0x5D8($s4)
    ctx->pc = 0x143cecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1496), GPR_U32(ctx, 3));
    // 0x143cf0: 0xa28005dd  sb          $zero, 0x5DD($s4)
    ctx->pc = 0x143cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1501), (uint8_t)GPR_U32(ctx, 0));
    // 0x143cf4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x143cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x143cf8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x143cf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x143cfc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x143cfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x143d00: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x143d00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x143d04: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x143d04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x143d08: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x143d08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143d0c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x143d0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143d10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143d14: 0x3e00008  jr          $ra
    ctx->pc = 0x143D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143D14u;
        // 0x143d18: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143D1Cu;
    // 0x143d1c: 0x0  nop
    ctx->pc = 0x143d1cu;
    // NOP
    ctx->pc = 0x143d20u;
}
