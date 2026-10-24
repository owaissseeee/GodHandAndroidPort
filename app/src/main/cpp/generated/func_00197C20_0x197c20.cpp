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

// Function: func_00197C20
// Address: 0x197c20 - 0x197ec8
void func_00197C20_0x197c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00197C20_0x197c20");
#endif

    switch (ctx->pc) {
        case 0x197c20u: goto label_197c20;
        case 0x197c24u: goto label_197c24;
        case 0x197c28u: goto label_197c28;
        case 0x197c2cu: goto label_197c2c;
        case 0x197c30u: goto label_197c30;
        case 0x197c34u: goto label_197c34;
        case 0x197c38u: goto label_197c38;
        case 0x197c3cu: goto label_197c3c;
        case 0x197c40u: goto label_197c40;
        case 0x197c44u: goto label_197c44;
        case 0x197c48u: goto label_197c48;
        case 0x197c4cu: goto label_197c4c;
        case 0x197c50u: goto label_197c50;
        case 0x197c54u: goto label_197c54;
        case 0x197c58u: goto label_197c58;
        case 0x197c5cu: goto label_197c5c;
        case 0x197c60u: goto label_197c60;
        case 0x197c64u: goto label_197c64;
        case 0x197c68u: goto label_197c68;
        case 0x197c6cu: goto label_197c6c;
        case 0x197c70u: goto label_197c70;
        case 0x197c74u: goto label_197c74;
        case 0x197c78u: goto label_197c78;
        case 0x197c7cu: goto label_197c7c;
        case 0x197c80u: goto label_197c80;
        case 0x197c84u: goto label_197c84;
        case 0x197c88u: goto label_197c88;
        case 0x197c8cu: goto label_197c8c;
        case 0x197c90u: goto label_197c90;
        case 0x197c94u: goto label_197c94;
        case 0x197c98u: goto label_197c98;
        case 0x197c9cu: goto label_197c9c;
        case 0x197ca0u: goto label_197ca0;
        case 0x197ca4u: goto label_197ca4;
        case 0x197ca8u: goto label_197ca8;
        case 0x197cacu: goto label_197cac;
        case 0x197cb0u: goto label_197cb0;
        case 0x197cb4u: goto label_197cb4;
        case 0x197cb8u: goto label_197cb8;
        case 0x197cbcu: goto label_197cbc;
        case 0x197cc0u: goto label_197cc0;
        case 0x197cc4u: goto label_197cc4;
        case 0x197cc8u: goto label_197cc8;
        case 0x197cccu: goto label_197ccc;
        case 0x197cd0u: goto label_197cd0;
        case 0x197cd4u: goto label_197cd4;
        case 0x197cd8u: goto label_197cd8;
        case 0x197cdcu: goto label_197cdc;
        case 0x197ce0u: goto label_197ce0;
        case 0x197ce4u: goto label_197ce4;
        case 0x197ce8u: goto label_197ce8;
        case 0x197cecu: goto label_197cec;
        case 0x197cf0u: goto label_197cf0;
        case 0x197cf4u: goto label_197cf4;
        case 0x197cf8u: goto label_197cf8;
        case 0x197cfcu: goto label_197cfc;
        case 0x197d00u: goto label_197d00;
        case 0x197d04u: goto label_197d04;
        case 0x197d08u: goto label_197d08;
        case 0x197d0cu: goto label_197d0c;
        case 0x197d10u: goto label_197d10;
        case 0x197d14u: goto label_197d14;
        case 0x197d18u: goto label_197d18;
        case 0x197d1cu: goto label_197d1c;
        case 0x197d20u: goto label_197d20;
        case 0x197d24u: goto label_197d24;
        case 0x197d28u: goto label_197d28;
        case 0x197d2cu: goto label_197d2c;
        case 0x197d30u: goto label_197d30;
        case 0x197d34u: goto label_197d34;
        case 0x197d38u: goto label_197d38;
        case 0x197d3cu: goto label_197d3c;
        case 0x197d40u: goto label_197d40;
        case 0x197d44u: goto label_197d44;
        case 0x197d48u: goto label_197d48;
        case 0x197d4cu: goto label_197d4c;
        case 0x197d50u: goto label_197d50;
        case 0x197d54u: goto label_197d54;
        case 0x197d58u: goto label_197d58;
        case 0x197d5cu: goto label_197d5c;
        case 0x197d60u: goto label_197d60;
        case 0x197d64u: goto label_197d64;
        case 0x197d68u: goto label_197d68;
        case 0x197d6cu: goto label_197d6c;
        case 0x197d70u: goto label_197d70;
        case 0x197d74u: goto label_197d74;
        case 0x197d78u: goto label_197d78;
        case 0x197d7cu: goto label_197d7c;
        case 0x197d80u: goto label_197d80;
        case 0x197d84u: goto label_197d84;
        case 0x197d88u: goto label_197d88;
        case 0x197d8cu: goto label_197d8c;
        case 0x197d90u: goto label_197d90;
        case 0x197d94u: goto label_197d94;
        case 0x197d98u: goto label_197d98;
        case 0x197d9cu: goto label_197d9c;
        case 0x197da0u: goto label_197da0;
        case 0x197da4u: goto label_197da4;
        case 0x197da8u: goto label_197da8;
        case 0x197dacu: goto label_197dac;
        case 0x197db0u: goto label_197db0;
        case 0x197db4u: goto label_197db4;
        case 0x197db8u: goto label_197db8;
        case 0x197dbcu: goto label_197dbc;
        case 0x197dc0u: goto label_197dc0;
        case 0x197dc4u: goto label_197dc4;
        case 0x197dc8u: goto label_197dc8;
        case 0x197dccu: goto label_197dcc;
        case 0x197dd0u: goto label_197dd0;
        case 0x197dd4u: goto label_197dd4;
        case 0x197dd8u: goto label_197dd8;
        case 0x197ddcu: goto label_197ddc;
        case 0x197de0u: goto label_197de0;
        case 0x197de4u: goto label_197de4;
        case 0x197de8u: goto label_197de8;
        case 0x197decu: goto label_197dec;
        case 0x197df0u: goto label_197df0;
        case 0x197df4u: goto label_197df4;
        case 0x197df8u: goto label_197df8;
        case 0x197dfcu: goto label_197dfc;
        case 0x197e00u: goto label_197e00;
        case 0x197e04u: goto label_197e04;
        case 0x197e08u: goto label_197e08;
        case 0x197e0cu: goto label_197e0c;
        case 0x197e10u: goto label_197e10;
        case 0x197e14u: goto label_197e14;
        case 0x197e18u: goto label_197e18;
        case 0x197e1cu: goto label_197e1c;
        case 0x197e20u: goto label_197e20;
        case 0x197e24u: goto label_197e24;
        case 0x197e28u: goto label_197e28;
        case 0x197e2cu: goto label_197e2c;
        case 0x197e30u: goto label_197e30;
        case 0x197e34u: goto label_197e34;
        case 0x197e38u: goto label_197e38;
        case 0x197e3cu: goto label_197e3c;
        case 0x197e40u: goto label_197e40;
        case 0x197e44u: goto label_197e44;
        case 0x197e48u: goto label_197e48;
        case 0x197e4cu: goto label_197e4c;
        case 0x197e50u: goto label_197e50;
        case 0x197e54u: goto label_197e54;
        case 0x197e58u: goto label_197e58;
        case 0x197e5cu: goto label_197e5c;
        case 0x197e60u: goto label_197e60;
        case 0x197e64u: goto label_197e64;
        case 0x197e68u: goto label_197e68;
        case 0x197e6cu: goto label_197e6c;
        case 0x197e70u: goto label_197e70;
        case 0x197e74u: goto label_197e74;
        case 0x197e78u: goto label_197e78;
        case 0x197e7cu: goto label_197e7c;
        case 0x197e80u: goto label_197e80;
        case 0x197e84u: goto label_197e84;
        case 0x197e88u: goto label_197e88;
        case 0x197e8cu: goto label_197e8c;
        case 0x197e90u: goto label_197e90;
        case 0x197e94u: goto label_197e94;
        case 0x197e98u: goto label_197e98;
        case 0x197e9cu: goto label_197e9c;
        case 0x197ea0u: goto label_197ea0;
        case 0x197ea4u: goto label_197ea4;
        case 0x197ea8u: goto label_197ea8;
        case 0x197eacu: goto label_197eac;
        case 0x197eb0u: goto label_197eb0;
        case 0x197eb4u: goto label_197eb4;
        case 0x197eb8u: goto label_197eb8;
        case 0x197ebcu: goto label_197ebc;
        case 0x197ec0u: goto label_197ec0;
        case 0x197ec4u: goto label_197ec4;
        default: break;
    }

    ctx->pc = 0x197c20u;

label_197c20:
    // 0x197c20: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x197c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_197c24:
    // 0x197c24: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x197c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_197c28:
    // 0x197c28: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x197c28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_197c2c:
    // 0x197c2c: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x197c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_197c30:
    // 0x197c30: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x197c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_197c34:
    // 0x197c34: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x197c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_197c38:
    // 0x197c38: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x197c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_197c3c:
    // 0x197c3c: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x197c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_197c40:
    // 0x197c40: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x197c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_197c44:
    // 0x197c44: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x197c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_197c48:
    // 0x197c48: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x197c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_197c4c:
    // 0x197c4c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x197c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_197c50:
    // 0x197c50: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x197c50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_197c54:
    // 0x197c54: 0xc06ddac  jal         func_1B76B0
label_197c58:
    if (ctx->pc == 0x197C58u) {
        ctx->pc = 0x197C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C54u;
        // 0x197c58: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x197C5Cu;
        goto label_197c5c;
    }
    ctx->pc = 0x197C54u;
    SET_GPR_U32(ctx, 31, 0x197C5Cu);
    ctx->pc = 0x197C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197C54u;
    // 0x197c58: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x197C54u, 0x197C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197C5Cu;
label_197c5c:
    // 0x197c5c: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
label_197c60:
    if (ctx->pc == 0x197C60u) {
        ctx->pc = 0x197C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C5Cu;
        // 0x197c60: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197C64u;
        goto label_197c64;
    }
    ctx->pc = 0x197C5Cu;
    {
        const bool branch_taken_0x197c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C5Cu;
        // 0x197c60: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197c5c) {
            ctx->pc = 0x197E8Cu;
            goto label_197e8c;
        }
    }
    ctx->pc = 0x197C64u;
label_197c64:
    // 0x197c64: 0x924302f4  lbu         $v1, 0x2F4($s2)
    ctx->pc = 0x197c64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
label_197c68:
    // 0x197c68: 0x24474ef0  addiu       $a3, $v0, 0x4EF0
    ctx->pc = 0x197c68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 20208));
label_197c6c:
    // 0x197c6c: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x197c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_197c70:
    // 0x197c70: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x197c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_197c74:
    // 0x197c74: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x197c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_197c78:
    // 0x197c78: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x197c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_197c7c:
    // 0x197c7c: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x197c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_197c80:
    // 0x197c80: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x197c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_197c84:
    // 0x197c84: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x197c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_197c88:
    // 0x197c88: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x197c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_197c8c:
    // 0x197c8c: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x197c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_197c90:
    // 0x197c90: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x197c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_197c94:
    // 0x197c94: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x197c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_197c98:
    // 0x197c98: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x197c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_197c9c:
    // 0x197c9c: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x197c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_197ca0:
    // 0x197ca0: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x197ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_197ca4:
    // 0x197ca4: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x197ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_197ca8:
    // 0x197ca8: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x197ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_197cac:
    // 0x197cac: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x197cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_197cb0:
    // 0x197cb0: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x197cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_197cb4:
    // 0x197cb4: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x197cb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_197cb8:
    // 0x197cb8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x197cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_197cbc:
    // 0x197cbc: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x197cbcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_197cc0:
    // 0x197cc0: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_197cc4:
    if (ctx->pc == 0x197CC4u) {
        ctx->pc = 0x197CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197CC0u;
        // 0x197cc4: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197CC8u;
        goto label_197cc8;
    }
    ctx->pc = 0x197CC0u;
    {
        const bool branch_taken_0x197cc0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x197CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197CC0u;
        // 0x197cc4: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197cc0) {
            ctx->pc = 0x197CF4u;
            goto label_197cf4;
        }
    }
    ctx->pc = 0x197CC8u;
label_197cc8:
    // 0x197cc8: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x197cc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_197ccc:
    // 0x197ccc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x197cccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_197cd0:
    // 0x197cd0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x197cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_197cd4:
    // 0x197cd4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x197cd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_197cd8:
    // 0x197cd8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x197cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_197cdc:
    // 0x197cdc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x197cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_197ce0:
    // 0x197ce0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x197ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_197ce4:
    // 0x197ce4: 0xdc90fff8  ld          $s0, -0x8($a0)
    ctx->pc = 0x197ce4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_197ce8:
    // 0x197ce8: 0x10303f  dsra32      $a2, $s0, 0
    ctx->pc = 0x197ce8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 16) >> (32 + 0));
label_197cec:
    // 0x197cec: 0x10000004  b           . + 4 + (0x4 << 2)
label_197cf0:
    if (ctx->pc == 0x197CF0u) {
        ctx->pc = 0x197CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197CECu;
        // 0x197cf0: 0x924202f4  lbu         $v0, 0x2F4($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197CF4u;
        goto label_197cf4;
    }
    ctx->pc = 0x197CECu;
    {
        const bool branch_taken_0x197cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197CECu;
        // 0x197cf0: 0x924202f4  lbu         $v0, 0x2F4($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197cec) {
            ctx->pc = 0x197D00u;
            goto label_197d00;
        }
    }
    ctx->pc = 0x197CF4u;
label_197cf4:
    // 0x197cf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_197cf8:
    // 0x197cf8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x197cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_197cfc:
    // 0x197cfc: 0x924202f4  lbu         $v0, 0x2F4($s2)
    ctx->pc = 0x197cfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
label_197d00:
    // 0x197d00: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x197d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_197d04:
    // 0x197d04: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x197d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_197d08:
    // 0x197d08: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_197d0c:
    if (ctx->pc == 0x197D0Cu) {
        ctx->pc = 0x197D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D08u;
        // 0x197d0c: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197D10u;
        goto label_197d10;
    }
    ctx->pc = 0x197D08u;
    {
        const bool branch_taken_0x197d08 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x197D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D08u;
        // 0x197d0c: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d08) {
            ctx->pc = 0x197D24u;
            goto label_197d24;
        }
    }
    ctx->pc = 0x197D10u;
label_197d10:
    // 0x197d10: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x197d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_197d14:
    // 0x197d14: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x197d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_197d18:
    // 0x197d18: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x197d18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_197d1c:
    // 0x197d1c: 0x10000002  b           . + 4 + (0x2 << 2)
label_197d20:
    if (ctx->pc == 0x197D20u) {
        ctx->pc = 0x197D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D1Cu;
        // 0x197d20: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197D24u;
        goto label_197d24;
    }
    ctx->pc = 0x197D1Cu;
    {
        const bool branch_taken_0x197d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D1Cu;
        // 0x197d20: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d1c) {
            ctx->pc = 0x197D28u;
            goto label_197d28;
        }
    }
    ctx->pc = 0x197D24u;
label_197d24:
    // 0x197d24: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x197d24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_197d28:
    // 0x197d28: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x197d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_197d2c:
    // 0x197d2c: 0xc0f809  jalr        $a2
label_197d30:
    if (ctx->pc == 0x197D30u) {
        ctx->pc = 0x197D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D2Cu;
        // 0x197d30: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197D34u;
        goto label_197d34;
    }
    ctx->pc = 0x197D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x197D34u);
        ctx->pc = 0x197D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D2Cu;
        // 0x197d30: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197D2Cu, 0x197D34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197D34u;
label_197d34:
    // 0x197d34: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x197d34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_197d38:
    // 0x197d38: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_197d3c:
    if (ctx->pc == 0x197D3Cu) {
        ctx->pc = 0x197D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D38u;
        // 0x197d3c: 0x27be0030  addiu       $fp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197D40u;
        goto label_197d40;
    }
    ctx->pc = 0x197D38u;
    {
        const bool branch_taken_0x197d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D38u;
        // 0x197d3c: 0x27be0030  addiu       $fp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d38) {
            ctx->pc = 0x197E84u;
            goto label_197e84;
        }
    }
    ctx->pc = 0x197D40u;
label_197d40:
    // 0x197d40: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x197d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_197d44:
    // 0x197d44: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x197d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_197d48:
    // 0x197d48: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x197d48u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_197d4c:
    // 0x197d4c: 0x26550650  addiu       $s5, $s2, 0x650
    ctx->pc = 0x197d4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1616));
label_197d50:
    // 0x197d50: 0x26500620  addiu       $s0, $s2, 0x620
    ctx->pc = 0x197d50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1568));
label_197d54:
    // 0x197d54: 0x26540640  addiu       $s4, $s2, 0x640
    ctx->pc = 0x197d54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1600));
label_197d58:
    // 0x197d58: 0x26530630  addiu       $s3, $s2, 0x630
    ctx->pc = 0x197d58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1584));
label_197d5c:
    // 0x197d5c: 0x26510610  addiu       $s1, $s2, 0x610
    ctx->pc = 0x197d5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1552));
label_197d60:
    // 0x197d60: 0xc05ce40  jal         func_173900
label_197d64:
    if (ctx->pc == 0x197D64u) {
        ctx->pc = 0x197D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D60u;
        // 0x197d64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197D68u;
        goto label_197d68;
    }
    ctx->pc = 0x197D60u;
    SET_GPR_U32(ctx, 31, 0x197D68u);
    ctx->pc = 0x197D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197D60u;
    // 0x197d64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x197D60u, 0x197D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197D68u;
label_197d68:
    // 0x197d68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x197d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_197d6c:
    // 0x197d6c: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
label_197d70:
    if (ctx->pc == 0x197D70u) {
        ctx->pc = 0x197D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D6Cu;
        // 0x197d70: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197D74u;
        goto label_197d74;
    }
    ctx->pc = 0x197D6Cu;
    {
        const bool branch_taken_0x197d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x197d6c) {
            ctx->pc = 0x197D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197D6Cu;
            // 0x197d70: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197E5Cu;
            goto label_197e5c;
        }
    }
    ctx->pc = 0x197D74u;
label_197d74:
    // 0x197d74: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x197d74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_197d78:
    // 0x197d78: 0xc0a4bd4  jal         func_292F50
label_197d7c:
    if (ctx->pc == 0x197D7Cu) {
        ctx->pc = 0x197D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D78u;
        // 0x197d7c: 0x24a464f0  addiu       $a0, $a1, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197D80u;
        goto label_197d80;
    }
    ctx->pc = 0x197D78u;
    SET_GPR_U32(ctx, 31, 0x197D80u);
    ctx->pc = 0x197D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197D78u;
    // 0x197d7c: 0x24a464f0  addiu       $a0, $a1, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x197D78u, 0x197D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197D80u;
label_197d80:
    // 0x197d80: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x197d80u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_197d84:
    // 0x197d84: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x197d84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_197d88:
    // 0x197d88: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x197d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_197d8c:
    // 0x197d8c: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x197d8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_197d90:
    // 0x197d90: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x197d90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_197d94:
    // 0x197d94: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x197d94u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_197d98:
    // 0x197d98: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x197d98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_197d9c:
    // 0x197d9c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x197d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_197da0:
    // 0x197da0: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x197da0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_197da4:
    // 0x197da4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x197da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_197da8:
    // 0x197da8: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x197da8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_197dac:
    // 0x197dac: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x197dacu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_197db0:
    // 0x197db0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x197db0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_197db4:
    // 0x197db4: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x197db4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
label_197db8:
    // 0x197db8: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x197db8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_197dbc:
    // 0x197dbc: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x197dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_197dc0:
    // 0x197dc0: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x197dc0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_197dc4:
    // 0x197dc4: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x197dc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_197dc8:
    // 0x197dc8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x197dc8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_197dcc:
    // 0x197dcc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x197dccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_197dd0:
    // 0x197dd0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x197dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_197dd4:
    // 0x197dd4: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x197dd4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_197dd8:
    // 0x197dd8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x197dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_197ddc:
    // 0x197ddc: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x197ddcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_197de0:
    // 0x197de0: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x197de0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_197de4:
    // 0x197de4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x197de4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_197de8:
    // 0x197de8: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x197de8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_197dec:
    // 0x197dec: 0xc07df68  jal         func_1F7DA0
label_197df0:
    if (ctx->pc == 0x197DF0u) {
        ctx->pc = 0x197DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DECu;
        // 0x197df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197DF4u;
        goto label_197df4;
    }
    ctx->pc = 0x197DECu;
    SET_GPR_U32(ctx, 31, 0x197DF4u);
    ctx->pc = 0x197DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197DECu;
    // 0x197df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x197DECu, 0x197DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197DF4u;
label_197df4:
    // 0x197df4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x197df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_197df8:
    // 0x197df8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x197df8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197dfc:
    // 0x197dfc: 0xc051dca  jal         func_147728
label_197e00:
    if (ctx->pc == 0x197E00u) {
        ctx->pc = 0x197E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DFCu;
        // 0x197e00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197E04u;
        goto label_197e04;
    }
    ctx->pc = 0x197DFCu;
    SET_GPR_U32(ctx, 31, 0x197E04u);
    ctx->pc = 0x197E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197DFCu;
    // 0x197e00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x197DFCu, 0x197E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197E04u;
label_197e04:
    // 0x197e04: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x197e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_197e08:
    // 0x197e08: 0xc051f10  jal         func_147C40
label_197e0c:
    if (ctx->pc == 0x197E0Cu) {
        ctx->pc = 0x197E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E08u;
        // 0x197e0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197E10u;
        goto label_197e10;
    }
    ctx->pc = 0x197E08u;
    SET_GPR_U32(ctx, 31, 0x197E10u);
    ctx->pc = 0x197E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197E08u;
    // 0x197e0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x197E08u, 0x197E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197E10u;
label_197e10:
    // 0x197e10: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x197e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_197e14:
    // 0x197e14: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x197e14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_197e18:
    // 0x197e18: 0xc051efe  jal         func_147BF8
label_197e1c:
    if (ctx->pc == 0x197E1Cu) {
        ctx->pc = 0x197E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E18u;
        // 0x197e1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197E20u;
        goto label_197e20;
    }
    ctx->pc = 0x197E18u;
    SET_GPR_U32(ctx, 31, 0x197E20u);
    ctx->pc = 0x197E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197E18u;
    // 0x197e1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x197E18u, 0x197E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197E20u;
label_197e20:
    // 0x197e20: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x197e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_197e24:
    // 0x197e24: 0xc051d4a  jal         func_147528
label_197e28:
    if (ctx->pc == 0x197E28u) {
        ctx->pc = 0x197E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E24u;
        // 0x197e28: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197E2Cu;
        goto label_197e2c;
    }
    ctx->pc = 0x197E24u;
    SET_GPR_U32(ctx, 31, 0x197E2Cu);
    ctx->pc = 0x197E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197E24u;
    // 0x197e28: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x197E24u, 0x197E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197E2Cu;
label_197e2c:
    // 0x197e2c: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x197e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_197e30:
    // 0x197e30: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x197e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_197e34:
    // 0x197e34: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x197e34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_197e38:
    // 0x197e38: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x197e38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_197e3c:
    // 0x197e3c: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x197e3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_197e40:
    // 0x197e40: 0x0  nop
    ctx->pc = 0x197e40u;
    // NOP
label_197e44:
    // 0x197e44: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_197e48:
    if (ctx->pc == 0x197E48u) {
        ctx->pc = 0x197E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E44u;
        // 0x197e48: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x197E4Cu;
        goto label_197e4c;
    }
    ctx->pc = 0x197E44u;
    {
        const bool branch_taken_0x197e44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x197E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E44u;
        // 0x197e48: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x197e44) {
            ctx->pc = 0x197E58u;
            goto label_197e58;
        }
    }
    ctx->pc = 0x197E4Cu;
label_197e4c:
    // 0x197e4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x197e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_197e50:
    // 0x197e50: 0xc05bd90  jal         func_16F640
label_197e54:
    if (ctx->pc == 0x197E54u) {
        ctx->pc = 0x197E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E50u;
        // 0x197e54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197E58u;
        goto label_197e58;
    }
    ctx->pc = 0x197E50u;
    SET_GPR_U32(ctx, 31, 0x197E58u);
    ctx->pc = 0x197E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197E50u;
    // 0x197e54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x197E50u, 0x197E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197E58u;
label_197e58:
    // 0x197e58: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x197e58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_197e5c:
    // 0x197e5c: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x197e5cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_197e60:
    // 0x197e60: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x197e60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_197e64:
    // 0x197e64: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x197e64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_197e68:
    // 0x197e68: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x197e68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_197e6c:
    // 0x197e6c: 0x2ac2000a  slti        $v0, $s6, 0xA
    ctx->pc = 0x197e6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)10) ? 1 : 0);
label_197e70:
    // 0x197e70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_197e74:
    if (ctx->pc == 0x197E74u) {
        ctx->pc = 0x197E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E70u;
        // 0x197e74: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197E78u;
        goto label_197e78;
    }
    ctx->pc = 0x197E70u;
    {
        const bool branch_taken_0x197e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E70u;
        // 0x197e74: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197e70) {
            ctx->pc = 0x197E84u;
            goto label_197e84;
        }
    }
    ctx->pc = 0x197E78u;
label_197e78:
    // 0x197e78: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x197e78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_197e7c:
    // 0x197e7c: 0x1456ffb8  bne         $v0, $s6, . + 4 + (-0x48 << 2)
label_197e80:
    if (ctx->pc == 0x197E80u) {
        ctx->pc = 0x197E84u;
        goto label_197e84;
    }
    ctx->pc = 0x197E7Cu;
    {
        const bool branch_taken_0x197e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x197e7c) {
            ctx->pc = 0x197D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197d60;
        }
    }
    ctx->pc = 0x197E84u;
label_197e84:
    // 0x197e84: 0xc06ddb6  jal         func_1B76D8
label_197e88:
    if (ctx->pc == 0x197E88u) {
        ctx->pc = 0x197E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E84u;
        // 0x197e88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197E8Cu;
        goto label_197e8c;
    }
    ctx->pc = 0x197E84u;
    SET_GPR_U32(ctx, 31, 0x197E8Cu);
    ctx->pc = 0x197E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197E84u;
    // 0x197e88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x197E84u, 0x197E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197E8Cu;
label_197e8c:
    // 0x197e8c: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x197e8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_197e90:
    // 0x197e90: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x197e90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_197e94:
    // 0x197e94: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x197e94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_197e98:
    // 0x197e98: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x197e98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_197e9c:
    // 0x197e9c: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x197e9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_197ea0:
    // 0x197ea0: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x197ea0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_197ea4:
    // 0x197ea4: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x197ea4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_197ea8:
    // 0x197ea8: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x197ea8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_197eac:
    // 0x197eac: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x197eacu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_197eb0:
    // 0x197eb0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x197eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_197eb4:
    // 0x197eb4: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x197eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_197eb8:
    // 0x197eb8: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x197eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_197ebc:
    // 0x197ebc: 0x3e00008  jr          $ra
label_197ec0:
    if (ctx->pc == 0x197EC0u) {
        ctx->pc = 0x197EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197EBCu;
        // 0x197ec0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197EC4u;
        goto label_197ec4;
    }
    ctx->pc = 0x197EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197EBCu;
        // 0x197ec0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197EC4u;
label_197ec4:
    // 0x197ec4: 0x0  nop
    ctx->pc = 0x197ec4u;
    // NOP
    ctx->pc = 0x197ec8u;
}
