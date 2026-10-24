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

// Function: func_00288930
// Address: 0x288930 - 0x288a58
void func_00288930_0x288930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00288930_0x288930");
#endif

    switch (ctx->pc) {
        case 0x288930u: goto label_288930;
        case 0x288934u: goto label_288934;
        case 0x288938u: goto label_288938;
        case 0x28893cu: goto label_28893c;
        case 0x288940u: goto label_288940;
        case 0x288944u: goto label_288944;
        case 0x288948u: goto label_288948;
        case 0x28894cu: goto label_28894c;
        case 0x288950u: goto label_288950;
        case 0x288954u: goto label_288954;
        case 0x288958u: goto label_288958;
        case 0x28895cu: goto label_28895c;
        case 0x288960u: goto label_288960;
        case 0x288964u: goto label_288964;
        case 0x288968u: goto label_288968;
        case 0x28896cu: goto label_28896c;
        case 0x288970u: goto label_288970;
        case 0x288974u: goto label_288974;
        case 0x288978u: goto label_288978;
        case 0x28897cu: goto label_28897c;
        case 0x288980u: goto label_288980;
        case 0x288984u: goto label_288984;
        case 0x288988u: goto label_288988;
        case 0x28898cu: goto label_28898c;
        case 0x288990u: goto label_288990;
        case 0x288994u: goto label_288994;
        case 0x288998u: goto label_288998;
        case 0x28899cu: goto label_28899c;
        case 0x2889a0u: goto label_2889a0;
        case 0x2889a4u: goto label_2889a4;
        case 0x2889a8u: goto label_2889a8;
        case 0x2889acu: goto label_2889ac;
        case 0x2889b0u: goto label_2889b0;
        case 0x2889b4u: goto label_2889b4;
        case 0x2889b8u: goto label_2889b8;
        case 0x2889bcu: goto label_2889bc;
        case 0x2889c0u: goto label_2889c0;
        case 0x2889c4u: goto label_2889c4;
        case 0x2889c8u: goto label_2889c8;
        case 0x2889ccu: goto label_2889cc;
        case 0x2889d0u: goto label_2889d0;
        case 0x2889d4u: goto label_2889d4;
        case 0x2889d8u: goto label_2889d8;
        case 0x2889dcu: goto label_2889dc;
        case 0x2889e0u: goto label_2889e0;
        case 0x2889e4u: goto label_2889e4;
        case 0x2889e8u: goto label_2889e8;
        case 0x2889ecu: goto label_2889ec;
        case 0x2889f0u: goto label_2889f0;
        case 0x2889f4u: goto label_2889f4;
        case 0x2889f8u: goto label_2889f8;
        case 0x2889fcu: goto label_2889fc;
        case 0x288a00u: goto label_288a00;
        case 0x288a04u: goto label_288a04;
        case 0x288a08u: goto label_288a08;
        case 0x288a0cu: goto label_288a0c;
        case 0x288a10u: goto label_288a10;
        case 0x288a14u: goto label_288a14;
        case 0x288a18u: goto label_288a18;
        case 0x288a1cu: goto label_288a1c;
        case 0x288a20u: goto label_288a20;
        case 0x288a24u: goto label_288a24;
        case 0x288a28u: goto label_288a28;
        case 0x288a2cu: goto label_288a2c;
        case 0x288a30u: goto label_288a30;
        case 0x288a34u: goto label_288a34;
        case 0x288a38u: goto label_288a38;
        case 0x288a3cu: goto label_288a3c;
        case 0x288a40u: goto label_288a40;
        case 0x288a44u: goto label_288a44;
        case 0x288a48u: goto label_288a48;
        case 0x288a4cu: goto label_288a4c;
        case 0x288a50u: goto label_288a50;
        case 0x288a54u: goto label_288a54;
        default: break;
    }

    ctx->pc = 0x288930u;

label_288930:
    // 0x288930: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x288930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_288934:
    // 0x288934: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x288934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
label_288938:
    // 0x288938: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x288938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_28893c:
    // 0x28893c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x28893cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_288940:
    // 0x288940: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x288940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_288944:
    // 0x288944: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x288944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_288948:
    // 0x288948: 0x8e0415c4  lw          $a0, 0x15C4($s0)
    ctx->pc = 0x288948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5572)));
label_28894c:
    // 0x28894c: 0x24478c78  addiu       $a3, $v0, -0x7388
    ctx->pc = 0x28894cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937720));
label_288950:
    // 0x288950: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x288950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_288954:
    // 0x288954: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x288954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_288958:
    // 0x288958: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x288958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_28895c:
    // 0x28895c: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x28895cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_288960:
    // 0x288960: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x288960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_288964:
    // 0x288964: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x288964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_288968:
    // 0x288968: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x288968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28896c:
    // 0x28896c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x28896cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_288970:
    // 0x288970: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x288970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_288974:
    // 0x288974: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x288974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_288978:
    // 0x288978: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x288978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28897c:
    // 0x28897c: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x28897cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_288980:
    // 0x288980: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_288984:
    if (ctx->pc == 0x288984u) {
        ctx->pc = 0x288984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288980u;
        // 0x288984: 0x920202f5  lbu         $v0, 0x2F5($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288988u;
        goto label_288988;
    }
    ctx->pc = 0x288980u;
    {
        const bool branch_taken_0x288980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x288980) {
            ctx->pc = 0x288984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288980u;
            // 0x288984: 0x920202f5  lbu         $v0, 0x2F5($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2889B0u;
            goto label_2889b0;
        }
    }
    ctx->pc = 0x288988u;
label_288988:
    // 0x288988: 0xc070924  jal         func_1C2490
label_28898c:
    if (ctx->pc == 0x28898Cu) {
        ctx->pc = 0x288990u;
        goto label_288990;
    }
    ctx->pc = 0x288988u;
    SET_GPR_U32(ctx, 31, 0x288990u);
    ctx->pc = 0x1C2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2490u, 0x288988u, 0x288990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288990u;
label_288990:
    // 0x288990: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_288994:
    if (ctx->pc == 0x288994u) {
        ctx->pc = 0x288998u;
        goto label_288998;
    }
    ctx->pc = 0x288990u;
    {
        const bool branch_taken_0x288990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x288990) {
            ctx->pc = 0x2889A0u;
            goto label_2889a0;
        }
    }
    ctx->pc = 0x288998u;
label_288998:
    // 0x288998: 0x10000003  b           . + 4 + (0x3 << 2)
label_28899c:
    if (ctx->pc == 0x28899Cu) {
        ctx->pc = 0x28899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288998u;
        // 0x28899c: 0xae0015c4  sw          $zero, 0x15C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5572), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2889A0u;
        goto label_2889a0;
    }
    ctx->pc = 0x288998u;
    {
        const bool branch_taken_0x288998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288998u;
        // 0x28899c: 0xae0015c4  sw          $zero, 0x15C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5572), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288998) {
            ctx->pc = 0x2889A8u;
            goto label_2889a8;
        }
    }
    ctx->pc = 0x2889A0u;
label_2889a0:
    // 0x2889a0: 0xc0708dc  jal         func_1C2370
label_2889a4:
    if (ctx->pc == 0x2889A4u) {
        ctx->pc = 0x2889A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2889A0u;
        // 0x2889a4: 0x8e0415c4  lw          $a0, 0x15C4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5572)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2889A8u;
        goto label_2889a8;
    }
    ctx->pc = 0x2889A0u;
    SET_GPR_U32(ctx, 31, 0x2889A8u);
    ctx->pc = 0x2889A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2889A0u;
    // 0x2889a4: 0x8e0415c4  lw          $a0, 0x15C4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5572)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2370u, 0x2889A0u, 0x2889A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2889A8u;
label_2889a8:
    // 0x2889a8: 0xae0015c4  sw          $zero, 0x15C4($s0)
    ctx->pc = 0x2889a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5572), GPR_U32(ctx, 0));
label_2889ac:
    // 0x2889ac: 0x920202f5  lbu         $v0, 0x2F5($s0)
    ctx->pc = 0x2889acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_2889b0:
    // 0x2889b0: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2889b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2889b4:
    // 0x2889b4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2889b8:
    if (ctx->pc == 0x2889B8u) {
        ctx->pc = 0x2889B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2889B4u;
        // 0x2889b8: 0xa20002f5  sb          $zero, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2889BCu;
        goto label_2889bc;
    }
    ctx->pc = 0x2889B4u;
    {
        const bool branch_taken_0x2889b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2889b4) {
            ctx->pc = 0x2889B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2889B4u;
            // 0x2889b8: 0xa20002f5  sb          $zero, 0x2F5($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2889BCu;
            goto label_2889bc;
        }
    }
    ctx->pc = 0x2889BCu;
label_2889bc:
    // 0x2889bc: 0x920202f5  lbu         $v0, 0x2F5($s0)
    ctx->pc = 0x2889bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_2889c0:
    // 0x2889c0: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x2889c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2889c4:
    // 0x2889c4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2889c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2889c8:
    // 0x2889c8: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x2889c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
label_2889cc:
    // 0x2889cc: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x2889ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_2889d0:
    // 0x2889d0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2889d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2889d4:
    // 0x2889d4: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x2889d4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_2889d8:
    // 0x2889d8: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_2889dc:
    if (ctx->pc == 0x2889DCu) {
        ctx->pc = 0x2889DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2889D8u;
        // 0x2889dc: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2889E0u;
        goto label_2889e0;
    }
    ctx->pc = 0x2889D8u;
    {
        const bool branch_taken_0x2889d8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x2889DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2889D8u;
        // 0x2889dc: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2889d8) {
            ctx->pc = 0x288A0Cu;
            goto label_288a0c;
        }
    }
    ctx->pc = 0x2889E0u;
label_2889e0:
    // 0x2889e0: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x2889e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_2889e4:
    // 0x2889e4: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x2889e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2889e8:
    // 0x2889e8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2889e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2889ec:
    // 0x2889ec: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2889ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_2889f0:
    // 0x2889f0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2889f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2889f4:
    // 0x2889f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2889f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2889f8:
    // 0x2889f8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2889f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2889fc:
    // 0x2889fc: 0xdc91fff8  ld          $s1, -0x8($a0)
    ctx->pc = 0x2889fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_288a00:
    // 0x288a00: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x288a00u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_288a04:
    // 0x288a04: 0x10000004  b           . + 4 + (0x4 << 2)
label_288a08:
    if (ctx->pc == 0x288A08u) {
        ctx->pc = 0x288A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288A04u;
        // 0x288a08: 0x710c0  sll         $v0, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288A0Cu;
        goto label_288a0c;
    }
    ctx->pc = 0x288A04u;
    {
        const bool branch_taken_0x288a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288A04u;
        // 0x288a08: 0x710c0  sll         $v0, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288a04) {
            ctx->pc = 0x288A18u;
            goto label_288a18;
        }
    }
    ctx->pc = 0x288A0Cu;
label_288a0c:
    // 0x288a0c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x288a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_288a10:
    // 0x288a10: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x288a10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_288a14:
    // 0x288a14: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x288a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_288a18:
    // 0x288a18: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x288a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_288a1c:
    // 0x288a1c: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_288a20:
    if (ctx->pc == 0x288A20u) {
        ctx->pc = 0x288A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288A1Cu;
        // 0x288a20: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288A24u;
        goto label_288a24;
    }
    ctx->pc = 0x288A1Cu;
    {
        const bool branch_taken_0x288a1c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x288A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288A1Cu;
        // 0x288a20: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288a1c) {
            ctx->pc = 0x288A38u;
            goto label_288a38;
        }
    }
    ctx->pc = 0x288A24u;
label_288a24:
    // 0x288a24: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x288a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_288a28:
    // 0x288a28: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x288a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_288a2c:
    // 0x288a2c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x288a2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_288a30:
    // 0x288a30: 0x10000002  b           . + 4 + (0x2 << 2)
label_288a34:
    if (ctx->pc == 0x288A34u) {
        ctx->pc = 0x288A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288A30u;
        // 0x288a34: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288A38u;
        goto label_288a38;
    }
    ctx->pc = 0x288A30u;
    {
        const bool branch_taken_0x288a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288A30u;
        // 0x288a34: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288a30) {
            ctx->pc = 0x288A3Cu;
            goto label_288a3c;
        }
    }
    ctx->pc = 0x288A38u;
label_288a38:
    // 0x288a38: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x288a38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_288a3c:
    // 0x288a3c: 0xc0f809  jalr        $a2
label_288a40:
    if (ctx->pc == 0x288A40u) {
        ctx->pc = 0x288A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288A3Cu;
        // 0x288a40: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288A44u;
        goto label_288a44;
    }
    ctx->pc = 0x288A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x288A44u);
        ctx->pc = 0x288A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288A3Cu;
        // 0x288a40: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288A3Cu, 0x288A44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x288A44u;
label_288a44:
    // 0x288a44: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x288a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_288a48:
    // 0x288a48: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x288a48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_288a4c:
    // 0x288a4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x288a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_288a50:
    // 0x288a50: 0x3e00008  jr          $ra
label_288a54:
    if (ctx->pc == 0x288A54u) {
        ctx->pc = 0x288A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288A50u;
        // 0x288a54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288A58u;
        goto label_fallthrough_0x288a50;
    }
    ctx->pc = 0x288A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288A50u;
        // 0x288a54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x288a50:
    ctx->pc = 0x288A58u;
}
