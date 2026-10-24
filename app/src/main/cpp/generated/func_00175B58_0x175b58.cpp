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

// Function: func_00175B58
// Address: 0x175b58 - 0x175e00
void func_00175B58_0x175b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00175B58_0x175b58");
#endif

    switch (ctx->pc) {
        case 0x175b58u: goto label_175b58;
        case 0x175b5cu: goto label_175b5c;
        case 0x175b60u: goto label_175b60;
        case 0x175b64u: goto label_175b64;
        case 0x175b68u: goto label_175b68;
        case 0x175b6cu: goto label_175b6c;
        case 0x175b70u: goto label_175b70;
        case 0x175b74u: goto label_175b74;
        case 0x175b78u: goto label_175b78;
        case 0x175b7cu: goto label_175b7c;
        case 0x175b80u: goto label_175b80;
        case 0x175b84u: goto label_175b84;
        case 0x175b88u: goto label_175b88;
        case 0x175b8cu: goto label_175b8c;
        case 0x175b90u: goto label_175b90;
        case 0x175b94u: goto label_175b94;
        case 0x175b98u: goto label_175b98;
        case 0x175b9cu: goto label_175b9c;
        case 0x175ba0u: goto label_175ba0;
        case 0x175ba4u: goto label_175ba4;
        case 0x175ba8u: goto label_175ba8;
        case 0x175bacu: goto label_175bac;
        case 0x175bb0u: goto label_175bb0;
        case 0x175bb4u: goto label_175bb4;
        case 0x175bb8u: goto label_175bb8;
        case 0x175bbcu: goto label_175bbc;
        case 0x175bc0u: goto label_175bc0;
        case 0x175bc4u: goto label_175bc4;
        case 0x175bc8u: goto label_175bc8;
        case 0x175bccu: goto label_175bcc;
        case 0x175bd0u: goto label_175bd0;
        case 0x175bd4u: goto label_175bd4;
        case 0x175bd8u: goto label_175bd8;
        case 0x175bdcu: goto label_175bdc;
        case 0x175be0u: goto label_175be0;
        case 0x175be4u: goto label_175be4;
        case 0x175be8u: goto label_175be8;
        case 0x175becu: goto label_175bec;
        case 0x175bf0u: goto label_175bf0;
        case 0x175bf4u: goto label_175bf4;
        case 0x175bf8u: goto label_175bf8;
        case 0x175bfcu: goto label_175bfc;
        case 0x175c00u: goto label_175c00;
        case 0x175c04u: goto label_175c04;
        case 0x175c08u: goto label_175c08;
        case 0x175c0cu: goto label_175c0c;
        case 0x175c10u: goto label_175c10;
        case 0x175c14u: goto label_175c14;
        case 0x175c18u: goto label_175c18;
        case 0x175c1cu: goto label_175c1c;
        case 0x175c20u: goto label_175c20;
        case 0x175c24u: goto label_175c24;
        case 0x175c28u: goto label_175c28;
        case 0x175c2cu: goto label_175c2c;
        case 0x175c30u: goto label_175c30;
        case 0x175c34u: goto label_175c34;
        case 0x175c38u: goto label_175c38;
        case 0x175c3cu: goto label_175c3c;
        case 0x175c40u: goto label_175c40;
        case 0x175c44u: goto label_175c44;
        case 0x175c48u: goto label_175c48;
        case 0x175c4cu: goto label_175c4c;
        case 0x175c50u: goto label_175c50;
        case 0x175c54u: goto label_175c54;
        case 0x175c58u: goto label_175c58;
        case 0x175c5cu: goto label_175c5c;
        case 0x175c60u: goto label_175c60;
        case 0x175c64u: goto label_175c64;
        case 0x175c68u: goto label_175c68;
        case 0x175c6cu: goto label_175c6c;
        case 0x175c70u: goto label_175c70;
        case 0x175c74u: goto label_175c74;
        case 0x175c78u: goto label_175c78;
        case 0x175c7cu: goto label_175c7c;
        case 0x175c80u: goto label_175c80;
        case 0x175c84u: goto label_175c84;
        case 0x175c88u: goto label_175c88;
        case 0x175c8cu: goto label_175c8c;
        case 0x175c90u: goto label_175c90;
        case 0x175c94u: goto label_175c94;
        case 0x175c98u: goto label_175c98;
        case 0x175c9cu: goto label_175c9c;
        case 0x175ca0u: goto label_175ca0;
        case 0x175ca4u: goto label_175ca4;
        case 0x175ca8u: goto label_175ca8;
        case 0x175cacu: goto label_175cac;
        case 0x175cb0u: goto label_175cb0;
        case 0x175cb4u: goto label_175cb4;
        case 0x175cb8u: goto label_175cb8;
        case 0x175cbcu: goto label_175cbc;
        case 0x175cc0u: goto label_175cc0;
        case 0x175cc4u: goto label_175cc4;
        case 0x175cc8u: goto label_175cc8;
        case 0x175cccu: goto label_175ccc;
        case 0x175cd0u: goto label_175cd0;
        case 0x175cd4u: goto label_175cd4;
        case 0x175cd8u: goto label_175cd8;
        case 0x175cdcu: goto label_175cdc;
        case 0x175ce0u: goto label_175ce0;
        case 0x175ce4u: goto label_175ce4;
        case 0x175ce8u: goto label_175ce8;
        case 0x175cecu: goto label_175cec;
        case 0x175cf0u: goto label_175cf0;
        case 0x175cf4u: goto label_175cf4;
        case 0x175cf8u: goto label_175cf8;
        case 0x175cfcu: goto label_175cfc;
        case 0x175d00u: goto label_175d00;
        case 0x175d04u: goto label_175d04;
        case 0x175d08u: goto label_175d08;
        case 0x175d0cu: goto label_175d0c;
        case 0x175d10u: goto label_175d10;
        case 0x175d14u: goto label_175d14;
        case 0x175d18u: goto label_175d18;
        case 0x175d1cu: goto label_175d1c;
        case 0x175d20u: goto label_175d20;
        case 0x175d24u: goto label_175d24;
        case 0x175d28u: goto label_175d28;
        case 0x175d2cu: goto label_175d2c;
        case 0x175d30u: goto label_175d30;
        case 0x175d34u: goto label_175d34;
        case 0x175d38u: goto label_175d38;
        case 0x175d3cu: goto label_175d3c;
        case 0x175d40u: goto label_175d40;
        case 0x175d44u: goto label_175d44;
        case 0x175d48u: goto label_175d48;
        case 0x175d4cu: goto label_175d4c;
        case 0x175d50u: goto label_175d50;
        case 0x175d54u: goto label_175d54;
        case 0x175d58u: goto label_175d58;
        case 0x175d5cu: goto label_175d5c;
        case 0x175d60u: goto label_175d60;
        case 0x175d64u: goto label_175d64;
        case 0x175d68u: goto label_175d68;
        case 0x175d6cu: goto label_175d6c;
        case 0x175d70u: goto label_175d70;
        case 0x175d74u: goto label_175d74;
        case 0x175d78u: goto label_175d78;
        case 0x175d7cu: goto label_175d7c;
        case 0x175d80u: goto label_175d80;
        case 0x175d84u: goto label_175d84;
        case 0x175d88u: goto label_175d88;
        case 0x175d8cu: goto label_175d8c;
        case 0x175d90u: goto label_175d90;
        case 0x175d94u: goto label_175d94;
        case 0x175d98u: goto label_175d98;
        case 0x175d9cu: goto label_175d9c;
        case 0x175da0u: goto label_175da0;
        case 0x175da4u: goto label_175da4;
        case 0x175da8u: goto label_175da8;
        case 0x175dacu: goto label_175dac;
        case 0x175db0u: goto label_175db0;
        case 0x175db4u: goto label_175db4;
        case 0x175db8u: goto label_175db8;
        case 0x175dbcu: goto label_175dbc;
        case 0x175dc0u: goto label_175dc0;
        case 0x175dc4u: goto label_175dc4;
        case 0x175dc8u: goto label_175dc8;
        case 0x175dccu: goto label_175dcc;
        case 0x175dd0u: goto label_175dd0;
        case 0x175dd4u: goto label_175dd4;
        case 0x175dd8u: goto label_175dd8;
        case 0x175ddcu: goto label_175ddc;
        case 0x175de0u: goto label_175de0;
        case 0x175de4u: goto label_175de4;
        case 0x175de8u: goto label_175de8;
        case 0x175decu: goto label_175dec;
        case 0x175df0u: goto label_175df0;
        case 0x175df4u: goto label_175df4;
        case 0x175df8u: goto label_175df8;
        case 0x175dfcu: goto label_175dfc;
        default: break;
    }

    ctx->pc = 0x175b58u;

label_175b58:
    // 0x175b58: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x175b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_175b5c:
    // 0x175b5c: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x175b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_175b60:
    // 0x175b60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x175b60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_175b64:
    // 0x175b64: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x175b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_175b68:
    // 0x175b68: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x175b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_175b6c:
    // 0x175b6c: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x175b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_175b70:
    // 0x175b70: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x175b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_175b74:
    // 0x175b74: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x175b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_175b78:
    // 0x175b78: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x175b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_175b7c:
    // 0x175b7c: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x175b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_175b80:
    // 0x175b80: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x175b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_175b84:
    // 0x175b84: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x175b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_175b88:
    // 0x175b88: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x175b88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_175b8c:
    // 0x175b8c: 0xc06ddac  jal         func_1B76B0
label_175b90:
    if (ctx->pc == 0x175B90u) {
        ctx->pc = 0x175B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B8Cu;
        // 0x175b90: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x175B94u;
        goto label_175b94;
    }
    ctx->pc = 0x175B8Cu;
    SET_GPR_U32(ctx, 31, 0x175B94u);
    ctx->pc = 0x175B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175B8Cu;
    // 0x175b90: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x175B8Cu, 0x175B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175B94u;
label_175b94:
    // 0x175b94: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
label_175b98:
    if (ctx->pc == 0x175B98u) {
        ctx->pc = 0x175B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B94u;
        // 0x175b98: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175B9Cu;
        goto label_175b9c;
    }
    ctx->pc = 0x175B94u;
    {
        const bool branch_taken_0x175b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B94u;
        // 0x175b98: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175b94) {
            ctx->pc = 0x175DC4u;
            goto label_175dc4;
        }
    }
    ctx->pc = 0x175B9Cu;
label_175b9c:
    // 0x175b9c: 0x924302f4  lbu         $v1, 0x2F4($s2)
    ctx->pc = 0x175b9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
label_175ba0:
    // 0x175ba0: 0x244711a0  addiu       $a3, $v0, 0x11A0
    ctx->pc = 0x175ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4512));
label_175ba4:
    // 0x175ba4: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x175ba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_175ba8:
    // 0x175ba8: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x175ba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_175bac:
    // 0x175bac: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x175bacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_175bb0:
    // 0x175bb0: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x175bb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_175bb4:
    // 0x175bb4: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x175bb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_175bb8:
    // 0x175bb8: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x175bb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_175bbc:
    // 0x175bbc: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x175bbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_175bc0:
    // 0x175bc0: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x175bc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_175bc4:
    // 0x175bc4: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x175bc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_175bc8:
    // 0x175bc8: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x175bc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_175bcc:
    // 0x175bcc: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x175bccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_175bd0:
    // 0x175bd0: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x175bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_175bd4:
    // 0x175bd4: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x175bd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_175bd8:
    // 0x175bd8: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x175bd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_175bdc:
    // 0x175bdc: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x175bdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_175be0:
    // 0x175be0: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x175be0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_175be4:
    // 0x175be4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x175be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_175be8:
    // 0x175be8: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x175be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_175bec:
    // 0x175bec: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x175becu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_175bf0:
    // 0x175bf0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x175bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_175bf4:
    // 0x175bf4: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x175bf4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_175bf8:
    // 0x175bf8: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_175bfc:
    if (ctx->pc == 0x175BFCu) {
        ctx->pc = 0x175BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175BF8u;
        // 0x175bfc: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175C00u;
        goto label_175c00;
    }
    ctx->pc = 0x175BF8u;
    {
        const bool branch_taken_0x175bf8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x175BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175BF8u;
        // 0x175bfc: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175bf8) {
            ctx->pc = 0x175C2Cu;
            goto label_175c2c;
        }
    }
    ctx->pc = 0x175C00u;
label_175c00:
    // 0x175c00: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x175c00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_175c04:
    // 0x175c04: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x175c04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_175c08:
    // 0x175c08: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x175c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_175c0c:
    // 0x175c0c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x175c0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_175c10:
    // 0x175c10: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x175c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_175c14:
    // 0x175c14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x175c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_175c18:
    // 0x175c18: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x175c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_175c1c:
    // 0x175c1c: 0xdc90fff8  ld          $s0, -0x8($a0)
    ctx->pc = 0x175c1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_175c20:
    // 0x175c20: 0x10303f  dsra32      $a2, $s0, 0
    ctx->pc = 0x175c20u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 16) >> (32 + 0));
label_175c24:
    // 0x175c24: 0x10000004  b           . + 4 + (0x4 << 2)
label_175c28:
    if (ctx->pc == 0x175C28u) {
        ctx->pc = 0x175C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C24u;
        // 0x175c28: 0x924202f4  lbu         $v0, 0x2F4($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175C2Cu;
        goto label_175c2c;
    }
    ctx->pc = 0x175C24u;
    {
        const bool branch_taken_0x175c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C24u;
        // 0x175c28: 0x924202f4  lbu         $v0, 0x2F4($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c24) {
            ctx->pc = 0x175C38u;
            goto label_175c38;
        }
    }
    ctx->pc = 0x175C2Cu;
label_175c2c:
    // 0x175c2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_175c30:
    // 0x175c30: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x175c30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_175c34:
    // 0x175c34: 0x924202f4  lbu         $v0, 0x2F4($s2)
    ctx->pc = 0x175c34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
label_175c38:
    // 0x175c38: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x175c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_175c3c:
    // 0x175c3c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x175c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_175c40:
    // 0x175c40: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_175c44:
    if (ctx->pc == 0x175C44u) {
        ctx->pc = 0x175C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C40u;
        // 0x175c44: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175C48u;
        goto label_175c48;
    }
    ctx->pc = 0x175C40u;
    {
        const bool branch_taken_0x175c40 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x175C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C40u;
        // 0x175c44: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c40) {
            ctx->pc = 0x175C5Cu;
            goto label_175c5c;
        }
    }
    ctx->pc = 0x175C48u;
label_175c48:
    // 0x175c48: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x175c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_175c4c:
    // 0x175c4c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x175c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_175c50:
    // 0x175c50: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x175c50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_175c54:
    // 0x175c54: 0x10000002  b           . + 4 + (0x2 << 2)
label_175c58:
    if (ctx->pc == 0x175C58u) {
        ctx->pc = 0x175C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C54u;
        // 0x175c58: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175C5Cu;
        goto label_175c5c;
    }
    ctx->pc = 0x175C54u;
    {
        const bool branch_taken_0x175c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C54u;
        // 0x175c58: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c54) {
            ctx->pc = 0x175C60u;
            goto label_175c60;
        }
    }
    ctx->pc = 0x175C5Cu;
label_175c5c:
    // 0x175c5c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x175c5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_175c60:
    // 0x175c60: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x175c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_175c64:
    // 0x175c64: 0xc0f809  jalr        $a2
label_175c68:
    if (ctx->pc == 0x175C68u) {
        ctx->pc = 0x175C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C64u;
        // 0x175c68: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175C6Cu;
        goto label_175c6c;
    }
    ctx->pc = 0x175C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x175C6Cu);
        ctx->pc = 0x175C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C64u;
        // 0x175c68: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175C64u, 0x175C6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x175C6Cu;
label_175c6c:
    // 0x175c6c: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x175c6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_175c70:
    // 0x175c70: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_175c74:
    if (ctx->pc == 0x175C74u) {
        ctx->pc = 0x175C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C70u;
        // 0x175c74: 0x27be0030  addiu       $fp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175C78u;
        goto label_175c78;
    }
    ctx->pc = 0x175C70u;
    {
        const bool branch_taken_0x175c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C70u;
        // 0x175c74: 0x27be0030  addiu       $fp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c70) {
            ctx->pc = 0x175DBCu;
            goto label_175dbc;
        }
    }
    ctx->pc = 0x175C78u;
label_175c78:
    // 0x175c78: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x175c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_175c7c:
    // 0x175c7c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x175c7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_175c80:
    // 0x175c80: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x175c80u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_175c84:
    // 0x175c84: 0x26550650  addiu       $s5, $s2, 0x650
    ctx->pc = 0x175c84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1616));
label_175c88:
    // 0x175c88: 0x26500620  addiu       $s0, $s2, 0x620
    ctx->pc = 0x175c88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1568));
label_175c8c:
    // 0x175c8c: 0x26540640  addiu       $s4, $s2, 0x640
    ctx->pc = 0x175c8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1600));
label_175c90:
    // 0x175c90: 0x26530630  addiu       $s3, $s2, 0x630
    ctx->pc = 0x175c90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1584));
label_175c94:
    // 0x175c94: 0x26510610  addiu       $s1, $s2, 0x610
    ctx->pc = 0x175c94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1552));
label_175c98:
    // 0x175c98: 0xc05ce40  jal         func_173900
label_175c9c:
    if (ctx->pc == 0x175C9Cu) {
        ctx->pc = 0x175C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C98u;
        // 0x175c9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175CA0u;
        goto label_175ca0;
    }
    ctx->pc = 0x175C98u;
    SET_GPR_U32(ctx, 31, 0x175CA0u);
    ctx->pc = 0x175C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175C98u;
    // 0x175c9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x175C98u, 0x175CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175CA0u;
label_175ca0:
    // 0x175ca0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x175ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_175ca4:
    // 0x175ca4: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
label_175ca8:
    if (ctx->pc == 0x175CA8u) {
        ctx->pc = 0x175CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CA4u;
        // 0x175ca8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175CACu;
        goto label_175cac;
    }
    ctx->pc = 0x175CA4u;
    {
        const bool branch_taken_0x175ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x175ca4) {
            ctx->pc = 0x175CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175CA4u;
            // 0x175ca8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175D94u;
            goto label_175d94;
        }
    }
    ctx->pc = 0x175CACu;
label_175cac:
    // 0x175cac: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x175cacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_175cb0:
    // 0x175cb0: 0xc0a4bd4  jal         func_292F50
label_175cb4:
    if (ctx->pc == 0x175CB4u) {
        ctx->pc = 0x175CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CB0u;
        // 0x175cb4: 0x24a464f0  addiu       $a0, $a1, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175CB8u;
        goto label_175cb8;
    }
    ctx->pc = 0x175CB0u;
    SET_GPR_U32(ctx, 31, 0x175CB8u);
    ctx->pc = 0x175CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175CB0u;
    // 0x175cb4: 0x24a464f0  addiu       $a0, $a1, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x175CB0u, 0x175CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175CB8u;
label_175cb8:
    // 0x175cb8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x175cb8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_175cbc:
    // 0x175cbc: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x175cbcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_175cc0:
    // 0x175cc0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x175cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_175cc4:
    // 0x175cc4: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x175cc4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_175cc8:
    // 0x175cc8: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x175cc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_175ccc:
    // 0x175ccc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x175cccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_175cd0:
    // 0x175cd0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x175cd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_175cd4:
    // 0x175cd4: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x175cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_175cd8:
    // 0x175cd8: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x175cd8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_175cdc:
    // 0x175cdc: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x175cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_175ce0:
    // 0x175ce0: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x175ce0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_175ce4:
    // 0x175ce4: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x175ce4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_175ce8:
    // 0x175ce8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x175ce8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_175cec:
    // 0x175cec: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x175cecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
label_175cf0:
    // 0x175cf0: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x175cf0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_175cf4:
    // 0x175cf4: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x175cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_175cf8:
    // 0x175cf8: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x175cf8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_175cfc:
    // 0x175cfc: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x175cfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_175d00:
    // 0x175d00: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x175d00u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_175d04:
    // 0x175d04: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x175d04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_175d08:
    // 0x175d08: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x175d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_175d0c:
    // 0x175d0c: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x175d0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_175d10:
    // 0x175d10: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x175d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_175d14:
    // 0x175d14: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x175d14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_175d18:
    // 0x175d18: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x175d18u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_175d1c:
    // 0x175d1c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x175d1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_175d20:
    // 0x175d20: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x175d20u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_175d24:
    // 0x175d24: 0xc07df68  jal         func_1F7DA0
label_175d28:
    if (ctx->pc == 0x175D28u) {
        ctx->pc = 0x175D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175D24u;
        // 0x175d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175D2Cu;
        goto label_175d2c;
    }
    ctx->pc = 0x175D24u;
    SET_GPR_U32(ctx, 31, 0x175D2Cu);
    ctx->pc = 0x175D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175D24u;
    // 0x175d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x175D24u, 0x175D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175D2Cu;
label_175d2c:
    // 0x175d2c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x175d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_175d30:
    // 0x175d30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175d34:
    // 0x175d34: 0xc051dca  jal         func_147728
label_175d38:
    if (ctx->pc == 0x175D38u) {
        ctx->pc = 0x175D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175D34u;
        // 0x175d38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175D3Cu;
        goto label_175d3c;
    }
    ctx->pc = 0x175D34u;
    SET_GPR_U32(ctx, 31, 0x175D3Cu);
    ctx->pc = 0x175D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175D34u;
    // 0x175d38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x175D34u, 0x175D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175D3Cu;
label_175d3c:
    // 0x175d3c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x175d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_175d40:
    // 0x175d40: 0xc051f10  jal         func_147C40
label_175d44:
    if (ctx->pc == 0x175D44u) {
        ctx->pc = 0x175D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175D40u;
        // 0x175d44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175D48u;
        goto label_175d48;
    }
    ctx->pc = 0x175D40u;
    SET_GPR_U32(ctx, 31, 0x175D48u);
    ctx->pc = 0x175D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175D40u;
    // 0x175d44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x175D40u, 0x175D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175D48u;
label_175d48:
    // 0x175d48: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x175d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_175d4c:
    // 0x175d4c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x175d4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_175d50:
    // 0x175d50: 0xc051efe  jal         func_147BF8
label_175d54:
    if (ctx->pc == 0x175D54u) {
        ctx->pc = 0x175D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175D50u;
        // 0x175d54: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175D58u;
        goto label_175d58;
    }
    ctx->pc = 0x175D50u;
    SET_GPR_U32(ctx, 31, 0x175D58u);
    ctx->pc = 0x175D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175D50u;
    // 0x175d54: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x175D50u, 0x175D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175D58u;
label_175d58:
    // 0x175d58: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x175d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_175d5c:
    // 0x175d5c: 0xc051d4a  jal         func_147528
label_175d60:
    if (ctx->pc == 0x175D60u) {
        ctx->pc = 0x175D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175D5Cu;
        // 0x175d60: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175D64u;
        goto label_175d64;
    }
    ctx->pc = 0x175D5Cu;
    SET_GPR_U32(ctx, 31, 0x175D64u);
    ctx->pc = 0x175D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175D5Cu;
    // 0x175d60: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x175D5Cu, 0x175D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175D64u;
label_175d64:
    // 0x175d64: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x175d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_175d68:
    // 0x175d68: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x175d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_175d6c:
    // 0x175d6c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x175d6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_175d70:
    // 0x175d70: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x175d70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_175d74:
    // 0x175d74: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x175d74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_175d78:
    // 0x175d78: 0x0  nop
    ctx->pc = 0x175d78u;
    // NOP
label_175d7c:
    // 0x175d7c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_175d80:
    if (ctx->pc == 0x175D80u) {
        ctx->pc = 0x175D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175D7Cu;
        // 0x175d80: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x175D84u;
        goto label_175d84;
    }
    ctx->pc = 0x175D7Cu;
    {
        const bool branch_taken_0x175d7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x175D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175D7Cu;
        // 0x175d80: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x175d7c) {
            ctx->pc = 0x175D90u;
            goto label_175d90;
        }
    }
    ctx->pc = 0x175D84u;
label_175d84:
    // 0x175d84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x175d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_175d88:
    // 0x175d88: 0xc05bd90  jal         func_16F640
label_175d8c:
    if (ctx->pc == 0x175D8Cu) {
        ctx->pc = 0x175D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175D88u;
        // 0x175d8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175D90u;
        goto label_175d90;
    }
    ctx->pc = 0x175D88u;
    SET_GPR_U32(ctx, 31, 0x175D90u);
    ctx->pc = 0x175D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175D88u;
    // 0x175d8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x175D88u, 0x175D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175D90u;
label_175d90:
    // 0x175d90: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x175d90u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_175d94:
    // 0x175d94: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x175d94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_175d98:
    // 0x175d98: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x175d98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_175d9c:
    // 0x175d9c: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x175d9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_175da0:
    // 0x175da0: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x175da0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_175da4:
    // 0x175da4: 0x2ac20013  slti        $v0, $s6, 0x13
    ctx->pc = 0x175da4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)19) ? 1 : 0);
label_175da8:
    // 0x175da8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_175dac:
    if (ctx->pc == 0x175DACu) {
        ctx->pc = 0x175DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175DA8u;
        // 0x175dac: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175DB0u;
        goto label_175db0;
    }
    ctx->pc = 0x175DA8u;
    {
        const bool branch_taken_0x175da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175DA8u;
        // 0x175dac: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175da8) {
            ctx->pc = 0x175DBCu;
            goto label_175dbc;
        }
    }
    ctx->pc = 0x175DB0u;
label_175db0:
    // 0x175db0: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x175db0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_175db4:
    // 0x175db4: 0x1456ffb8  bne         $v0, $s6, . + 4 + (-0x48 << 2)
label_175db8:
    if (ctx->pc == 0x175DB8u) {
        ctx->pc = 0x175DBCu;
        goto label_175dbc;
    }
    ctx->pc = 0x175DB4u;
    {
        const bool branch_taken_0x175db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x175db4) {
            ctx->pc = 0x175C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175c98;
        }
    }
    ctx->pc = 0x175DBCu;
label_175dbc:
    // 0x175dbc: 0xc06ddb6  jal         func_1B76D8
label_175dc0:
    if (ctx->pc == 0x175DC0u) {
        ctx->pc = 0x175DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175DBCu;
        // 0x175dc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175DC4u;
        goto label_175dc4;
    }
    ctx->pc = 0x175DBCu;
    SET_GPR_U32(ctx, 31, 0x175DC4u);
    ctx->pc = 0x175DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175DBCu;
    // 0x175dc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x175DBCu, 0x175DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175DC4u;
label_175dc4:
    // 0x175dc4: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x175dc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_175dc8:
    // 0x175dc8: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x175dc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_175dcc:
    // 0x175dcc: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x175dccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_175dd0:
    // 0x175dd0: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x175dd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_175dd4:
    // 0x175dd4: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x175dd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_175dd8:
    // 0x175dd8: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x175dd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_175ddc:
    // 0x175ddc: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x175ddcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_175de0:
    // 0x175de0: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x175de0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_175de4:
    // 0x175de4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x175de4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_175de8:
    // 0x175de8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x175de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_175dec:
    // 0x175dec: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x175decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_175df0:
    // 0x175df0: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x175df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_175df4:
    // 0x175df4: 0x3e00008  jr          $ra
label_175df8:
    if (ctx->pc == 0x175DF8u) {
        ctx->pc = 0x175DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175DF4u;
        // 0x175df8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175DFCu;
        goto label_175dfc;
    }
    ctx->pc = 0x175DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175DF4u;
        // 0x175df8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175DFCu;
label_175dfc:
    // 0x175dfc: 0x0  nop
    ctx->pc = 0x175dfcu;
    // NOP
    ctx->pc = 0x175e00u;
}
