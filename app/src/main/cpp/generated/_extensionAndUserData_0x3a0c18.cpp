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

// Function: _extensionAndUserData
// Address: 0x3a0c18 - 0x3a0de8
void _extensionAndUserData_0x3a0c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_extensionAndUserData_0x3a0c18");
#endif

    switch (ctx->pc) {
        case 0x3a0c18u: goto label_3a0c18;
        case 0x3a0c1cu: goto label_3a0c1c;
        case 0x3a0c20u: goto label_3a0c20;
        case 0x3a0c24u: goto label_3a0c24;
        case 0x3a0c28u: goto label_3a0c28;
        case 0x3a0c2cu: goto label_3a0c2c;
        case 0x3a0c30u: goto label_3a0c30;
        case 0x3a0c34u: goto label_3a0c34;
        case 0x3a0c38u: goto label_3a0c38;
        case 0x3a0c3cu: goto label_3a0c3c;
        case 0x3a0c40u: goto label_3a0c40;
        case 0x3a0c44u: goto label_3a0c44;
        case 0x3a0c48u: goto label_3a0c48;
        case 0x3a0c4cu: goto label_3a0c4c;
        case 0x3a0c50u: goto label_3a0c50;
        case 0x3a0c54u: goto label_3a0c54;
        case 0x3a0c58u: goto label_3a0c58;
        case 0x3a0c5cu: goto label_3a0c5c;
        case 0x3a0c60u: goto label_3a0c60;
        case 0x3a0c64u: goto label_3a0c64;
        case 0x3a0c68u: goto label_3a0c68;
        case 0x3a0c6cu: goto label_3a0c6c;
        case 0x3a0c70u: goto label_3a0c70;
        case 0x3a0c74u: goto label_3a0c74;
        case 0x3a0c78u: goto label_3a0c78;
        case 0x3a0c7cu: goto label_3a0c7c;
        case 0x3a0c80u: goto label_3a0c80;
        case 0x3a0c84u: goto label_3a0c84;
        case 0x3a0c88u: goto label_3a0c88;
        case 0x3a0c8cu: goto label_3a0c8c;
        case 0x3a0c90u: goto label_3a0c90;
        case 0x3a0c94u: goto label_3a0c94;
        case 0x3a0c98u: goto label_3a0c98;
        case 0x3a0c9cu: goto label_3a0c9c;
        case 0x3a0ca0u: goto label_3a0ca0;
        case 0x3a0ca4u: goto label_3a0ca4;
        case 0x3a0ca8u: goto label_3a0ca8;
        case 0x3a0cacu: goto label_3a0cac;
        case 0x3a0cb0u: goto label_3a0cb0;
        case 0x3a0cb4u: goto label_3a0cb4;
        case 0x3a0cb8u: goto label_3a0cb8;
        case 0x3a0cbcu: goto label_3a0cbc;
        case 0x3a0cc0u: goto label_3a0cc0;
        case 0x3a0cc4u: goto label_3a0cc4;
        case 0x3a0cc8u: goto label_3a0cc8;
        case 0x3a0cccu: goto label_3a0ccc;
        case 0x3a0cd0u: goto label_3a0cd0;
        case 0x3a0cd4u: goto label_3a0cd4;
        case 0x3a0cd8u: goto label_3a0cd8;
        case 0x3a0cdcu: goto label_3a0cdc;
        case 0x3a0ce0u: goto label_3a0ce0;
        case 0x3a0ce4u: goto label_3a0ce4;
        case 0x3a0ce8u: goto label_3a0ce8;
        case 0x3a0cecu: goto label_3a0cec;
        case 0x3a0cf0u: goto label_3a0cf0;
        case 0x3a0cf4u: goto label_3a0cf4;
        case 0x3a0cf8u: goto label_3a0cf8;
        case 0x3a0cfcu: goto label_3a0cfc;
        case 0x3a0d00u: goto label_3a0d00;
        case 0x3a0d04u: goto label_3a0d04;
        case 0x3a0d08u: goto label_3a0d08;
        case 0x3a0d0cu: goto label_3a0d0c;
        case 0x3a0d10u: goto label_3a0d10;
        case 0x3a0d14u: goto label_3a0d14;
        case 0x3a0d18u: goto label_3a0d18;
        case 0x3a0d1cu: goto label_3a0d1c;
        case 0x3a0d20u: goto label_3a0d20;
        case 0x3a0d24u: goto label_3a0d24;
        case 0x3a0d28u: goto label_3a0d28;
        case 0x3a0d2cu: goto label_3a0d2c;
        case 0x3a0d30u: goto label_3a0d30;
        case 0x3a0d34u: goto label_3a0d34;
        case 0x3a0d38u: goto label_3a0d38;
        case 0x3a0d3cu: goto label_3a0d3c;
        case 0x3a0d40u: goto label_3a0d40;
        case 0x3a0d44u: goto label_3a0d44;
        case 0x3a0d48u: goto label_3a0d48;
        case 0x3a0d4cu: goto label_3a0d4c;
        case 0x3a0d50u: goto label_3a0d50;
        case 0x3a0d54u: goto label_3a0d54;
        case 0x3a0d58u: goto label_3a0d58;
        case 0x3a0d5cu: goto label_3a0d5c;
        case 0x3a0d60u: goto label_3a0d60;
        case 0x3a0d64u: goto label_3a0d64;
        case 0x3a0d68u: goto label_3a0d68;
        case 0x3a0d6cu: goto label_3a0d6c;
        case 0x3a0d70u: goto label_3a0d70;
        case 0x3a0d74u: goto label_3a0d74;
        case 0x3a0d78u: goto label_3a0d78;
        case 0x3a0d7cu: goto label_3a0d7c;
        case 0x3a0d80u: goto label_3a0d80;
        case 0x3a0d84u: goto label_3a0d84;
        case 0x3a0d88u: goto label_3a0d88;
        case 0x3a0d8cu: goto label_3a0d8c;
        case 0x3a0d90u: goto label_3a0d90;
        case 0x3a0d94u: goto label_3a0d94;
        case 0x3a0d98u: goto label_3a0d98;
        case 0x3a0d9cu: goto label_3a0d9c;
        case 0x3a0da0u: goto label_3a0da0;
        case 0x3a0da4u: goto label_3a0da4;
        case 0x3a0da8u: goto label_3a0da8;
        case 0x3a0dacu: goto label_3a0dac;
        case 0x3a0db0u: goto label_3a0db0;
        case 0x3a0db4u: goto label_3a0db4;
        case 0x3a0db8u: goto label_3a0db8;
        case 0x3a0dbcu: goto label_3a0dbc;
        case 0x3a0dc0u: goto label_3a0dc0;
        case 0x3a0dc4u: goto label_3a0dc4;
        case 0x3a0dc8u: goto label_3a0dc8;
        case 0x3a0dccu: goto label_3a0dcc;
        case 0x3a0dd0u: goto label_3a0dd0;
        case 0x3a0dd4u: goto label_3a0dd4;
        case 0x3a0dd8u: goto label_3a0dd8;
        case 0x3a0ddcu: goto label_3a0ddc;
        case 0x3a0de0u: goto label_3a0de0;
        case 0x3a0de4u: goto label_3a0de4;
        default: break;
    }

    ctx->pc = 0x3a0c18u;

label_3a0c18:
    // 0x3a0c18: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3a0c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3a0c1c:
    // 0x3a0c1c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3a0c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_3a0c20:
    // 0x3a0c20: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3a0c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_3a0c24:
    // 0x3a0c24: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x3a0c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_3a0c28:
    // 0x3a0c28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a0c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a0c2c:
    // 0x3a0c2c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3a0c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_3a0c30:
    // 0x3a0c30: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x3a0c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_3a0c34:
    // 0x3a0c34: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x3a0c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_3a0c38:
    // 0x3a0c38: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x3a0c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_3a0c3c:
    // 0x3a0c3c: 0x2447e968  addiu       $a3, $v0, -0x1698
    ctx->pc = 0x3a0c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961512));
label_3a0c40:
    // 0x3a0c40: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x3a0c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3a0c44:
    // 0x3a0c44: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x3a0c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3a0c48:
    // 0x3a0c48: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x3a0c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_3a0c4c:
    // 0x3a0c4c: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x3a0c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_3a0c50:
    // 0x3a0c50: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x3a0c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3a0c54:
    // 0x3a0c54: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x3a0c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3a0c58:
    // 0x3a0c58: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x3a0c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a0c5c:
    // 0x3a0c5c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x3a0c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a0c60:
    // 0x3a0c60: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x3a0c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a0c64:
    // 0x3a0c64: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x3a0c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a0c68:
    // 0x3a0c68: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x3a0c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a0c6c:
    // 0x3a0c6c: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x3a0c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a0c70:
    // 0x3a0c70: 0x68e3001f  ldl         $v1, 0x1F($a3)
    ctx->pc = 0x3a0c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3a0c74:
    // 0x3a0c74: 0x6ce30018  ldr         $v1, 0x18($a3)
    ctx->pc = 0x3a0c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3a0c78:
    // 0x3a0c78: 0x68e50027  ldl         $a1, 0x27($a3)
    ctx->pc = 0x3a0c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_3a0c7c:
    // 0x3a0c7c: 0x6ce50020  ldr         $a1, 0x20($a3)
    ctx->pc = 0x3a0c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_3a0c80:
    // 0x3a0c80: 0x8ce60028  lw          $a2, 0x28($a3)
    ctx->pc = 0x3a0c80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_3a0c84:
    // 0x3a0c84: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x3a0c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a0c88:
    // 0x3a0c88: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x3a0c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a0c8c:
    // 0x3a0c8c: 0xb3a50027  sdl         $a1, 0x27($sp)
    ctx->pc = 0x3a0c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a0c90:
    // 0x3a0c90: 0xb7a50020  sdr         $a1, 0x20($sp)
    ctx->pc = 0x3a0c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a0c94:
    // 0x3a0c94: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x3a0c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
label_3a0c98:
    // 0x3a0c98: 0xc0e83e2  jal         func_3A0F88
label_3a0c9c:
    if (ctx->pc == 0x3A0C9Cu) {
        ctx->pc = 0x3A0C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0C98u;
        // 0x3a0c9c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0CA0u;
        goto label_3a0ca0;
    }
    ctx->pc = 0x3A0C98u;
    SET_GPR_U32(ctx, 31, 0x3A0CA0u);
    ctx->pc = 0x3A0C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0C98u;
    // 0x3a0c9c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0F88u, 0x3A0C98u, 0x3A0CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0CA0u;
label_3a0ca0:
    // 0x3a0ca0: 0x10000004  b           . + 4 + (0x4 << 2)
label_3a0ca4:
    if (ctx->pc == 0x3A0CA4u) {
        ctx->pc = 0x3A0CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0CA0u;
        // 0x3a0ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0CA8u;
        goto label_3a0ca8;
    }
    ctx->pc = 0x3A0CA0u;
    {
        const bool branch_taken_0x3a0ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0CA0u;
        // 0x3a0ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0ca0) {
            ctx->pc = 0x3A0CB4u;
            goto label_3a0cb4;
        }
    }
    ctx->pc = 0x3A0CA8u;
label_3a0ca8:
    // 0x3a0ca8: 0xc0e8388  jal         func_3A0E20
label_3a0cac:
    if (ctx->pc == 0x3A0CACu) {
        ctx->pc = 0x3A0CB0u;
        goto label_3a0cb0;
    }
    ctx->pc = 0x3A0CA8u;
    SET_GPR_U32(ctx, 31, 0x3A0CB0u);
    ctx->pc = 0x3A0E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0E20u, 0x3A0CA8u, 0x3A0CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0CB0u;
label_3a0cb0:
    // 0x3a0cb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a0cb4:
    // 0x3a0cb4: 0xc0e7ae4  jal         func_39EB90
label_3a0cb8:
    if (ctx->pc == 0x3A0CB8u) {
        ctx->pc = 0x3A0CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0CB4u;
        // 0x3a0cb8: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0CBCu;
        goto label_3a0cbc;
    }
    ctx->pc = 0x3A0CB4u;
    SET_GPR_U32(ctx, 31, 0x3A0CBCu);
    ctx->pc = 0x3A0CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0CB4u;
    // 0x3a0cb8: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EB90u, 0x3A0CB4u, 0x3A0CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0CBCu;
label_3a0cbc:
    // 0x3a0cbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a0cc0:
    // 0x3a0cc0: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
label_3a0cc4:
    if (ctx->pc == 0x3A0CC4u) {
        ctx->pc = 0x3A0CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0CC0u;
        // 0x3a0cc4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0CC8u;
        goto label_3a0cc8;
    }
    ctx->pc = 0x3A0CC0u;
    {
        const bool branch_taken_0x3a0cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x3A0CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0CC0u;
        // 0x3a0cc4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0cc0) {
            ctx->pc = 0x3A0CD4u;
            goto label_3a0cd4;
        }
    }
    ctx->pc = 0x3A0CC8u;
label_3a0cc8:
    // 0x3a0cc8: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x3a0cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_3a0ccc:
    // 0x3a0ccc: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
label_3a0cd0:
    if (ctx->pc == 0x3A0CD0u) {
        ctx->pc = 0x3A0CD4u;
        goto label_3a0cd4;
    }
    ctx->pc = 0x3A0CCCu;
    {
        const bool branch_taken_0x3a0ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0ccc) {
            ctx->pc = 0x3A0CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0ca8;
        }
    }
    ctx->pc = 0x3A0CD4u;
label_3a0cd4:
    // 0x3a0cd4: 0x241201b5  addiu       $s2, $zero, 0x1B5
    ctx->pc = 0x3a0cd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 437));
label_3a0cd8:
    // 0x3a0cd8: 0x241401b2  addiu       $s4, $zero, 0x1B2
    ctx->pc = 0x3a0cd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 434));
label_3a0cdc:
    // 0x3a0cdc: 0x10000033  b           . + 4 + (0x33 << 2)
label_3a0ce0:
    if (ctx->pc == 0x3A0CE0u) {
        ctx->pc = 0x3A0CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0CDCu;
        // 0x3a0ce0: 0x2413000a  addiu       $s3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0CE4u;
        goto label_3a0ce4;
    }
    ctx->pc = 0x3A0CDCu;
    {
        const bool branch_taken_0x3a0cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0CDCu;
        // 0x3a0ce0: 0x2413000a  addiu       $s3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0cdc) {
            ctx->pc = 0x3A0DACu;
            goto label_3a0dac;
        }
    }
    ctx->pc = 0x3A0CE4u;
label_3a0ce4:
    // 0x3a0ce4: 0x0  nop
    ctx->pc = 0x3a0ce4u;
    // NOP
label_3a0ce8:
    // 0x3a0ce8: 0x1452001e  bne         $v0, $s2, . + 4 + (0x1E << 2)
label_3a0cec:
    if (ctx->pc == 0x3A0CECu) {
        ctx->pc = 0x3A0CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0CE8u;
        // 0x3a0cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0CF0u;
        goto label_3a0cf0;
    }
    ctx->pc = 0x3A0CE8u;
    {
        const bool branch_taken_0x3a0ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x3A0CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0CE8u;
        // 0x3a0cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0ce8) {
            ctx->pc = 0x3A0D64u;
            goto label_3a0d64;
        }
    }
    ctx->pc = 0x3A0CF0u;
label_3a0cf0:
    // 0x3a0cf0: 0xc0e83e0  jal         func_3A0F80
label_3a0cf4:
    if (ctx->pc == 0x3A0CF4u) {
        ctx->pc = 0x3A0CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0CF0u;
        // 0x3a0cf4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0CF8u;
        goto label_3a0cf8;
    }
    ctx->pc = 0x3A0CF0u;
    SET_GPR_U32(ctx, 31, 0x3A0CF8u);
    ctx->pc = 0x3A0CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0CF0u;
    // 0x3a0cf4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0F80u, 0x3A0CF0u, 0x3A0CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0CF8u;
label_3a0cf8:
    // 0x3a0cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a0cfc:
    // 0x3a0cfc: 0xc0e7aaa  jal         func_39EAA8
label_3a0d00:
    if (ctx->pc == 0x3A0D00u) {
        ctx->pc = 0x3A0D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0CFCu;
        // 0x3a0d00: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0D04u;
        goto label_3a0d04;
    }
    ctx->pc = 0x3A0CFCu;
    SET_GPR_U32(ctx, 31, 0x3A0D04u);
    ctx->pc = 0x3A0D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0CFCu;
    // 0x3a0d00: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0CFCu, 0x3A0D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0D04u;
label_3a0d04:
    // 0x3a0d04: 0x262182b  sltu        $v1, $s3, $v0
    ctx->pc = 0x3a0d04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3a0d08:
    // 0x3a0d08: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x3a0d08u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_3a0d0c:
    // 0x3a0d0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a0d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3a0d10:
    // 0x3a0d10: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3a0d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_3a0d14:
    // 0x3a0d14: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3a0d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3a0d18:
    // 0x3a0d18: 0x40f809  jalr        $v0
label_3a0d1c:
    if (ctx->pc == 0x3A0D1Cu) {
        ctx->pc = 0x3A0D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0D18u;
        // 0x3a0d1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0D20u;
        goto label_3a0d20;
    }
    ctx->pc = 0x3A0D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A0D20u);
        ctx->pc = 0x3A0D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0D18u;
        // 0x3a0d1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0D18u, 0x3A0D20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A0D20u;
label_3a0d20:
    // 0x3a0d20: 0xc0e83e2  jal         func_3A0F88
label_3a0d24:
    if (ctx->pc == 0x3A0D24u) {
        ctx->pc = 0x3A0D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0D20u;
        // 0x3a0d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0D28u;
        goto label_3a0d28;
    }
    ctx->pc = 0x3A0D20u;
    SET_GPR_U32(ctx, 31, 0x3A0D28u);
    ctx->pc = 0x3A0D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0D20u;
    // 0x3a0d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0F88u, 0x3A0D20u, 0x3A0D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0D28u;
label_3a0d28:
    // 0x3a0d28: 0x10000004  b           . + 4 + (0x4 << 2)
label_3a0d2c:
    if (ctx->pc == 0x3A0D2Cu) {
        ctx->pc = 0x3A0D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0D28u;
        // 0x3a0d2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0D30u;
        goto label_3a0d30;
    }
    ctx->pc = 0x3A0D28u;
    {
        const bool branch_taken_0x3a0d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0D28u;
        // 0x3a0d2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0d28) {
            ctx->pc = 0x3A0D3Cu;
            goto label_3a0d3c;
        }
    }
    ctx->pc = 0x3A0D30u;
label_3a0d30:
    // 0x3a0d30: 0xc0e8388  jal         func_3A0E20
label_3a0d34:
    if (ctx->pc == 0x3A0D34u) {
        ctx->pc = 0x3A0D38u;
        goto label_3a0d38;
    }
    ctx->pc = 0x3A0D30u;
    SET_GPR_U32(ctx, 31, 0x3A0D38u);
    ctx->pc = 0x3A0E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0E20u, 0x3A0D30u, 0x3A0D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0D38u;
label_3a0d38:
    // 0x3a0d38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a0d3c:
    // 0x3a0d3c: 0xc0e7ae4  jal         func_39EB90
label_3a0d40:
    if (ctx->pc == 0x3A0D40u) {
        ctx->pc = 0x3A0D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0D3Cu;
        // 0x3a0d40: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0D44u;
        goto label_3a0d44;
    }
    ctx->pc = 0x3A0D3Cu;
    SET_GPR_U32(ctx, 31, 0x3A0D44u);
    ctx->pc = 0x3A0D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0D3Cu;
    // 0x3a0d40: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EB90u, 0x3A0D3Cu, 0x3A0D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0D44u;
label_3a0d44:
    // 0x3a0d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a0d48:
    // 0x3a0d48: 0x10510019  beq         $v0, $s1, . + 4 + (0x19 << 2)
label_3a0d4c:
    if (ctx->pc == 0x3A0D4Cu) {
        ctx->pc = 0x3A0D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0D48u;
        // 0x3a0d4c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0D50u;
        goto label_3a0d50;
    }
    ctx->pc = 0x3A0D48u;
    {
        const bool branch_taken_0x3a0d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x3A0D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0D48u;
        // 0x3a0d4c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0d48) {
            ctx->pc = 0x3A0DB0u;
            goto label_3a0db0;
        }
    }
    ctx->pc = 0x3A0D50u;
label_3a0d50:
    // 0x3a0d50: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x3a0d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_3a0d54:
    // 0x3a0d54: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
label_3a0d58:
    if (ctx->pc == 0x3A0D58u) {
        ctx->pc = 0x3A0D5Cu;
        goto label_3a0d5c;
    }
    ctx->pc = 0x3A0D54u;
    {
        const bool branch_taken_0x3a0d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0d54) {
            ctx->pc = 0x3A0D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0d30;
        }
    }
    ctx->pc = 0x3A0D5Cu;
label_3a0d5c:
    // 0x3a0d5c: 0x10000013  b           . + 4 + (0x13 << 2)
label_3a0d60:
    if (ctx->pc == 0x3A0D60u) {
        ctx->pc = 0x3A0D64u;
        goto label_3a0d64;
    }
    ctx->pc = 0x3A0D5Cu;
    {
        const bool branch_taken_0x3a0d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0d5c) {
            ctx->pc = 0x3A0DACu;
            goto label_3a0dac;
        }
    }
    ctx->pc = 0x3A0D64u;
label_3a0d64:
    // 0x3a0d64: 0xc0e83e0  jal         func_3A0F80
label_3a0d68:
    if (ctx->pc == 0x3A0D68u) {
        ctx->pc = 0x3A0D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0D64u;
        // 0x3a0d68: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0D6Cu;
        goto label_3a0d6c;
    }
    ctx->pc = 0x3A0D64u;
    SET_GPR_U32(ctx, 31, 0x3A0D6Cu);
    ctx->pc = 0x3A0D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0D64u;
    // 0x3a0d68: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0F80u, 0x3A0D64u, 0x3A0D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0D6Cu;
label_3a0d6c:
    // 0x3a0d6c: 0xc0e83e2  jal         func_3A0F88
label_3a0d70:
    if (ctx->pc == 0x3A0D70u) {
        ctx->pc = 0x3A0D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0D6Cu;
        // 0x3a0d70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0D74u;
        goto label_3a0d74;
    }
    ctx->pc = 0x3A0D6Cu;
    SET_GPR_U32(ctx, 31, 0x3A0D74u);
    ctx->pc = 0x3A0D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0D6Cu;
    // 0x3a0d70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0F88u, 0x3A0D6Cu, 0x3A0D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0D74u;
label_3a0d74:
    // 0x3a0d74: 0x10000005  b           . + 4 + (0x5 << 2)
label_3a0d78:
    if (ctx->pc == 0x3A0D78u) {
        ctx->pc = 0x3A0D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0D74u;
        // 0x3a0d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0D7Cu;
        goto label_3a0d7c;
    }
    ctx->pc = 0x3A0D74u;
    {
        const bool branch_taken_0x3a0d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0D74u;
        // 0x3a0d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0d74) {
            ctx->pc = 0x3A0D8Cu;
            goto label_3a0d8c;
        }
    }
    ctx->pc = 0x3A0D7Cu;
label_3a0d7c:
    // 0x3a0d7c: 0x0  nop
    ctx->pc = 0x3a0d7cu;
    // NOP
label_3a0d80:
    // 0x3a0d80: 0xc0e8388  jal         func_3A0E20
label_3a0d84:
    if (ctx->pc == 0x3A0D84u) {
        ctx->pc = 0x3A0D88u;
        goto label_3a0d88;
    }
    ctx->pc = 0x3A0D80u;
    SET_GPR_U32(ctx, 31, 0x3A0D88u);
    ctx->pc = 0x3A0E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0E20u, 0x3A0D80u, 0x3A0D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0D88u;
label_3a0d88:
    // 0x3a0d88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a0d8c:
    // 0x3a0d8c: 0xc0e7ae4  jal         func_39EB90
label_3a0d90:
    if (ctx->pc == 0x3A0D90u) {
        ctx->pc = 0x3A0D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0D8Cu;
        // 0x3a0d90: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0D94u;
        goto label_3a0d94;
    }
    ctx->pc = 0x3A0D8Cu;
    SET_GPR_U32(ctx, 31, 0x3A0D94u);
    ctx->pc = 0x3A0D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0D8Cu;
    // 0x3a0d90: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EB90u, 0x3A0D8Cu, 0x3A0D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0D94u;
label_3a0d94:
    // 0x3a0d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a0d98:
    // 0x3a0d98: 0x10510005  beq         $v0, $s1, . + 4 + (0x5 << 2)
label_3a0d9c:
    if (ctx->pc == 0x3A0D9Cu) {
        ctx->pc = 0x3A0D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0D98u;
        // 0x3a0d9c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0DA0u;
        goto label_3a0da0;
    }
    ctx->pc = 0x3A0D98u;
    {
        const bool branch_taken_0x3a0d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x3A0D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0D98u;
        // 0x3a0d9c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0d98) {
            ctx->pc = 0x3A0DB0u;
            goto label_3a0db0;
        }
    }
    ctx->pc = 0x3A0DA0u;
label_3a0da0:
    // 0x3a0da0: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x3a0da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_3a0da4:
    // 0x3a0da4: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
label_3a0da8:
    if (ctx->pc == 0x3A0DA8u) {
        ctx->pc = 0x3A0DACu;
        goto label_3a0dac;
    }
    ctx->pc = 0x3A0DA4u;
    {
        const bool branch_taken_0x3a0da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0da4) {
            ctx->pc = 0x3A0D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0d80;
        }
    }
    ctx->pc = 0x3A0DACu;
label_3a0dac:
    // 0x3a0dac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a0db0:
    // 0x3a0db0: 0xc0e7ae4  jal         func_39EB90
label_3a0db4:
    if (ctx->pc == 0x3A0DB4u) {
        ctx->pc = 0x3A0DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0DB0u;
        // 0x3a0db4: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0DB8u;
        goto label_3a0db8;
    }
    ctx->pc = 0x3A0DB0u;
    SET_GPR_U32(ctx, 31, 0x3A0DB8u);
    ctx->pc = 0x3A0DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0DB0u;
    // 0x3a0db4: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EB90u, 0x3A0DB0u, 0x3A0DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0DB8u;
label_3a0db8:
    // 0x3a0db8: 0x1052ffcd  beq         $v0, $s2, . + 4 + (-0x33 << 2)
label_3a0dbc:
    if (ctx->pc == 0x3A0DBCu) {
        ctx->pc = 0x3A0DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0DB8u;
        // 0x3a0dbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0DC0u;
        goto label_3a0dc0;
    }
    ctx->pc = 0x3A0DB8u;
    {
        const bool branch_taken_0x3a0db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x3A0DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0DB8u;
        // 0x3a0dbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0db8) {
            ctx->pc = 0x3A0CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0cf0;
        }
    }
    ctx->pc = 0x3A0DC0u;
label_3a0dc0:
    // 0x3a0dc0: 0x1054ffc9  beq         $v0, $s4, . + 4 + (-0x37 << 2)
label_3a0dc4:
    if (ctx->pc == 0x3A0DC4u) {
        ctx->pc = 0x3A0DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0DC0u;
        // 0x3a0dc4: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0DC8u;
        goto label_3a0dc8;
    }
    ctx->pc = 0x3A0DC0u;
    {
        const bool branch_taken_0x3a0dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x3A0DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0DC0u;
        // 0x3a0dc4: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0dc0) {
            ctx->pc = 0x3A0CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0ce8;
        }
    }
    ctx->pc = 0x3A0DC8u;
label_3a0dc8:
    // 0x3a0dc8: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x3a0dc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3a0dcc:
    // 0x3a0dcc: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x3a0dccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3a0dd0:
    // 0x3a0dd0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x3a0dd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3a0dd4:
    // 0x3a0dd4: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x3a0dd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3a0dd8:
    // 0x3a0dd8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3a0dd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3a0ddc:
    // 0x3a0ddc: 0x3e00008  jr          $ra
label_3a0de0:
    if (ctx->pc == 0x3A0DE0u) {
        ctx->pc = 0x3A0DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0DDCu;
        // 0x3a0de0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0DE4u;
        goto label_3a0de4;
    }
    ctx->pc = 0x3A0DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0DDCu;
        // 0x3a0de0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0DE4u;
label_3a0de4:
    // 0x3a0de4: 0x0  nop
    ctx->pc = 0x3a0de4u;
    // NOP
    ctx->pc = 0x3a0de8u;
}
