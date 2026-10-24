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

// Function: func_002E0DE8
// Address: 0x2e0de8 - 0x2e0f18
void func_002E0DE8_0x2e0de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E0DE8_0x2e0de8");
#endif

    switch (ctx->pc) {
        case 0x2e0e8cu: goto label_2e0e8c;
        case 0x2e0ef4u: goto label_2e0ef4;
        default: break;
    }

    ctx->pc = 0x2e0de8u;

    // 0x2e0de8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2e0de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2e0dec: 0x52cc0  sll         $a1, $a1, 19
    ctx->pc = 0x2e0decu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 19));
    // 0x2e0df0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2e0df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2e0df4: 0x424c0  sll         $a0, $a0, 19
    ctx->pc = 0x2e0df4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 19));
    // 0x2e0df8: 0x59403  sra         $s2, $a1, 16
    ctx->pc = 0x2e0df8u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2e0dfc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2e0dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2e0e00: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2e0e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2e0e04: 0x48c03  sra         $s1, $a0, 16
    ctx->pc = 0x2e0e04u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 4), 16));
    // 0x2e0e08: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2e0e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x2e0e0c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2e0e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0e10: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2e0e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2e0e14: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2e0e14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0e18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e0e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e0e1c: 0x24140008  addiu       $s4, $zero, 0x8
    ctx->pc = 0x2e0e1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e0e20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e0e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e0e24: 0x2a42fff8  slti        $v0, $s2, -0x8
    ctx->pc = 0x2e0e24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4294967288) ? 1 : 0);
    // 0x2e0e28: 0xffa800b0  sd          $t0, 0xB0($sp)
    ctx->pc = 0x2e0e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 8));
    // 0x2e0e2c: 0xffa900b8  sd          $t1, 0xB8($sp)
    ctx->pc = 0x2e0e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 9));
    // 0x2e0e30: 0xffaa00c0  sd          $t2, 0xC0($sp)
    ctx->pc = 0x2e0e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 10));
    // 0x2e0e34: 0xffab00c8  sd          $t3, 0xC8($sp)
    ctx->pc = 0x2e0e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 11));
    // 0x2e0e38: 0xe7ac00a0  swc1        $f12, 0xA0($sp)
    ctx->pc = 0x2e0e38u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2e0e3c: 0xe7ae00a4  swc1        $f14, 0xA4($sp)
    ctx->pc = 0x2e0e3cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2e0e40: 0xe7b000a8  swc1        $f16, 0xA8($sp)
    ctx->pc = 0x2e0e40u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2e0e44: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2E0E44u;
    {
        const bool branch_taken_0x2e0e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0E44u;
        // 0x2e0e48: 0xe7b200ac  swc1        $f18, 0xAC($sp) (Delay Slot)
        { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0e44) {
            ctx->pc = 0x2E0EF4u;
            goto label_2e0ef4;
        }
    }
    ctx->pc = 0x2E0E4Cu;
    // 0x2e0e4c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2e0e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2e0e50: 0x8c62118c  lw          $v0, 0x118C($v1)
    ctx->pc = 0x2e0e50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2e0e54: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2e0e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2e0e58: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2e0e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2e0e5c: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x2e0e5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2e0e60: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2E0E60u;
    {
        const bool branch_taken_0x2e0e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0E60u;
        // 0x2e0e64: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0e60) {
            ctx->pc = 0x2E0EF8u;
            goto label_2e0ef8;
        }
    }
    ctx->pc = 0x2E0E68u;
    // 0x2e0e68: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x2e0e68u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x2e0e6c: 0x8e621180  lw          $v0, 0x1180($s3)
    ctx->pc = 0x2e0e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2e0e70: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2e0e70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e0e74: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2E0E74u;
    {
        const bool branch_taken_0x2e0e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0E74u;
        // 0x2e0e78: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0e74) {
            ctx->pc = 0x2E0EF8u;
            goto label_2e0ef8;
        }
    }
    ctx->pc = 0x2E0E7Cu;
    // 0x2e0e7c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2e0e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2e0e80: 0x2450b298  addiu       $s0, $v0, -0x4D68
    ctx->pc = 0x2e0e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947480));
    // 0x2e0e84: 0xc0e9eba  jal         func_3A7AE8
    ctx->pc = 0x2E0E84u;
    SET_GPR_U32(ctx, 31, 0x2E0E8Cu);
    ctx->pc = 0x2E0E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0E84u;
    // 0x2e0e88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7AE8u, 0x2E0E84u, 0x2E0E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0E8Cu;
label_2e0e8c:
    // 0x2e0e8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e0e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0e90: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2e0e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e0e94: 0x28420200  slti        $v0, $v0, 0x200
    ctx->pc = 0x2e0e94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x2e0e98: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0E98u;
    {
        const bool branch_taken_0x2e0e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0E98u;
        // 0x2e0e9c: 0x8e631180  lw          $v1, 0x1180($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0e98) {
            ctx->pc = 0x2E0EACu;
            goto label_2e0eac;
        }
    }
    ctx->pc = 0x2E0EA0u;
    // 0x2e0ea0: 0x3c011111  lui         $at, 0x1111
    ctx->pc = 0x2e0ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4369 << 16));
    // 0x2e0ea4: 0xac201111  sw          $zero, 0x1111($at)
    ctx->pc = 0x2e0ea4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x11111111u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x11111111u, _value); } while (0);
    // 0x2e0ea8: 0x8e631180  lw          $v1, 0x1180($s3)
    ctx->pc = 0x2e0ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
label_2e0eac:
    // 0x2e0eac: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x2e0eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2e0eb0: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x2e0eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2e0eb4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2e0eb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e0eb8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E0EB8u;
    {
        const bool branch_taken_0x2e0eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0EB8u;
        // 0x2e0ebc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0eb8) {
            ctx->pc = 0x2E0EDCu;
            goto label_2e0edc;
        }
    }
    ctx->pc = 0x2E0EC0u;
    // 0x2e0ec0: 0x74001a  div         $zero, $v1, $s4
    ctx->pc = 0x2e0ec0u;
    { int32_t divisor = GPR_S32(ctx, 20);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2e0ec4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E0EC4u;
    {
        const bool branch_taken_0x2e0ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0ec4) {
            ctx->pc = 0x2E0EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0EC4u;
            // 0x2e0ec8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0ECCu;
            goto label_2e0ecc;
        }
    }
    ctx->pc = 0x2E0ECCu;
label_2e0ecc:
    // 0x2e0ecc: 0x1812  mflo        $v1
    ctx->pc = 0x2e0eccu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2e0ed0: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E0ED0u;
    {
        const bool branch_taken_0x2e0ed0 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2E0ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0ED0u;
        // 0x2e0ed4: 0x701021  addu        $v0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0ed0) {
            ctx->pc = 0x2E0EF4u;
            goto label_2e0ef4;
        }
    }
    ctx->pc = 0x2E0ED8u;
    // 0x2e0ed8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2e0ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_2e0edc:
    // 0x2e0edc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e0edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0ee0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e0ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0ee4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e0ee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0ee8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2e0ee8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0eec: 0xc0b83c6  jal         func_2E0F18
    ctx->pc = 0x2E0EECu;
    SET_GPR_U32(ctx, 31, 0x2E0EF4u);
    ctx->pc = 0x2E0EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0EECu;
    // 0x2e0ef0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0F18u, 0x2E0EECu, 0x2E0EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0EF4u;
label_2e0ef4:
    // 0x2e0ef4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2e0ef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2e0ef8:
    // 0x2e0ef8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2e0ef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e0efc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2e0efcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e0f00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e0f00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e0f04: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2e0f04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0f08: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2e0f08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0f0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e0f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0f10: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0F10u;
        // 0x2e0f14: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0F18u;
}
