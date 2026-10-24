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

// Function: func_002A8038
// Address: 0x2a8038 - 0x2a84a8
void func_002A8038_0x2a8038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A8038_0x2a8038");
#endif

    switch (ctx->pc) {
        case 0x2a80bcu: goto label_2a80bc;
        case 0x2a80d0u: goto label_2a80d0;
        case 0x2a8194u: goto label_2a8194;
        case 0x2a81d8u: goto label_2a81d8;
        case 0x2a8240u: goto label_2a8240;
        case 0x2a82d4u: goto label_2a82d4;
        case 0x2a836cu: goto label_2a836c;
        case 0x2a83a8u: goto label_2a83a8;
        case 0x2a83fcu: goto label_2a83fc;
        case 0x2a8430u: goto label_2a8430;
        default: break;
    }

    ctx->pc = 0x2a8038u;

    // 0x2a8038: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2a8038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2a803c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2a803cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2a8040: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x2a8040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
    // 0x2a8044: 0x2442ac90  addiu       $v0, $v0, -0x5370
    ctx->pc = 0x2a8044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945936));
    // 0x2a8048: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x2a8048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x2a804c: 0x2456018c  addiu       $s6, $v0, 0x18C
    ctx->pc = 0x2a804cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 396));
    // 0x2a8050: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x2a8050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x2a8054: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2a8054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2a8058: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x2a8058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x2a805c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a805cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8060: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x2a8060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x2a8064: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2a8064u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8068: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x2a8068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
    // 0x2a806c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2a806cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a8070: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x2a8070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x2a8074: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a8074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8078: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x2a8078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x2a807c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2a807cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2a8080: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x2a8080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x2a8084: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a8084u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8088: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2a8088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2a808c: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x2a808cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x2a8090: 0x2449ae10  addiu       $t1, $v0, -0x51F0
    ctx->pc = 0x2a8090u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946320));
    // 0x2a8094: 0x69230007  ldl         $v1, 0x7($t1)
    ctx->pc = 0x2a8094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2a8098: 0x6d230000  ldr         $v1, 0x0($t1)
    ctx->pc = 0x2a8098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2a809c: 0x6927000f  ldl         $a3, 0xF($t1)
    ctx->pc = 0x2a809cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2a80a0: 0x6d270008  ldr         $a3, 0x8($t1)
    ctx->pc = 0x2a80a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2a80a4: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x2a80a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a80a8: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x2a80a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a80ac: 0xb3a7003f  sdl         $a3, 0x3F($sp)
    ctx->pc = 0x2a80acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a80b0: 0xb7a70038  sdr         $a3, 0x38($sp)
    ctx->pc = 0x2a80b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a80b4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2A80B4u;
    SET_GPR_U32(ctx, 31, 0x2A80BCu);
    ctx->pc = 0x2A80B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A80B4u;
    // 0x2a80b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2A80B4u, 0x2A80BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A80BCu;
label_2a80bc:
    // 0x2a80bc: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x2a80bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x2a80c0: 0x18400056  blez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x2A80C0u;
    {
        const bool branch_taken_0x2a80c0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2A80C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A80C0u;
        // 0x2a80c4: 0x27b70030  addiu       $s7, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a80c0) {
            ctx->pc = 0x2A821Cu;
            goto label_2a821c;
        }
    }
    ctx->pc = 0x2A80C8u;
    // 0x2a80c8: 0x3c154000  lui         $s5, 0x4000
    ctx->pc = 0x2a80c8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)16384 << 16));
    // 0x2a80cc: 0x0  nop
    ctx->pc = 0x2a80ccu;
    // NOP
label_2a80d0:
    // 0x2a80d0: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A80D0u;
    {
        const bool branch_taken_0x2a80d0 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x2A80D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A80D0u;
        // 0x2a80d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a80d0) {
            ctx->pc = 0x2A80E0u;
            goto label_2a80e0;
        }
    }
    ctx->pc = 0x2A80D8u;
    // 0x2a80d8: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x2a80d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x2a80dc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2a80dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2a80e0:
    // 0x2a80e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a80e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a80e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A80E4u;
    {
        const bool branch_taken_0x2a80e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A80E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A80E4u;
        // 0x2a80e8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a80e4) {
            ctx->pc = 0x2A80F4u;
            goto label_2a80f4;
        }
    }
    ctx->pc = 0x2A80ECu;
    // 0x2a80ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A80ECu;
    {
        const bool branch_taken_0x2a80ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A80F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A80ECu;
        // 0x2a80f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a80ec) {
            ctx->pc = 0x2A8100u;
            goto label_2a8100;
        }
    }
    ctx->pc = 0x2A80F4u;
label_2a80f4:
    // 0x2a80f4: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x2a80f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2a80f8: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x2a80f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a80fc: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x2a80fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a8100:
    // 0x2a8100: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2a8100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2a8104: 0x751024  and         $v0, $v1, $s5
    ctx->pc = 0x2a8104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 21));
    // 0x2a8108: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A8108u;
    {
        const bool branch_taken_0x2a8108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a8108) {
            ctx->pc = 0x2A810Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8108u;
            // 0x2a810c: 0x96240000  lhu         $a0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A811Cu;
            goto label_2a811c;
        }
    }
    ctx->pc = 0x2A8110u;
    // 0x2a8110: 0x460003d  bltz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x2A8110u;
    {
        const bool branch_taken_0x2a8110 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2A8114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8110u;
        // 0x2a8114: 0x26460001  addiu       $a2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8110) {
            ctx->pc = 0x2A8208u;
            goto label_2a8208;
        }
    }
    ctx->pc = 0x2A8118u;
    // 0x2a8118: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x2a8118u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_2a811c:
    // 0x2a811c: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x2a811cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2a8120: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A8120u;
    {
        const bool branch_taken_0x2a8120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8120u;
        // 0x2a8124: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8120) {
            ctx->pc = 0x2A8134u;
            goto label_2a8134;
        }
    }
    ctx->pc = 0x2A8128u;
    // 0x2a8128: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x2a8128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x2a812c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2a812cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a8130: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a8130u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a8134:
    // 0x2a8134: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2a8134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2a8138: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8138u;
    {
        const bool branch_taken_0x2a8138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a8138) {
            ctx->pc = 0x2A813Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8138u;
            // 0x2a813c: 0x8ec3000c  lw          $v1, 0xC($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8148u;
            goto label_2a8148;
        }
    }
    ctx->pc = 0x2A8140u;
    // 0x2a8140: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8140u;
    {
        const bool branch_taken_0x2a8140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8140u;
        // 0x2a8144: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8140) {
            ctx->pc = 0x2A8150u;
            goto label_2a8150;
        }
    }
    ctx->pc = 0x2A8148u;
label_2a8148:
    // 0x2a8148: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x2a8148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2a814c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2a814cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a8150:
    // 0x2a8150: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x2a8150u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2a8154: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x2a8154u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2a8158: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A8158u;
    {
        const bool branch_taken_0x2a8158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8158u;
        // 0x2a815c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8158) {
            ctx->pc = 0x2A816Cu;
            goto label_2a816c;
        }
    }
    ctx->pc = 0x2A8160u;
    // 0x2a8160: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x2a8160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x2a8164: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2a8164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a8168: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a8168u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a816c:
    // 0x2a816c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2a816cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2a8170: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8170u;
    {
        const bool branch_taken_0x2a8170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a8170) {
            ctx->pc = 0x2A8174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8170u;
            // 0x2a8174: 0x8ec3000c  lw          $v1, 0xC($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8180u;
            goto label_2a8180;
        }
    }
    ctx->pc = 0x2A8178u;
    // 0x2a8178: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8178u;
    {
        const bool branch_taken_0x2a8178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8178u;
        // 0x2a817c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8178) {
            ctx->pc = 0x2A8188u;
            goto label_2a8188;
        }
    }
    ctx->pc = 0x2A8180u;
label_2a8180:
    // 0x2a8180: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x2a8180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2a8184: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x2a8184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a8188:
    // 0x2a8188: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a8188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a818c: 0xc0559b0  jal         func_1566C0
    ctx->pc = 0x2A818Cu;
    SET_GPR_U32(ctx, 31, 0x2A8194u);
    ctx->pc = 0x2A8190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A818Cu;
    // 0x2a8190: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1566C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1566C0u, 0x2A818Cu, 0x2A8194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8194u;
label_2a8194:
    // 0x2a8194: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2a8194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a8198: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2a8198u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2a819c: 0x2e31021  addu        $v0, $s7, $v1
    ctx->pc = 0x2a819cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x2a81a0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a81a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a81a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a81a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a81a8: 0x0  nop
    ctx->pc = 0x2a81a8u;
    // NOP
    // 0x2a81ac: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x2A81ACu;
    {
        const bool branch_taken_0x2a81ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A81B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A81ACu;
        // 0x2a81b0: 0x26460001  addiu       $a2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a81ac) {
            ctx->pc = 0x2A8208u;
            goto label_2a8208;
        }
    }
    ctx->pc = 0x2A81B4u;
    // 0x2a81b4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2a81b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a81b8: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2a81b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2a81bc: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x2a81bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2a81c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a81c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a81c4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x2a81c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x2a81c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a81c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a81cc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2a81ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a81d0: 0x26e30004  addiu       $v1, $s7, 0x4
    ctx->pc = 0x2a81d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x2a81d4: 0x0  nop
    ctx->pc = 0x2a81d4u;
    // NOP
label_2a81d8:
    // 0x2a81d8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2a81d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a81dc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2a81dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a81e0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2a81e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2a81e4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a81e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a81e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2a81e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a81ec: 0x0  nop
    ctx->pc = 0x2a81ecu;
    // NOP
    // 0x2a81f0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2A81F0u;
    {
        const bool branch_taken_0x2a81f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a81f0) {
            ctx->pc = 0x2A81F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A81F0u;
            // 0x2a81f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A81F8u;
            goto label_2a81f8;
        }
    }
    ctx->pc = 0x2A81F8u;
label_2a81f8:
    // 0x2a81f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2a81f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2a81fc: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x2a81fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2a8200: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2A8200u;
    {
        const bool branch_taken_0x2a8200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8200u;
        // 0x2a8204: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8200) {
            ctx->pc = 0x2A81D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a81d8;
        }
    }
    ctx->pc = 0x2A8208u;
label_2a8208:
    // 0x2a8208: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x2a8208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x2a820c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2a820cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8210: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2a8210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a8214: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x2A8214u;
    {
        const bool branch_taken_0x2a8214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a8214) {
            ctx->pc = 0x2A80D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a80d0;
        }
    }
    ctx->pc = 0x2A821Cu;
label_2a821c:
    // 0x2a821c: 0x12800080  beqz        $s4, . + 4 + (0x80 << 2)
    ctx->pc = 0x2A821Cu;
    {
        const bool branch_taken_0x2a821c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A821Cu;
        // 0x2a8220: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a821c) {
            ctx->pc = 0x2A8420u;
            goto label_2a8420;
        }
    }
    ctx->pc = 0x2A8224u;
    // 0x2a8224: 0x27be0050  addiu       $fp, $sp, 0x50
    ctx->pc = 0x2a8224u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a8228: 0xc454ae20  lwc1        $f20, -0x51E0($v0)
    ctx->pc = 0x2a8228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294946336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a822c: 0x2e0a82d  daddu       $s5, $s7, $zero
    ctx->pc = 0x2a822cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8230: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2a8230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a8234: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x2a8234u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a8238: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x2a8238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    // 0x2a823c: 0x0  nop
    ctx->pc = 0x2a823cu;
    // NOP
label_2a8240:
    // 0x2a8240: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2a8240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2a8244: 0x50400072  beql        $v0, $zero, . + 4 + (0x72 << 2)
    ctx->pc = 0x2A8244u;
    {
        const bool branch_taken_0x2a8244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8244) {
            ctx->pc = 0x2A8248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8244u;
            // 0x2a8248: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8410u;
            goto label_2a8410;
        }
    }
    ctx->pc = 0x2A824Cu;
    // 0x2a824c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a824cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a8250: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x2a8250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2a8254: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A8254u;
    {
        const bool branch_taken_0x2a8254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8254u;
        // 0x2a8258: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8254) {
            ctx->pc = 0x2A8268u;
            goto label_2a8268;
        }
    }
    ctx->pc = 0x2A825Cu;
    // 0x2a825c: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x2a825cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x2a8260: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2a8260u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a8264: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a8264u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a8268:
    // 0x2a8268: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2a8268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2a826c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A826Cu;
    {
        const bool branch_taken_0x2a826c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a826c) {
            ctx->pc = 0x2A8270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A826Cu;
            // 0x2a8270: 0x8ec3000c  lw          $v1, 0xC($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A827Cu;
            goto label_2a827c;
        }
    }
    ctx->pc = 0x2A8274u;
    // 0x2a8274: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8274u;
    {
        const bool branch_taken_0x2a8274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8274u;
        // 0x2a8278: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8274) {
            ctx->pc = 0x2A8284u;
            goto label_2a8284;
        }
    }
    ctx->pc = 0x2A827Cu;
label_2a827c:
    // 0x2a827c: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x2a827cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2a8280: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x2a8280u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a8284:
    // 0x2a8284: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2a8284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2a8288: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x2a8288u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2a828c: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x2a828cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2a8290: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A8290u;
    {
        const bool branch_taken_0x2a8290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8290u;
        // 0x2a8294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8290) {
            ctx->pc = 0x2A82A4u;
            goto label_2a82a4;
        }
    }
    ctx->pc = 0x2A8298u;
    // 0x2a8298: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x2a8298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x2a829c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2a829cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a82a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a82a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a82a4:
    // 0x2a82a4: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2a82a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2a82a8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A82A8u;
    {
        const bool branch_taken_0x2a82a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a82a8) {
            ctx->pc = 0x2A82ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A82A8u;
            // 0x2a82ac: 0x8ec3000c  lw          $v1, 0xC($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A82B8u;
            goto label_2a82b8;
        }
    }
    ctx->pc = 0x2A82B0u;
    // 0x2a82b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A82B0u;
    {
        const bool branch_taken_0x2a82b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A82B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A82B0u;
        // 0x2a82b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a82b0) {
            ctx->pc = 0x2A82C0u;
            goto label_2a82c0;
        }
    }
    ctx->pc = 0x2A82B8u;
label_2a82b8:
    // 0x2a82b8: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x2a82b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2a82bc: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2a82bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a82c0:
    // 0x2a82c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a82c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a82c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a82c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a82c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a82c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a82cc: 0xc0559b0  jal         func_1566C0
    ctx->pc = 0x2A82CCu;
    SET_GPR_U32(ctx, 31, 0x2A82D4u);
    ctx->pc = 0x2A82D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A82CCu;
    // 0x2a82d0: 0x27a70094  addiu       $a3, $sp, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1566C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1566C0u, 0x2A82CCu, 0x2A82D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A82D4u;
label_2a82d4:
    // 0x2a82d4: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x2a82d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x2a82d8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A82D8u;
    {
        const bool branch_taken_0x2a82d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A82DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A82D8u;
        // 0x2a82dc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a82d8) {
            ctx->pc = 0x2A831Cu;
            goto label_2a831c;
        }
    }
    ctx->pc = 0x2A82E0u;
    // 0x2a82e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a82e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a82e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a82e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a82e8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2a82e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2a82ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a82ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a82f0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a82f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2a82f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a82f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a82f8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2a82f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2a82fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a82fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8300: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2a8300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2a8304: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x2a8304u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a8308: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2a8308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2a830c: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x2a830cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2a8310: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a8310u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8314: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2A8314u;
    {
        const bool branch_taken_0x2a8314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8314u;
        // 0x2a8318: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8314) {
            ctx->pc = 0x2A83F4u;
            goto label_2a83f4;
        }
    }
    ctx->pc = 0x2A831Cu;
label_2a831c:
    // 0x2a831c: 0x1452000f  bne         $v0, $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x2A831Cu;
    {
        const bool branch_taken_0x2a831c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2A8320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A831Cu;
        // 0x2a8320: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a831c) {
            ctx->pc = 0x2A835Cu;
            goto label_2a835c;
        }
    }
    ctx->pc = 0x2A8324u;
    // 0x2a8324: 0xafb20020  sw          $s2, 0x20($sp)
    ctx->pc = 0x2a8324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 18));
    // 0x2a8328: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a8328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a832c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a832cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2a8330: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a8330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8334: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2a8334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2a8338: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a8338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a833c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2a833cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2a8340: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a8340u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8344: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2a8344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2a8348: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x2a8348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a834c: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x2a834cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2a8350: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a8350u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8354: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2A8354u;
    {
        const bool branch_taken_0x2a8354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8354u;
        // 0x2a8358: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8354) {
            ctx->pc = 0x2A83F4u;
            goto label_2a83f4;
        }
    }
    ctx->pc = 0x2A835Cu;
label_2a835c:
    // 0x2a835c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a835cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8360: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a8360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8364: 0xc055a68  jal         func_1569A0
    ctx->pc = 0x2A8364u;
    SET_GPR_U32(ctx, 31, 0x2A836Cu);
    ctx->pc = 0x2A8368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8364u;
    // 0x2a8368: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1569A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569A0u, 0x2A8364u, 0x2A836Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A836Cu;
label_2a836c:
    // 0x2a836c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2a836cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2a8370: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2a8370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2a8374: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2a8374u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a8378: 0xdbc50000  lqc2        $vf5, 0x0($fp)
    ctx->pc = 0x2a8378u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a837c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2a837cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2a8380: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2a8380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2a8384: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2a8384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2a8388: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2a8388u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a838c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x2a838cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2a8390: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a8390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8394: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a8394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8398: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2a8398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a839c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2a839cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a83a0: 0xc055afa  jal         func_156BE8
    ctx->pc = 0x2A83A0u;
    SET_GPR_U32(ctx, 31, 0x2A83A8u);
    ctx->pc = 0x2A83A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A83A0u;
    // 0x2a83a4: 0x27a80070  addiu       $t0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156BE8u, 0x2A83A0u, 0x2A83A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A83A8u;
label_2a83a8:
    // 0x2a83a8: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2a83a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a83ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a83acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a83b0: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2a83b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a83b4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2a83b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a83b8: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x2a83b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a83bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a83bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a83c0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2a83c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2a83c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a83c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a83c8: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2a83c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2a83cc: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x2a83ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a83d0: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x2a83d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2a83d4: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x2a83d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2a83d8: 0xafb20020  sw          $s2, 0x20($sp)
    ctx->pc = 0x2a83d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 18));
    // 0x2a83dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a83dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a83e0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a83e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2a83e4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a83e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a83e8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2a83e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2a83ec: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2a83ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2a83f0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2a83f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_2a83f4:
    // 0x2a83f4: 0xc04c784  jal         func_131E10
    ctx->pc = 0x2A83F4u;
    SET_GPR_U32(ctx, 31, 0x2A83FCu);
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x2A83F4u, 0x2A83FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A83FCu;
label_2a83fc:
    // 0x2a83fc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A83FCu;
    {
        const bool branch_taken_0x2a83fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a83fc) {
            ctx->pc = 0x2A8400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A83FCu;
            // 0x2a8400: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8410u;
            goto label_2a8410;
        }
    }
    ctx->pc = 0x2A8404u;
    // 0x2a8404: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x2a8404u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x2a8408: 0xe6b40000  swc1        $f20, 0x0($s5)
    ctx->pc = 0x2a8408u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x2a840c: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x2a840cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_2a8410:
    // 0x2a8410: 0x26e20010  addiu       $v0, $s7, 0x10
    ctx->pc = 0x2a8410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x2a8414: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x2a8414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a8418: 0x1440ff89  bnez        $v0, . + 4 + (-0x77 << 2)
    ctx->pc = 0x2A8418u;
    {
        const bool branch_taken_0x2a8418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8418u;
        // 0x2a841c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8418) {
            ctx->pc = 0x2A8240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a8240;
        }
    }
    ctx->pc = 0x2A8420u;
label_2a8420:
    // 0x2a8420: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2a8420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8424: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a8424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8428: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a8428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a842c: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x2a842cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2a8430:
    // 0x2a8430: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2a8430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a8434: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2a8434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8438: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2a8438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2a843c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a843cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8440: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a8440u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8444: 0x0  nop
    ctx->pc = 0x2a8444u;
    // NOP
    // 0x2a8448: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2A8448u;
    {
        const bool branch_taken_0x2a8448 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a8448) {
            ctx->pc = 0x2A844Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8448u;
            // 0x2a844c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8450u;
            goto label_2a8450;
        }
    }
    ctx->pc = 0x2A8450u;
label_2a8450:
    // 0x2a8450: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2a8450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2a8454: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x2a8454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2a8458: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2A8458u;
    {
        const bool branch_taken_0x2a8458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8458u;
        // 0x2a845c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8458) {
            ctx->pc = 0x2A8430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a8430;
        }
    }
    ctx->pc = 0x2A8460u;
    // 0x2a8460: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2a8460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a8464: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x2a8464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2a8468: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2a8468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2a846c: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x2a846cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2a8470: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x2a8470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2a8474: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x2a8474u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2a8478: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2a8478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a847c: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x2a847cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2a8480: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x2a8480u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2a8484: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x2a8484u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2a8488: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x2a8488u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a848c: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x2a848cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a8490: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x2a8490u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a8494: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2a8494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a8498: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x2a8498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a849c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A849Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A84A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A849Cu;
        // 0x2a84a0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A849Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A84A4u;
    // 0x2a84a4: 0x0  nop
    ctx->pc = 0x2a84a4u;
    // NOP
    ctx->pc = 0x2a84a8u;
}
