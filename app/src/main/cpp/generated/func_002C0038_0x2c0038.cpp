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

// Function: func_002C0038
// Address: 0x2c0038 - 0x2c02e8
void func_002C0038_0x2c0038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C0038_0x2c0038");
#endif

    switch (ctx->pc) {
        case 0x2c008cu: goto label_2c008c;
        case 0x2c00e0u: goto label_2c00e0;
        case 0x2c011cu: goto label_2c011c;
        case 0x2c0164u: goto label_2c0164;
        case 0x2c0188u: goto label_2c0188;
        case 0x2c01a0u: goto label_2c01a0;
        case 0x2c01dcu: goto label_2c01dc;
        case 0x2c0218u: goto label_2c0218;
        case 0x2c02a8u: goto label_2c02a8;
        default: break;
    }

    ctx->pc = 0x2c0038u;

    // 0x2c0038: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x2c0038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
    // 0x2c003c: 0x7fb00250  sq          $s0, 0x250($sp)
    ctx->pc = 0x2c003cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 16));
    // 0x2c0040: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x2c0040u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x2c0044: 0x7fb10240  sq          $s1, 0x240($sp)
    ctx->pc = 0x2c0044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 17));
    // 0x2c0048: 0x7fb20230  sq          $s2, 0x230($sp)
    ctx->pc = 0x2c0048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 18));
    // 0x2c004c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2c004cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0050: 0x7fb30220  sq          $s3, 0x220($sp)
    ctx->pc = 0x2c0050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 19));
    // 0x2c0054: 0x7fb701e0  sq          $s7, 0x1E0($sp)
    ctx->pc = 0x2c0054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 23));
    // 0x2c0058: 0x7fbe01d0  sq          $fp, 0x1D0($sp)
    ctx->pc = 0x2c0058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 30));
    // 0x2c005c: 0x3c170074  lui         $s7, 0x74
    ctx->pc = 0x2c005cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)116 << 16));
    // 0x2c0060: 0xafa401a0  sw          $a0, 0x1A0($sp)
    ctx->pc = 0x2c0060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 4));
    // 0x2c0064: 0x7fb40210  sq          $s4, 0x210($sp)
    ctx->pc = 0x2c0064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 20));
    // 0x2c0068: 0x26049b70  addiu       $a0, $s0, -0x6490
    ctx->pc = 0x2c0068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x2c006c: 0x7fb50200  sq          $s5, 0x200($sp)
    ctx->pc = 0x2c006cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 21));
    // 0x2c0070: 0x7fb601f0  sq          $s6, 0x1F0($sp)
    ctx->pc = 0x2c0070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 22));
    // 0x2c0074: 0xffbf01c0  sd          $ra, 0x1C0($sp)
    ctx->pc = 0x2c0074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 31));
    // 0x2c0078: 0xe7b40260  swc1        $f20, 0x260($sp)
    ctx->pc = 0x2c0078u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
    // 0x2c007c: 0x8e029b70  lw          $v0, -0x6490($s0)
    ctx->pc = 0x2c007cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x569B70u));
    // 0x2c0080: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c0080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0084: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x2C0084u;
    SET_GPR_U32(ctx, 31, 0x2C008Cu);
    ctx->pc = 0x2C0088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0084u;
    // 0x2c0088: 0xafa201a4  sw          $v0, 0x1A4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x2C0084u, 0x2C008Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C008Cu;
label_2c008c:
    // 0x2c008c: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2c008cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2c0090: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2c0090u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0094: 0xafa401b0  sw          $a0, 0x1B0($sp)
    ctx->pc = 0x2c0094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 4));
    // 0x2c0098: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x2c0098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2c009c: 0x8e049b70  lw          $a0, -0x6490($s0)
    ctx->pc = 0x2c009cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941552)));
    // 0x2c00a0: 0x27a30180  addiu       $v1, $sp, 0x180
    ctx->pc = 0x2c00a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2c00a4: 0xafa201b4  sw          $v0, 0x1B4($sp)
    ctx->pc = 0x2c00a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 2));
    // 0x2c00a8: 0x27b20100  addiu       $s2, $sp, 0x100
    ctx->pc = 0x2c00a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2c00ac: 0xafa301ac  sw          $v1, 0x1AC($sp)
    ctx->pc = 0x2c00acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 3));
    // 0x2c00b0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2c00b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c00b4: 0x6885001b  ldl         $a1, 0x1B($a0)
    ctx->pc = 0x2c00b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2c00b8: 0x6c850014  ldr         $a1, 0x14($a0)
    ctx->pc = 0x2c00b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2c00bc: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x2c00bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c00c0: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x2c00c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c00c4: 0x24870270  addiu       $a3, $a0, 0x270
    ctx->pc = 0x2c00c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 624));
    // 0x2c00c8: 0x248501b0  addiu       $a1, $a0, 0x1B0
    ctx->pc = 0x2c00c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x2c00cc: 0xdc820b98  ld          $v0, 0xB98($a0)
    ctx->pc = 0x2c00ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 2968)));
    // 0x2c00d0: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x2c00d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x2c00d4: 0xdc830ba0  ld          $v1, 0xBA0($a0)
    ctx->pc = 0x2c00d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 2976)));
    // 0x2c00d8: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x2c00d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x2c00dc: 0x8c930ba8  lw          $s3, 0xBA8($a0)
    ctx->pc = 0x2c00dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2984)));
label_2c00e0:
    // 0x2c00e0: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2c00e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c00e4: 0x78a40010  lq          $a0, 0x10($a1)
    ctx->pc = 0x2c00e4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2c00e8: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x2c00e8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x2c00ec: 0x7cc40010  sq          $a0, 0x10($a2)
    ctx->pc = 0x2c00ecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 4));
    // 0x2c00f0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2c00f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2c00f4: 0x14a7fffa  bne         $a1, $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C00F4u;
    {
        const bool branch_taken_0x2c00f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x2C00F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C00F4u;
        // 0x2c00f8: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c00f4) {
            ctx->pc = 0x2C00E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c00e0;
        }
    }
    ctx->pc = 0x2C00FCu;
    // 0x2c00fc: 0x8e229b70  lw          $v0, -0x6490($s1)
    ctx->pc = 0x2c00fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941552)));
    // 0x2c0100: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2c0100u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0104: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x2c0104u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c0108: 0xdca70010  ld          $a3, 0x10($a1)
    ctx->pc = 0x2c0108u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2c010c: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x2c010cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x2c0110: 0xfcc70010  sd          $a3, 0x10($a2)
    ctx->pc = 0x2c0110u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 7));
    // 0x2c0114: 0x24440130  addiu       $a0, $v0, 0x130
    ctx->pc = 0x2c0114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x2c0118: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x2c0118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
label_2c011c:
    // 0x2c011c: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x2c011cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0120: 0x78460010  lq          $a2, 0x10($v0)
    ctx->pc = 0x2c0120u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2c0124: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x2c0124u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x2c0128: 0x7c660010  sq          $a2, 0x10($v1)
    ctx->pc = 0x2c0128u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 6));
    // 0x2c012c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2c012cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2c0130: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C0130u;
    {
        const bool branch_taken_0x2c0130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2C0134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0130u;
        // 0x2c0134: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0130) {
            ctx->pc = 0x2C011Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c011c;
        }
    }
    ctx->pc = 0x2C0138u;
    // 0x2c0138: 0x8e249b70  lw          $a0, -0x6490($s1)
    ctx->pc = 0x2c0138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941552)));
    // 0x2c013c: 0x26309b70  addiu       $s0, $s1, -0x6490
    ctx->pc = 0x2c013cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941552));
    // 0x2c0140: 0xdc820098  ld          $v0, 0x98($a0)
    ctx->pc = 0x2c0140u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x2c0144: 0xffa20180  sd          $v0, 0x180($sp)
    ctx->pc = 0x2c0144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 2));
    // 0x2c0148: 0x948300a0  lhu         $v1, 0xA0($a0)
    ctx->pc = 0x2c0148u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x2c014c: 0xa7a30188  sh          $v1, 0x188($sp)
    ctx->pc = 0x2c014cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 392), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c0150: 0x94890bba  lhu         $t1, 0xBBA($a0)
    ctx->pc = 0x2c0150u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3002)));
    // 0x2c0154: 0xafa901a8  sw          $t1, 0x1A8($sp)
    ctx->pc = 0x2c0154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 9));
    // 0x2c0158: 0x8c950170  lw          $s5, 0x170($a0)
    ctx->pc = 0x2c0158u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 368)));
    // 0x2c015c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2C015Cu;
    SET_GPR_U32(ctx, 31, 0x2C0164u);
    ctx->pc = 0x2C0160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C015Cu;
    // 0x2c0160: 0x8c960174  lw          $s6, 0x174($a0) (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2C015Cu, 0x2C0164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0164u;
label_2c0164:
    // 0x2c0164: 0x8c4306a8  lw          $v1, 0x6A8($v0)
    ctx->pc = 0x2c0164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1704)));
    // 0x2c0168: 0x26e27a60  addiu       $v0, $s7, 0x7A60
    ctx->pc = 0x2c0168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 31328));
    // 0x2c016c: 0x3a02b  sltu        $s4, $zero, $v1
    ctx->pc = 0x2c016cu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c0170: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2c0170u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0174: 0xfba40190  sqc2        $vf4, 0x190($sp)
    ctx->pc = 0x2c0174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2c0178: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x2c0178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2c017c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c017cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0180: 0xc0b01b4  jal         func_2C06D0
    ctx->pc = 0x2C0180u;
    SET_GPR_U32(ctx, 31, 0x2C0188u);
    ctx->pc = 0x2C0184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0180u;
    // 0x2c0184: 0xc4540010  lwc1        $f20, 0x10($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C06D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C06D0u, 0x2C0180u, 0x2C0188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0188u;
label_2c0188:
    // 0x2c0188: 0x8e229b70  lw          $v0, -0x6490($s1)
    ctx->pc = 0x2c0188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941552)));
    // 0x2c018c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c018cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0190: 0x8fa301a4  lw          $v1, 0x1A4($sp)
    ctx->pc = 0x2c0190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x2c0194: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2c0194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0198: 0xc07e9be  jal         func_1FA6F8
    ctx->pc = 0x2C0198u;
    SET_GPR_U32(ctx, 31, 0x2C01A0u);
    ctx->pc = 0x2C019Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0198u;
    // 0x2c019c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6F8u, 0x2C0198u, 0x2C01A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C01A0u;
label_2c01a0:
    // 0x2c01a0: 0x8e229b70  lw          $v0, -0x6490($s1)
    ctx->pc = 0x2c01a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941552)));
    // 0x2c01a4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2c01a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c01a8: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x2c01a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2c01ac: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x2c01acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2c01b0: 0xb044001b  sdl         $a0, 0x1B($v0)
    ctx->pc = 0x2c01b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c01b4: 0xb4440014  sdr         $a0, 0x14($v0)
    ctx->pc = 0x2c01b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c01b8: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x2c01b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c01bc: 0x8e249b70  lw          $a0, -0x6490($s1)
    ctx->pc = 0x2c01bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941552)));
    // 0x2c01c0: 0xfc820b98  sd          $v0, 0xB98($a0)
    ctx->pc = 0x2c01c0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 2968), GPR_U64(ctx, 2));
    // 0x2c01c4: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x2c01c4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c01c8: 0xfc830ba0  sd          $v1, 0xBA0($a0)
    ctx->pc = 0x2c01c8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 2976), GPR_U64(ctx, 3));
    // 0x2c01cc: 0x8e229b70  lw          $v0, -0x6490($s1)
    ctx->pc = 0x2c01ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941552)));
    // 0x2c01d0: 0xac530ba8  sw          $s3, 0xBA8($v0)
    ctx->pc = 0x2c01d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2984), GPR_U32(ctx, 19));
    // 0x2c01d4: 0x8e239b70  lw          $v1, -0x6490($s1)
    ctx->pc = 0x2c01d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941552)));
    // 0x2c01d8: 0x246301b0  addiu       $v1, $v1, 0x1B0
    ctx->pc = 0x2c01d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 432));
label_2c01dc:
    // 0x2c01dc: 0x78a90000  lq          $t1, 0x0($a1)
    ctx->pc = 0x2c01dcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c01e0: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x2c01e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2c01e4: 0x7c690000  sq          $t1, 0x0($v1)
    ctx->pc = 0x2c01e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 9));
    // 0x2c01e8: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x2c01e8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x2c01ec: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2c01ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2c01f0: 0x8fa701b4  lw          $a3, 0x1B4($sp)
    ctx->pc = 0x2c01f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x2c01f4: 0x14a7fff9  bne         $a1, $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2C01F4u;
    {
        const bool branch_taken_0x2c01f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x2C01F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C01F4u;
        // 0x2c01f8: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c01f4) {
            ctx->pc = 0x2C01DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c01dc;
        }
    }
    ctx->pc = 0x2C01FCu;
    // 0x2c01fc: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x2c01fcu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c0200: 0xdca90010  ld          $t1, 0x10($a1)
    ctx->pc = 0x2c0200u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2c0204: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x2c0204u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
    // 0x2c0208: 0xfc690010  sd          $t1, 0x10($v1)
    ctx->pc = 0x2c0208u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 9));
    // 0x2c020c: 0x8e229b70  lw          $v0, -0x6490($s1)
    ctx->pc = 0x2c020cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941552)));
    // 0x2c0210: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2c0210u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0214: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x2c0214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
label_2c0218:
    // 0x2c0218: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x2c0218u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c021c: 0x78660010  lq          $a2, 0x10($v1)
    ctx->pc = 0x2c021cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2c0220: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x2c0220u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x2c0224: 0x7c460010  sq          $a2, 0x10($v0)
    ctx->pc = 0x2c0224u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 6));
    // 0x2c0228: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2c0228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2c022c: 0x8fa901ac  lw          $t1, 0x1AC($sp)
    ctx->pc = 0x2c022cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x2c0230: 0x1469fff9  bne         $v1, $t1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2C0230u;
    {
        const bool branch_taken_0x2c0230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        ctx->pc = 0x2C0234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0230u;
        // 0x2c0234: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0230) {
            ctx->pc = 0x2C0218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0218;
        }
    }
    ctx->pc = 0x2C0238u;
    // 0x2c0238: 0xdfa20180  ld          $v0, 0x180($sp)
    ctx->pc = 0x2c0238u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2c023c: 0x26e57a60  addiu       $a1, $s7, 0x7A60
    ctx->pc = 0x2c023cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 31328));
    // 0x2c0240: 0x8e249b70  lw          $a0, -0x6490($s1)
    ctx->pc = 0x2c0240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941552)));
    // 0x2c0244: 0xfc820098  sd          $v0, 0x98($a0)
    ctx->pc = 0x2c0244u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 152), GPR_U64(ctx, 2));
    // 0x2c0248: 0x97a30188  lhu         $v1, 0x188($sp)
    ctx->pc = 0x2c0248u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x2c024c: 0xa48300a0  sh          $v1, 0xA0($a0)
    ctx->pc = 0x2c024cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 160), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c0250: 0x8e229b70  lw          $v0, -0x6490($s1)
    ctx->pc = 0x2c0250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941552)));
    // 0x2c0254: 0xac550170  sw          $s5, 0x170($v0)
    ctx->pc = 0x2c0254u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 368), GPR_U32(ctx, 21));
    // 0x2c0258: 0x8e239b70  lw          $v1, -0x6490($s1)
    ctx->pc = 0x2c0258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941552)));
    // 0x2c025c: 0xac760174  sw          $s6, 0x174($v1)
    ctx->pc = 0x2c025cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 372), GPR_U32(ctx, 22));
    // 0x2c0260: 0x8e229b70  lw          $v0, -0x6490($s1)
    ctx->pc = 0x2c0260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941552)));
    // 0x2c0264: 0xa0540157  sb          $s4, 0x157($v0)
    ctx->pc = 0x2c0264u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 343), (uint8_t)GPR_U32(ctx, 20));
    // 0x2c0268: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x2c0268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2c026c: 0x8e239b70  lw          $v1, -0x6490($s1)
    ctx->pc = 0x2c026cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941552)));
    // 0x2c0270: 0xa4620bba  sh          $v0, 0xBBA($v1)
    ctx->pc = 0x2c0270u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 3002), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c0274: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x2c0274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2c0278: 0x10650006  beq         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0278u;
    {
        const bool branch_taken_0x2c0278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2C027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0278u;
        // 0x2c027c: 0xc7a00190  lwc1        $f0, 0x190($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0278) {
            ctx->pc = 0x2C0294u;
            goto label_2c0294;
        }
    }
    ctx->pc = 0x2C0280u;
    // 0x2c0280: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x2c0280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0284: 0xc7a20198  lwc1        $f2, 0x198($sp)
    ctx->pc = 0x2c0284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c0288: 0xe6e07a60  swc1        $f0, 0x7A60($s7)
    ctx->pc = 0x2c0288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 31328), bits); }
    // 0x2c028c: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x2c028cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2c0290: 0xe4a20008  swc1        $f2, 0x8($a1)
    ctx->pc = 0x2c0290u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_2c0294:
    // 0x2c0294: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2c0294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2c0298: 0x8c44d6e8  lw          $a0, -0x2918($v0)
    ctx->pc = 0x2c0298u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x2c029c: 0xe4b40010  swc1        $f20, 0x10($a1)
    ctx->pc = 0x2c029cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x2c02a0: 0xc050d2a  jal         func_1434A8
    ctx->pc = 0x2C02A0u;
    SET_GPR_U32(ctx, 31, 0x2C02A8u);
    ctx->pc = 0x2C02A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C02A0u;
    // 0x2c02a4: 0x24840460  addiu       $a0, $a0, 0x460 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1434A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1434A8u, 0x2C02A0u, 0x2C02A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C02A8u;
label_2c02a8:
    // 0x2c02a8: 0x7bb00250  lq          $s0, 0x250($sp)
    ctx->pc = 0x2c02a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2c02ac: 0x7bb10240  lq          $s1, 0x240($sp)
    ctx->pc = 0x2c02acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2c02b0: 0x7bb20230  lq          $s2, 0x230($sp)
    ctx->pc = 0x2c02b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2c02b4: 0x7bb30220  lq          $s3, 0x220($sp)
    ctx->pc = 0x2c02b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x2c02b8: 0x7bb40210  lq          $s4, 0x210($sp)
    ctx->pc = 0x2c02b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2c02bc: 0x7bb50200  lq          $s5, 0x200($sp)
    ctx->pc = 0x2c02bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2c02c0: 0x7bb601f0  lq          $s6, 0x1F0($sp)
    ctx->pc = 0x2c02c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2c02c4: 0x7bb701e0  lq          $s7, 0x1E0($sp)
    ctx->pc = 0x2c02c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2c02c8: 0x7bbe01d0  lq          $fp, 0x1D0($sp)
    ctx->pc = 0x2c02c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2c02cc: 0xdfbf01c0  ld          $ra, 0x1C0($sp)
    ctx->pc = 0x2c02ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2c02d0: 0xc7b40260  lwc1        $f20, 0x260($sp)
    ctx->pc = 0x2c02d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c02d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C02D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C02D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C02D4u;
        // 0x2c02d8: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C02D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C02DCu;
    // 0x2c02dc: 0x0  nop
    ctx->pc = 0x2c02dcu;
    // NOP
    // 0x2c02e0: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x2c02e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2c02e4: 0x0  nop
    ctx->pc = 0x2c02e4u;
    // NOP
    ctx->pc = 0x2c02e8u;
}
