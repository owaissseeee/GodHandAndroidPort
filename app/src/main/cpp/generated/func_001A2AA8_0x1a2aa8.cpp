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

// Function: func_001A2AA8
// Address: 0x1a2aa8 - 0x1a2d50
void func_001A2AA8_0x1a2aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A2AA8_0x1a2aa8");
#endif

    switch (ctx->pc) {
        case 0x1a2aa8u: goto label_1a2aa8;
        case 0x1a2aacu: goto label_1a2aac;
        case 0x1a2ab0u: goto label_1a2ab0;
        case 0x1a2ab4u: goto label_1a2ab4;
        case 0x1a2ab8u: goto label_1a2ab8;
        case 0x1a2abcu: goto label_1a2abc;
        case 0x1a2ac0u: goto label_1a2ac0;
        case 0x1a2ac4u: goto label_1a2ac4;
        case 0x1a2ac8u: goto label_1a2ac8;
        case 0x1a2accu: goto label_1a2acc;
        case 0x1a2ad0u: goto label_1a2ad0;
        case 0x1a2ad4u: goto label_1a2ad4;
        case 0x1a2ad8u: goto label_1a2ad8;
        case 0x1a2adcu: goto label_1a2adc;
        case 0x1a2ae0u: goto label_1a2ae0;
        case 0x1a2ae4u: goto label_1a2ae4;
        case 0x1a2ae8u: goto label_1a2ae8;
        case 0x1a2aecu: goto label_1a2aec;
        case 0x1a2af0u: goto label_1a2af0;
        case 0x1a2af4u: goto label_1a2af4;
        case 0x1a2af8u: goto label_1a2af8;
        case 0x1a2afcu: goto label_1a2afc;
        case 0x1a2b00u: goto label_1a2b00;
        case 0x1a2b04u: goto label_1a2b04;
        case 0x1a2b08u: goto label_1a2b08;
        case 0x1a2b0cu: goto label_1a2b0c;
        case 0x1a2b10u: goto label_1a2b10;
        case 0x1a2b14u: goto label_1a2b14;
        case 0x1a2b18u: goto label_1a2b18;
        case 0x1a2b1cu: goto label_1a2b1c;
        case 0x1a2b20u: goto label_1a2b20;
        case 0x1a2b24u: goto label_1a2b24;
        case 0x1a2b28u: goto label_1a2b28;
        case 0x1a2b2cu: goto label_1a2b2c;
        case 0x1a2b30u: goto label_1a2b30;
        case 0x1a2b34u: goto label_1a2b34;
        case 0x1a2b38u: goto label_1a2b38;
        case 0x1a2b3cu: goto label_1a2b3c;
        case 0x1a2b40u: goto label_1a2b40;
        case 0x1a2b44u: goto label_1a2b44;
        case 0x1a2b48u: goto label_1a2b48;
        case 0x1a2b4cu: goto label_1a2b4c;
        case 0x1a2b50u: goto label_1a2b50;
        case 0x1a2b54u: goto label_1a2b54;
        case 0x1a2b58u: goto label_1a2b58;
        case 0x1a2b5cu: goto label_1a2b5c;
        case 0x1a2b60u: goto label_1a2b60;
        case 0x1a2b64u: goto label_1a2b64;
        case 0x1a2b68u: goto label_1a2b68;
        case 0x1a2b6cu: goto label_1a2b6c;
        case 0x1a2b70u: goto label_1a2b70;
        case 0x1a2b74u: goto label_1a2b74;
        case 0x1a2b78u: goto label_1a2b78;
        case 0x1a2b7cu: goto label_1a2b7c;
        case 0x1a2b80u: goto label_1a2b80;
        case 0x1a2b84u: goto label_1a2b84;
        case 0x1a2b88u: goto label_1a2b88;
        case 0x1a2b8cu: goto label_1a2b8c;
        case 0x1a2b90u: goto label_1a2b90;
        case 0x1a2b94u: goto label_1a2b94;
        case 0x1a2b98u: goto label_1a2b98;
        case 0x1a2b9cu: goto label_1a2b9c;
        case 0x1a2ba0u: goto label_1a2ba0;
        case 0x1a2ba4u: goto label_1a2ba4;
        case 0x1a2ba8u: goto label_1a2ba8;
        case 0x1a2bacu: goto label_1a2bac;
        case 0x1a2bb0u: goto label_1a2bb0;
        case 0x1a2bb4u: goto label_1a2bb4;
        case 0x1a2bb8u: goto label_1a2bb8;
        case 0x1a2bbcu: goto label_1a2bbc;
        case 0x1a2bc0u: goto label_1a2bc0;
        case 0x1a2bc4u: goto label_1a2bc4;
        case 0x1a2bc8u: goto label_1a2bc8;
        case 0x1a2bccu: goto label_1a2bcc;
        case 0x1a2bd0u: goto label_1a2bd0;
        case 0x1a2bd4u: goto label_1a2bd4;
        case 0x1a2bd8u: goto label_1a2bd8;
        case 0x1a2bdcu: goto label_1a2bdc;
        case 0x1a2be0u: goto label_1a2be0;
        case 0x1a2be4u: goto label_1a2be4;
        case 0x1a2be8u: goto label_1a2be8;
        case 0x1a2becu: goto label_1a2bec;
        case 0x1a2bf0u: goto label_1a2bf0;
        case 0x1a2bf4u: goto label_1a2bf4;
        case 0x1a2bf8u: goto label_1a2bf8;
        case 0x1a2bfcu: goto label_1a2bfc;
        case 0x1a2c00u: goto label_1a2c00;
        case 0x1a2c04u: goto label_1a2c04;
        case 0x1a2c08u: goto label_1a2c08;
        case 0x1a2c0cu: goto label_1a2c0c;
        case 0x1a2c10u: goto label_1a2c10;
        case 0x1a2c14u: goto label_1a2c14;
        case 0x1a2c18u: goto label_1a2c18;
        case 0x1a2c1cu: goto label_1a2c1c;
        case 0x1a2c20u: goto label_1a2c20;
        case 0x1a2c24u: goto label_1a2c24;
        case 0x1a2c28u: goto label_1a2c28;
        case 0x1a2c2cu: goto label_1a2c2c;
        case 0x1a2c30u: goto label_1a2c30;
        case 0x1a2c34u: goto label_1a2c34;
        case 0x1a2c38u: goto label_1a2c38;
        case 0x1a2c3cu: goto label_1a2c3c;
        case 0x1a2c40u: goto label_1a2c40;
        case 0x1a2c44u: goto label_1a2c44;
        case 0x1a2c48u: goto label_1a2c48;
        case 0x1a2c4cu: goto label_1a2c4c;
        case 0x1a2c50u: goto label_1a2c50;
        case 0x1a2c54u: goto label_1a2c54;
        case 0x1a2c58u: goto label_1a2c58;
        case 0x1a2c5cu: goto label_1a2c5c;
        case 0x1a2c60u: goto label_1a2c60;
        case 0x1a2c64u: goto label_1a2c64;
        case 0x1a2c68u: goto label_1a2c68;
        case 0x1a2c6cu: goto label_1a2c6c;
        case 0x1a2c70u: goto label_1a2c70;
        case 0x1a2c74u: goto label_1a2c74;
        case 0x1a2c78u: goto label_1a2c78;
        case 0x1a2c7cu: goto label_1a2c7c;
        case 0x1a2c80u: goto label_1a2c80;
        case 0x1a2c84u: goto label_1a2c84;
        case 0x1a2c88u: goto label_1a2c88;
        case 0x1a2c8cu: goto label_1a2c8c;
        case 0x1a2c90u: goto label_1a2c90;
        case 0x1a2c94u: goto label_1a2c94;
        case 0x1a2c98u: goto label_1a2c98;
        case 0x1a2c9cu: goto label_1a2c9c;
        case 0x1a2ca0u: goto label_1a2ca0;
        case 0x1a2ca4u: goto label_1a2ca4;
        case 0x1a2ca8u: goto label_1a2ca8;
        case 0x1a2cacu: goto label_1a2cac;
        case 0x1a2cb0u: goto label_1a2cb0;
        case 0x1a2cb4u: goto label_1a2cb4;
        case 0x1a2cb8u: goto label_1a2cb8;
        case 0x1a2cbcu: goto label_1a2cbc;
        case 0x1a2cc0u: goto label_1a2cc0;
        case 0x1a2cc4u: goto label_1a2cc4;
        case 0x1a2cc8u: goto label_1a2cc8;
        case 0x1a2cccu: goto label_1a2ccc;
        case 0x1a2cd0u: goto label_1a2cd0;
        case 0x1a2cd4u: goto label_1a2cd4;
        case 0x1a2cd8u: goto label_1a2cd8;
        case 0x1a2cdcu: goto label_1a2cdc;
        case 0x1a2ce0u: goto label_1a2ce0;
        case 0x1a2ce4u: goto label_1a2ce4;
        case 0x1a2ce8u: goto label_1a2ce8;
        case 0x1a2cecu: goto label_1a2cec;
        case 0x1a2cf0u: goto label_1a2cf0;
        case 0x1a2cf4u: goto label_1a2cf4;
        case 0x1a2cf8u: goto label_1a2cf8;
        case 0x1a2cfcu: goto label_1a2cfc;
        case 0x1a2d00u: goto label_1a2d00;
        case 0x1a2d04u: goto label_1a2d04;
        case 0x1a2d08u: goto label_1a2d08;
        case 0x1a2d0cu: goto label_1a2d0c;
        case 0x1a2d10u: goto label_1a2d10;
        case 0x1a2d14u: goto label_1a2d14;
        case 0x1a2d18u: goto label_1a2d18;
        case 0x1a2d1cu: goto label_1a2d1c;
        case 0x1a2d20u: goto label_1a2d20;
        case 0x1a2d24u: goto label_1a2d24;
        case 0x1a2d28u: goto label_1a2d28;
        case 0x1a2d2cu: goto label_1a2d2c;
        case 0x1a2d30u: goto label_1a2d30;
        case 0x1a2d34u: goto label_1a2d34;
        case 0x1a2d38u: goto label_1a2d38;
        case 0x1a2d3cu: goto label_1a2d3c;
        case 0x1a2d40u: goto label_1a2d40;
        case 0x1a2d44u: goto label_1a2d44;
        case 0x1a2d48u: goto label_1a2d48;
        case 0x1a2d4cu: goto label_1a2d4c;
        default: break;
    }

    ctx->pc = 0x1a2aa8u;

label_1a2aa8:
    // 0x1a2aa8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1a2aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_1a2aac:
    // 0x1a2aac: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x1a2aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_1a2ab0:
    // 0x1a2ab0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a2ab0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a2ab4:
    // 0x1a2ab4: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x1a2ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_1a2ab8:
    // 0x1a2ab8: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x1a2ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_1a2abc:
    // 0x1a2abc: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x1a2abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_1a2ac0:
    // 0x1a2ac0: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x1a2ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_1a2ac4:
    // 0x1a2ac4: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x1a2ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_1a2ac8:
    // 0x1a2ac8: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x1a2ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_1a2acc:
    // 0x1a2acc: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1a2accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_1a2ad0:
    // 0x1a2ad0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1a2ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1a2ad4:
    // 0x1a2ad4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1a2ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1a2ad8:
    // 0x1a2ad8: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x1a2ad8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_1a2adc:
    // 0x1a2adc: 0xc06ddac  jal         func_1B76B0
label_1a2ae0:
    if (ctx->pc == 0x1A2AE0u) {
        ctx->pc = 0x1A2AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2ADCu;
        // 0x1a2ae0: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2AE4u;
        goto label_1a2ae4;
    }
    ctx->pc = 0x1A2ADCu;
    SET_GPR_U32(ctx, 31, 0x1A2AE4u);
    ctx->pc = 0x1A2AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2ADCu;
    // 0x1a2ae0: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1A2ADCu, 0x1A2AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2AE4u;
label_1a2ae4:
    // 0x1a2ae4: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
label_1a2ae8:
    if (ctx->pc == 0x1A2AE8u) {
        ctx->pc = 0x1A2AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AE4u;
        // 0x1a2ae8: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2AECu;
        goto label_1a2aec;
    }
    ctx->pc = 0x1A2AE4u;
    {
        const bool branch_taken_0x1a2ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AE4u;
        // 0x1a2ae8: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ae4) {
            ctx->pc = 0x1A2D14u;
            goto label_1a2d14;
        }
    }
    ctx->pc = 0x1A2AECu;
label_1a2aec:
    // 0x1a2aec: 0x924302f4  lbu         $v1, 0x2F4($s2)
    ctx->pc = 0x1a2aecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
label_1a2af0:
    // 0x1a2af0: 0x24476f50  addiu       $a3, $v0, 0x6F50
    ctx->pc = 0x1a2af0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 28496));
label_1a2af4:
    // 0x1a2af4: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x1a2af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1a2af8:
    // 0x1a2af8: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x1a2af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1a2afc:
    // 0x1a2afc: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x1a2afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1a2b00:
    // 0x1a2b00: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x1a2b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1a2b04:
    // 0x1a2b04: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x1a2b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1a2b08:
    // 0x1a2b08: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x1a2b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1a2b0c:
    // 0x1a2b0c: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x1a2b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2b10:
    // 0x1a2b10: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x1a2b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2b14:
    // 0x1a2b14: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x1a2b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2b18:
    // 0x1a2b18: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x1a2b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2b1c:
    // 0x1a2b1c: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x1a2b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2b20:
    // 0x1a2b20: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x1a2b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2b24:
    // 0x1a2b24: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x1a2b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1a2b28:
    // 0x1a2b28: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x1a2b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1a2b2c:
    // 0x1a2b2c: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x1a2b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2b30:
    // 0x1a2b30: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x1a2b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2b34:
    // 0x1a2b34: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a2b34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1a2b38:
    // 0x1a2b38: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x1a2b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_1a2b3c:
    // 0x1a2b3c: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x1a2b3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1a2b40:
    // 0x1a2b40: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a2b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1a2b44:
    // 0x1a2b44: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x1a2b44u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_1a2b48:
    // 0x1a2b48: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_1a2b4c:
    if (ctx->pc == 0x1A2B4Cu) {
        ctx->pc = 0x1A2B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B48u;
        // 0x1a2b4c: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2B50u;
        goto label_1a2b50;
    }
    ctx->pc = 0x1A2B48u;
    {
        const bool branch_taken_0x1a2b48 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1A2B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B48u;
        // 0x1a2b4c: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2b48) {
            ctx->pc = 0x1A2B7Cu;
            goto label_1a2b7c;
        }
    }
    ctx->pc = 0x1A2B50u;
label_1a2b50:
    // 0x1a2b50: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x1a2b50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1a2b54:
    // 0x1a2b54: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1a2b54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1a2b58:
    // 0x1a2b58: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a2b58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1a2b5c:
    // 0x1a2b5c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1a2b5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1a2b60:
    // 0x1a2b60: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1a2b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1a2b64:
    // 0x1a2b64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a2b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a2b68:
    // 0x1a2b68: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1a2b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1a2b6c:
    // 0x1a2b6c: 0xdc90fff8  ld          $s0, -0x8($a0)
    ctx->pc = 0x1a2b6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_1a2b70:
    // 0x1a2b70: 0x10303f  dsra32      $a2, $s0, 0
    ctx->pc = 0x1a2b70u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 16) >> (32 + 0));
label_1a2b74:
    // 0x1a2b74: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a2b78:
    if (ctx->pc == 0x1A2B78u) {
        ctx->pc = 0x1A2B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B74u;
        // 0x1a2b78: 0x924202f4  lbu         $v0, 0x2F4($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2B7Cu;
        goto label_1a2b7c;
    }
    ctx->pc = 0x1A2B74u;
    {
        const bool branch_taken_0x1a2b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B74u;
        // 0x1a2b78: 0x924202f4  lbu         $v0, 0x2F4($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2b74) {
            ctx->pc = 0x1A2B88u;
            goto label_1a2b88;
        }
    }
    ctx->pc = 0x1A2B7Cu;
label_1a2b7c:
    // 0x1a2b7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a2b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a2b80:
    // 0x1a2b80: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a2b80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a2b84:
    // 0x1a2b84: 0x924202f4  lbu         $v0, 0x2F4($s2)
    ctx->pc = 0x1a2b84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
label_1a2b88:
    // 0x1a2b88: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a2b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1a2b8c:
    // 0x1a2b8c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1a2b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1a2b90:
    // 0x1a2b90: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1a2b94:
    if (ctx->pc == 0x1A2B94u) {
        ctx->pc = 0x1A2B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B90u;
        // 0x1a2b94: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2B98u;
        goto label_1a2b98;
    }
    ctx->pc = 0x1A2B90u;
    {
        const bool branch_taken_0x1a2b90 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1A2B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B90u;
        // 0x1a2b94: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2b90) {
            ctx->pc = 0x1A2BACu;
            goto label_1a2bac;
        }
    }
    ctx->pc = 0x1A2B98u;
label_1a2b98:
    // 0x1a2b98: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x1a2b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_1a2b9c:
    // 0x1a2b9c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a2b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1a2ba0:
    // 0x1a2ba0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1a2ba0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1a2ba4:
    // 0x1a2ba4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a2ba8:
    if (ctx->pc == 0x1A2BA8u) {
        ctx->pc = 0x1A2BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BA4u;
        // 0x1a2ba8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2BACu;
        goto label_1a2bac;
    }
    ctx->pc = 0x1A2BA4u;
    {
        const bool branch_taken_0x1a2ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BA4u;
        // 0x1a2ba8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ba4) {
            ctx->pc = 0x1A2BB0u;
            goto label_1a2bb0;
        }
    }
    ctx->pc = 0x1A2BACu;
label_1a2bac:
    // 0x1a2bac: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a2bacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a2bb0:
    // 0x1a2bb0: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1a2bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1a2bb4:
    // 0x1a2bb4: 0xc0f809  jalr        $a2
label_1a2bb8:
    if (ctx->pc == 0x1A2BB8u) {
        ctx->pc = 0x1A2BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BB4u;
        // 0x1a2bb8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2BBCu;
        goto label_1a2bbc;
    }
    ctx->pc = 0x1A2BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1A2BBCu);
        ctx->pc = 0x1A2BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BB4u;
        // 0x1a2bb8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2BB4u, 0x1A2BBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2BBCu;
label_1a2bbc:
    // 0x1a2bbc: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x1a2bbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_1a2bc0:
    // 0x1a2bc0: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_1a2bc4:
    if (ctx->pc == 0x1A2BC4u) {
        ctx->pc = 0x1A2BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BC0u;
        // 0x1a2bc4: 0x27be0030  addiu       $fp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2BC8u;
        goto label_1a2bc8;
    }
    ctx->pc = 0x1A2BC0u;
    {
        const bool branch_taken_0x1a2bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BC0u;
        // 0x1a2bc4: 0x27be0030  addiu       $fp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2bc0) {
            ctx->pc = 0x1A2D0Cu;
            goto label_1a2d0c;
        }
    }
    ctx->pc = 0x1A2BC8u;
label_1a2bc8:
    // 0x1a2bc8: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x1a2bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_1a2bcc:
    // 0x1a2bcc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1a2bccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1a2bd0:
    // 0x1a2bd0: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x1a2bd0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a2bd4:
    // 0x1a2bd4: 0x26550650  addiu       $s5, $s2, 0x650
    ctx->pc = 0x1a2bd4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1616));
label_1a2bd8:
    // 0x1a2bd8: 0x26500620  addiu       $s0, $s2, 0x620
    ctx->pc = 0x1a2bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1568));
label_1a2bdc:
    // 0x1a2bdc: 0x26540640  addiu       $s4, $s2, 0x640
    ctx->pc = 0x1a2bdcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1600));
label_1a2be0:
    // 0x1a2be0: 0x26530630  addiu       $s3, $s2, 0x630
    ctx->pc = 0x1a2be0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1584));
label_1a2be4:
    // 0x1a2be4: 0x26510610  addiu       $s1, $s2, 0x610
    ctx->pc = 0x1a2be4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1552));
label_1a2be8:
    // 0x1a2be8: 0xc05ce40  jal         func_173900
label_1a2bec:
    if (ctx->pc == 0x1A2BECu) {
        ctx->pc = 0x1A2BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BE8u;
        // 0x1a2bec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2BF0u;
        goto label_1a2bf0;
    }
    ctx->pc = 0x1A2BE8u;
    SET_GPR_U32(ctx, 31, 0x1A2BF0u);
    ctx->pc = 0x1A2BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2BE8u;
    // 0x1a2bec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x1A2BE8u, 0x1A2BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2BF0u;
label_1a2bf0:
    // 0x1a2bf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2bf4:
    // 0x1a2bf4: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
label_1a2bf8:
    if (ctx->pc == 0x1A2BF8u) {
        ctx->pc = 0x1A2BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BF4u;
        // 0x1a2bf8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2BFCu;
        goto label_1a2bfc;
    }
    ctx->pc = 0x1A2BF4u;
    {
        const bool branch_taken_0x1a2bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a2bf4) {
            ctx->pc = 0x1A2BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2BF4u;
            // 0x1a2bf8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2CE4u;
            goto label_1a2ce4;
        }
    }
    ctx->pc = 0x1A2BFCu;
label_1a2bfc:
    // 0x1a2bfc: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x1a2bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_1a2c00:
    // 0x1a2c00: 0xc0a4bd4  jal         func_292F50
label_1a2c04:
    if (ctx->pc == 0x1A2C04u) {
        ctx->pc = 0x1A2C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C00u;
        // 0x1a2c04: 0x24a464f0  addiu       $a0, $a1, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C08u;
        goto label_1a2c08;
    }
    ctx->pc = 0x1A2C00u;
    SET_GPR_U32(ctx, 31, 0x1A2C08u);
    ctx->pc = 0x1A2C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2C00u;
    // 0x1a2c04: 0x24a464f0  addiu       $a0, $a1, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1A2C00u, 0x1A2C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2C08u;
label_1a2c08:
    // 0x1a2c08: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1a2c08u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1a2c0c:
    // 0x1a2c0c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1a2c0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_1a2c10:
    // 0x1a2c10: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1a2c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a2c14:
    // 0x1a2c14: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1a2c14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a2c18:
    // 0x1a2c18: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1a2c18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1a2c1c:
    // 0x1a2c1c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1a2c1cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1a2c20:
    // 0x1a2c20: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1a2c20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1a2c24:
    // 0x1a2c24: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1a2c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a2c28:
    // 0x1a2c28: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x1a2c28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_1a2c2c:
    // 0x1a2c2c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1a2c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a2c30:
    // 0x1a2c30: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x1a2c30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_1a2c34:
    // 0x1a2c34: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x1a2c34u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_1a2c38:
    // 0x1a2c38: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1a2c38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1a2c3c:
    // 0x1a2c3c: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x1a2c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a2c40:
    // 0x1a2c40: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1a2c40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1a2c44:
    // 0x1a2c44: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1a2c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a2c48:
    // 0x1a2c48: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1a2c48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a2c4c:
    // 0x1a2c4c: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1a2c4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1a2c50:
    // 0x1a2c50: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1a2c50u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1a2c54:
    // 0x1a2c54: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1a2c54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1a2c58:
    // 0x1a2c58: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1a2c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a2c5c:
    // 0x1a2c5c: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x1a2c5cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_1a2c60:
    // 0x1a2c60: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1a2c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a2c64:
    // 0x1a2c64: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1a2c64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1a2c68:
    // 0x1a2c68: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x1a2c68u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_1a2c6c:
    // 0x1a2c6c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1a2c6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1a2c70:
    // 0x1a2c70: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1a2c70u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a2c74:
    // 0x1a2c74: 0xc07df68  jal         func_1F7DA0
label_1a2c78:
    if (ctx->pc == 0x1A2C78u) {
        ctx->pc = 0x1A2C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C74u;
        // 0x1a2c78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C7Cu;
        goto label_1a2c7c;
    }
    ctx->pc = 0x1A2C74u;
    SET_GPR_U32(ctx, 31, 0x1A2C7Cu);
    ctx->pc = 0x1A2C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2C74u;
    // 0x1a2c78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x1A2C74u, 0x1A2C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2C7Cu;
label_1a2c7c:
    // 0x1a2c7c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1a2c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1a2c80:
    // 0x1a2c80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a2c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2c84:
    // 0x1a2c84: 0xc051dca  jal         func_147728
label_1a2c88:
    if (ctx->pc == 0x1A2C88u) {
        ctx->pc = 0x1A2C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C84u;
        // 0x1a2c88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C8Cu;
        goto label_1a2c8c;
    }
    ctx->pc = 0x1A2C84u;
    SET_GPR_U32(ctx, 31, 0x1A2C8Cu);
    ctx->pc = 0x1A2C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2C84u;
    // 0x1a2c88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x1A2C84u, 0x1A2C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2C8Cu;
label_1a2c8c:
    // 0x1a2c8c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1a2c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1a2c90:
    // 0x1a2c90: 0xc051f10  jal         func_147C40
label_1a2c94:
    if (ctx->pc == 0x1A2C94u) {
        ctx->pc = 0x1A2C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C90u;
        // 0x1a2c94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C98u;
        goto label_1a2c98;
    }
    ctx->pc = 0x1A2C90u;
    SET_GPR_U32(ctx, 31, 0x1A2C98u);
    ctx->pc = 0x1A2C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2C90u;
    // 0x1a2c94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x1A2C90u, 0x1A2C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2C98u;
label_1a2c98:
    // 0x1a2c98: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1a2c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1a2c9c:
    // 0x1a2c9c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1a2c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a2ca0:
    // 0x1a2ca0: 0xc051efe  jal         func_147BF8
label_1a2ca4:
    if (ctx->pc == 0x1A2CA4u) {
        ctx->pc = 0x1A2CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CA0u;
        // 0x1a2ca4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2CA8u;
        goto label_1a2ca8;
    }
    ctx->pc = 0x1A2CA0u;
    SET_GPR_U32(ctx, 31, 0x1A2CA8u);
    ctx->pc = 0x1A2CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2CA0u;
    // 0x1a2ca4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x1A2CA0u, 0x1A2CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2CA8u;
label_1a2ca8:
    // 0x1a2ca8: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x1a2ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1a2cac:
    // 0x1a2cac: 0xc051d4a  jal         func_147528
label_1a2cb0:
    if (ctx->pc == 0x1A2CB0u) {
        ctx->pc = 0x1A2CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CACu;
        // 0x1a2cb0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2CB4u;
        goto label_1a2cb4;
    }
    ctx->pc = 0x1A2CACu;
    SET_GPR_U32(ctx, 31, 0x1A2CB4u);
    ctx->pc = 0x1A2CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2CACu;
    // 0x1a2cb0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x1A2CACu, 0x1A2CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2CB4u;
label_1a2cb4:
    // 0x1a2cb4: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x1a2cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a2cb8:
    // 0x1a2cb8: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1a2cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a2cbc:
    // 0x1a2cbc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a2cbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1a2cc0:
    // 0x1a2cc0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a2cc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a2cc4:
    // 0x1a2cc4: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x1a2cc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a2cc8:
    // 0x1a2cc8: 0x0  nop
    ctx->pc = 0x1a2cc8u;
    // NOP
label_1a2ccc:
    // 0x1a2ccc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1a2cd0:
    if (ctx->pc == 0x1A2CD0u) {
        ctx->pc = 0x1A2CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CCCu;
        // 0x1a2cd0: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2CD4u;
        goto label_1a2cd4;
    }
    ctx->pc = 0x1A2CCCu;
    {
        const bool branch_taken_0x1a2ccc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CCCu;
        // 0x1a2cd0: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ccc) {
            ctx->pc = 0x1A2CE0u;
            goto label_1a2ce0;
        }
    }
    ctx->pc = 0x1A2CD4u;
label_1a2cd4:
    // 0x1a2cd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a2cd8:
    // 0x1a2cd8: 0xc05bd90  jal         func_16F640
label_1a2cdc:
    if (ctx->pc == 0x1A2CDCu) {
        ctx->pc = 0x1A2CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CD8u;
        // 0x1a2cdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2CE0u;
        goto label_1a2ce0;
    }
    ctx->pc = 0x1A2CD8u;
    SET_GPR_U32(ctx, 31, 0x1A2CE0u);
    ctx->pc = 0x1A2CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2CD8u;
    // 0x1a2cdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1A2CD8u, 0x1A2CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2CE0u;
label_1a2ce0:
    // 0x1a2ce0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1a2ce0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1a2ce4:
    // 0x1a2ce4: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x1a2ce4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_1a2ce8:
    // 0x1a2ce8: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x1a2ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1a2cec:
    // 0x1a2cec: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x1a2cecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_1a2cf0:
    // 0x1a2cf0: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x1a2cf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_1a2cf4:
    // 0x1a2cf4: 0x2ac20014  slti        $v0, $s6, 0x14
    ctx->pc = 0x1a2cf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)20) ? 1 : 0);
label_1a2cf8:
    // 0x1a2cf8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a2cfc:
    if (ctx->pc == 0x1A2CFCu) {
        ctx->pc = 0x1A2CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CF8u;
        // 0x1a2cfc: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D00u;
        goto label_1a2d00;
    }
    ctx->pc = 0x1A2CF8u;
    {
        const bool branch_taken_0x1a2cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CF8u;
        // 0x1a2cfc: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2cf8) {
            ctx->pc = 0x1A2D0Cu;
            goto label_1a2d0c;
        }
    }
    ctx->pc = 0x1A2D00u;
label_1a2d00:
    // 0x1a2d00: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x1a2d00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_1a2d04:
    // 0x1a2d04: 0x1456ffb8  bne         $v0, $s6, . + 4 + (-0x48 << 2)
label_1a2d08:
    if (ctx->pc == 0x1A2D08u) {
        ctx->pc = 0x1A2D0Cu;
        goto label_1a2d0c;
    }
    ctx->pc = 0x1A2D04u;
    {
        const bool branch_taken_0x1a2d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x1a2d04) {
            ctx->pc = 0x1A2BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2be8;
        }
    }
    ctx->pc = 0x1A2D0Cu;
label_1a2d0c:
    // 0x1a2d0c: 0xc06ddb6  jal         func_1B76D8
label_1a2d10:
    if (ctx->pc == 0x1A2D10u) {
        ctx->pc = 0x1A2D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D0Cu;
        // 0x1a2d10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D14u;
        goto label_1a2d14;
    }
    ctx->pc = 0x1A2D0Cu;
    SET_GPR_U32(ctx, 31, 0x1A2D14u);
    ctx->pc = 0x1A2D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2D0Cu;
    // 0x1a2d10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1A2D0Cu, 0x1A2D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2D14u;
label_1a2d14:
    // 0x1a2d14: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x1a2d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1a2d18:
    // 0x1a2d18: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x1a2d18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1a2d1c:
    // 0x1a2d1c: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x1a2d1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1a2d20:
    // 0x1a2d20: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x1a2d20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1a2d24:
    // 0x1a2d24: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x1a2d24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1a2d28:
    // 0x1a2d28: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x1a2d28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1a2d2c:
    // 0x1a2d2c: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x1a2d2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1a2d30:
    // 0x1a2d30: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1a2d30u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1a2d34:
    // 0x1a2d34: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1a2d34u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1a2d38:
    // 0x1a2d38: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1a2d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a2d3c:
    // 0x1a2d3c: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x1a2d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a2d40:
    // 0x1a2d40: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x1a2d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a2d44:
    // 0x1a2d44: 0x3e00008  jr          $ra
label_1a2d48:
    if (ctx->pc == 0x1A2D48u) {
        ctx->pc = 0x1A2D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D44u;
        // 0x1a2d48: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D4Cu;
        goto label_1a2d4c;
    }
    ctx->pc = 0x1A2D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D44u;
        // 0x1a2d48: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2D4Cu;
label_1a2d4c:
    // 0x1a2d4c: 0x0  nop
    ctx->pc = 0x1a2d4cu;
    // NOP
    ctx->pc = 0x1a2d50u;
}
