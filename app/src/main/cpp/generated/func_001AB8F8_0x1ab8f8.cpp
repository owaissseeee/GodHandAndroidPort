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

// Function: func_001AB8F8
// Address: 0x1ab8f8 - 0x1aba20
void func_001AB8F8_0x1ab8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001AB8F8_0x1ab8f8");
#endif

    switch (ctx->pc) {
        case 0x1ab9c0u: goto label_1ab9c0;
        case 0x1ab9d4u: goto label_1ab9d4;
        case 0x1aba00u: goto label_1aba00;
        case 0x1aba0cu: goto label_1aba0c;
        default: break;
    }

    ctx->pc = 0x1ab8f8u;

    // 0x1ab8f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ab8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ab8fc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ab8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1ab900: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ab900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ab904: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab908: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1ab908u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1ab90c: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x1ab90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1ab910: 0x920502f6  lbu         $a1, 0x2F6($s0)
    ctx->pc = 0x1ab910u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1ab914: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1ab914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1ab918: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ab918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ab91c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1ab91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1ab920: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1ab920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1ab924: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ab924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ab928: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1ab928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x1ab92c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x1ab92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1ab930: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ab930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ab934: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1ab934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1ab938: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x1ab938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1ab93c: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x1ab93cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1ab940: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1ab940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ab944: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1ab944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab948: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1ab948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab94c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1ab94cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1ab950: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AB950u;
    {
        const bool branch_taken_0x1ab950 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB950u;
        // 0x1ab954: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab950) {
            ctx->pc = 0x1AB968u;
            goto label_1ab968;
        }
    }
    ctx->pc = 0x1AB958u;
    // 0x1ab958: 0x10a2001c  beq         $a1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1AB958u;
    {
        const bool branch_taken_0x1ab958 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ab958) {
            ctx->pc = 0x1AB9CCu;
            goto label_1ab9cc;
        }
    }
    ctx->pc = 0x1AB960u;
    // 0x1ab960: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1AB960u;
    {
        const bool branch_taken_0x1ab960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB960u;
        // 0x1ab964: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab960) {
            ctx->pc = 0x1ABA10u;
            goto label_1aba10;
        }
    }
    ctx->pc = 0x1AB968u;
label_1ab968:
    // 0x1ab968: 0x8e0209d0  lw          $v0, 0x9D0($s0)
    ctx->pc = 0x1ab968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2512)));
    // 0x1ab96c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1ab96cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1ab970: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ab970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ab974: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AB974u;
    {
        const bool branch_taken_0x1ab974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab974) {
            ctx->pc = 0x1AB978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB974u;
            // 0x1ab978: 0x920202f7  lbu         $v0, 0x2F7($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB998u;
            goto label_1ab998;
        }
    }
    ctx->pc = 0x1AB97Cu;
    // 0x1ab97c: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1ab97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1ab980: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1ab980u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ab984: 0xae0209d4  sw          $v0, 0x9D4($s0)
    ctx->pc = 0x1ab984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2516), GPR_U32(ctx, 2));
    // 0x1ab988: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1ab988u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ab98c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1ab98cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ab990: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1AB990u;
    {
        const bool branch_taken_0x1ab990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB990u;
        // 0x1ab994: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab990) {
            ctx->pc = 0x1ABA0Cu;
            goto label_1aba0c;
        }
    }
    ctx->pc = 0x1AB998u;
label_1ab998:
    // 0x1ab998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab99c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ab99cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ab9a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ab9a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab9a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ab9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ab9a8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1ab9a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ab9ac: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1ab9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1ab9b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ab9b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab9b4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1ab9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ab9b8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1AB9B8u;
    SET_GPR_U32(ctx, 31, 0x1AB9C0u);
    ctx->pc = 0x1AB9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB9B8u;
    // 0x1ab9bc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1AB9B8u, 0x1AB9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB9C0u;
label_1ab9c0:
    // 0x1ab9c0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1ab9c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1ab9c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ab9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ab9c8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1ab9c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_1ab9cc:
    // 0x1ab9cc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1AB9CCu;
    SET_GPR_U32(ctx, 31, 0x1AB9D4u);
    ctx->pc = 0x1AB9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB9CCu;
    // 0x1ab9d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1AB9CCu, 0x1AB9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB9D4u;
label_1ab9d4:
    // 0x1ab9d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AB9D4u;
    {
        const bool branch_taken_0x1ab9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab9d4) {
            ctx->pc = 0x1AB9ECu;
            goto label_1ab9ec;
        }
    }
    ctx->pc = 0x1AB9DCu;
    // 0x1ab9dc: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1ab9dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ab9e0: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1ab9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ab9e4: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1ab9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ab9e8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1ab9e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_1ab9ec:
    // 0x1ab9ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ab9ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ab9f0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ab9f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ab9f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab9f8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x1AB9F8u;
    SET_GPR_U32(ctx, 31, 0x1ABA00u);
    ctx->pc = 0x1AB9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB9F8u;
    // 0x1ab9fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x1AB9F8u, 0x1ABA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABA00u;
label_1aba00:
    // 0x1aba00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aba00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba04: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x1ABA04u;
    SET_GPR_U32(ctx, 31, 0x1ABA0Cu);
    ctx->pc = 0x1ABA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABA04u;
    // 0x1aba08: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1ABA04u, 0x1ABA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABA0Cu;
label_1aba0c:
    // 0x1aba0c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1aba0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1aba10:
    // 0x1aba10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aba10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aba14: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1aba14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1aba18: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA18u;
        // 0x1aba1c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABA20u;
}
