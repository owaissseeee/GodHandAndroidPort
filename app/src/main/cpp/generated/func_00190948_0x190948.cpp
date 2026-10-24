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

// Function: func_00190948
// Address: 0x190948 - 0x190bf0
void func_00190948_0x190948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00190948_0x190948");
#endif

    switch (ctx->pc) {
        case 0x190948u: goto label_190948;
        case 0x19094cu: goto label_19094c;
        case 0x190950u: goto label_190950;
        case 0x190954u: goto label_190954;
        case 0x190958u: goto label_190958;
        case 0x19095cu: goto label_19095c;
        case 0x190960u: goto label_190960;
        case 0x190964u: goto label_190964;
        case 0x190968u: goto label_190968;
        case 0x19096cu: goto label_19096c;
        case 0x190970u: goto label_190970;
        case 0x190974u: goto label_190974;
        case 0x190978u: goto label_190978;
        case 0x19097cu: goto label_19097c;
        case 0x190980u: goto label_190980;
        case 0x190984u: goto label_190984;
        case 0x190988u: goto label_190988;
        case 0x19098cu: goto label_19098c;
        case 0x190990u: goto label_190990;
        case 0x190994u: goto label_190994;
        case 0x190998u: goto label_190998;
        case 0x19099cu: goto label_19099c;
        case 0x1909a0u: goto label_1909a0;
        case 0x1909a4u: goto label_1909a4;
        case 0x1909a8u: goto label_1909a8;
        case 0x1909acu: goto label_1909ac;
        case 0x1909b0u: goto label_1909b0;
        case 0x1909b4u: goto label_1909b4;
        case 0x1909b8u: goto label_1909b8;
        case 0x1909bcu: goto label_1909bc;
        case 0x1909c0u: goto label_1909c0;
        case 0x1909c4u: goto label_1909c4;
        case 0x1909c8u: goto label_1909c8;
        case 0x1909ccu: goto label_1909cc;
        case 0x1909d0u: goto label_1909d0;
        case 0x1909d4u: goto label_1909d4;
        case 0x1909d8u: goto label_1909d8;
        case 0x1909dcu: goto label_1909dc;
        case 0x1909e0u: goto label_1909e0;
        case 0x1909e4u: goto label_1909e4;
        case 0x1909e8u: goto label_1909e8;
        case 0x1909ecu: goto label_1909ec;
        case 0x1909f0u: goto label_1909f0;
        case 0x1909f4u: goto label_1909f4;
        case 0x1909f8u: goto label_1909f8;
        case 0x1909fcu: goto label_1909fc;
        case 0x190a00u: goto label_190a00;
        case 0x190a04u: goto label_190a04;
        case 0x190a08u: goto label_190a08;
        case 0x190a0cu: goto label_190a0c;
        case 0x190a10u: goto label_190a10;
        case 0x190a14u: goto label_190a14;
        case 0x190a18u: goto label_190a18;
        case 0x190a1cu: goto label_190a1c;
        case 0x190a20u: goto label_190a20;
        case 0x190a24u: goto label_190a24;
        case 0x190a28u: goto label_190a28;
        case 0x190a2cu: goto label_190a2c;
        case 0x190a30u: goto label_190a30;
        case 0x190a34u: goto label_190a34;
        case 0x190a38u: goto label_190a38;
        case 0x190a3cu: goto label_190a3c;
        case 0x190a40u: goto label_190a40;
        case 0x190a44u: goto label_190a44;
        case 0x190a48u: goto label_190a48;
        case 0x190a4cu: goto label_190a4c;
        case 0x190a50u: goto label_190a50;
        case 0x190a54u: goto label_190a54;
        case 0x190a58u: goto label_190a58;
        case 0x190a5cu: goto label_190a5c;
        case 0x190a60u: goto label_190a60;
        case 0x190a64u: goto label_190a64;
        case 0x190a68u: goto label_190a68;
        case 0x190a6cu: goto label_190a6c;
        case 0x190a70u: goto label_190a70;
        case 0x190a74u: goto label_190a74;
        case 0x190a78u: goto label_190a78;
        case 0x190a7cu: goto label_190a7c;
        case 0x190a80u: goto label_190a80;
        case 0x190a84u: goto label_190a84;
        case 0x190a88u: goto label_190a88;
        case 0x190a8cu: goto label_190a8c;
        case 0x190a90u: goto label_190a90;
        case 0x190a94u: goto label_190a94;
        case 0x190a98u: goto label_190a98;
        case 0x190a9cu: goto label_190a9c;
        case 0x190aa0u: goto label_190aa0;
        case 0x190aa4u: goto label_190aa4;
        case 0x190aa8u: goto label_190aa8;
        case 0x190aacu: goto label_190aac;
        case 0x190ab0u: goto label_190ab0;
        case 0x190ab4u: goto label_190ab4;
        case 0x190ab8u: goto label_190ab8;
        case 0x190abcu: goto label_190abc;
        case 0x190ac0u: goto label_190ac0;
        case 0x190ac4u: goto label_190ac4;
        case 0x190ac8u: goto label_190ac8;
        case 0x190accu: goto label_190acc;
        case 0x190ad0u: goto label_190ad0;
        case 0x190ad4u: goto label_190ad4;
        case 0x190ad8u: goto label_190ad8;
        case 0x190adcu: goto label_190adc;
        case 0x190ae0u: goto label_190ae0;
        case 0x190ae4u: goto label_190ae4;
        case 0x190ae8u: goto label_190ae8;
        case 0x190aecu: goto label_190aec;
        case 0x190af0u: goto label_190af0;
        case 0x190af4u: goto label_190af4;
        case 0x190af8u: goto label_190af8;
        case 0x190afcu: goto label_190afc;
        case 0x190b00u: goto label_190b00;
        case 0x190b04u: goto label_190b04;
        case 0x190b08u: goto label_190b08;
        case 0x190b0cu: goto label_190b0c;
        case 0x190b10u: goto label_190b10;
        case 0x190b14u: goto label_190b14;
        case 0x190b18u: goto label_190b18;
        case 0x190b1cu: goto label_190b1c;
        case 0x190b20u: goto label_190b20;
        case 0x190b24u: goto label_190b24;
        case 0x190b28u: goto label_190b28;
        case 0x190b2cu: goto label_190b2c;
        case 0x190b30u: goto label_190b30;
        case 0x190b34u: goto label_190b34;
        case 0x190b38u: goto label_190b38;
        case 0x190b3cu: goto label_190b3c;
        case 0x190b40u: goto label_190b40;
        case 0x190b44u: goto label_190b44;
        case 0x190b48u: goto label_190b48;
        case 0x190b4cu: goto label_190b4c;
        case 0x190b50u: goto label_190b50;
        case 0x190b54u: goto label_190b54;
        case 0x190b58u: goto label_190b58;
        case 0x190b5cu: goto label_190b5c;
        case 0x190b60u: goto label_190b60;
        case 0x190b64u: goto label_190b64;
        case 0x190b68u: goto label_190b68;
        case 0x190b6cu: goto label_190b6c;
        case 0x190b70u: goto label_190b70;
        case 0x190b74u: goto label_190b74;
        case 0x190b78u: goto label_190b78;
        case 0x190b7cu: goto label_190b7c;
        case 0x190b80u: goto label_190b80;
        case 0x190b84u: goto label_190b84;
        case 0x190b88u: goto label_190b88;
        case 0x190b8cu: goto label_190b8c;
        case 0x190b90u: goto label_190b90;
        case 0x190b94u: goto label_190b94;
        case 0x190b98u: goto label_190b98;
        case 0x190b9cu: goto label_190b9c;
        case 0x190ba0u: goto label_190ba0;
        case 0x190ba4u: goto label_190ba4;
        case 0x190ba8u: goto label_190ba8;
        case 0x190bacu: goto label_190bac;
        case 0x190bb0u: goto label_190bb0;
        case 0x190bb4u: goto label_190bb4;
        case 0x190bb8u: goto label_190bb8;
        case 0x190bbcu: goto label_190bbc;
        case 0x190bc0u: goto label_190bc0;
        case 0x190bc4u: goto label_190bc4;
        case 0x190bc8u: goto label_190bc8;
        case 0x190bccu: goto label_190bcc;
        case 0x190bd0u: goto label_190bd0;
        case 0x190bd4u: goto label_190bd4;
        case 0x190bd8u: goto label_190bd8;
        case 0x190bdcu: goto label_190bdc;
        case 0x190be0u: goto label_190be0;
        case 0x190be4u: goto label_190be4;
        case 0x190be8u: goto label_190be8;
        case 0x190becu: goto label_190bec;
        default: break;
    }

    ctx->pc = 0x190948u;

label_190948:
    // 0x190948: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x190948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_19094c:
    // 0x19094c: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x19094cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_190950:
    // 0x190950: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x190950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_190954:
    // 0x190954: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x190954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_190958:
    // 0x190958: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x190958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_19095c:
    // 0x19095c: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x19095cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_190960:
    // 0x190960: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x190960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_190964:
    // 0x190964: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x190964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_190968:
    // 0x190968: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x190968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_19096c:
    // 0x19096c: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x19096cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_190970:
    // 0x190970: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x190970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_190974:
    // 0x190974: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x190974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_190978:
    // 0x190978: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x190978u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_19097c:
    // 0x19097c: 0xc06ddac  jal         func_1B76B0
label_190980:
    if (ctx->pc == 0x190980u) {
        ctx->pc = 0x190980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19097Cu;
        // 0x190980: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x190984u;
        goto label_190984;
    }
    ctx->pc = 0x19097Cu;
    SET_GPR_U32(ctx, 31, 0x190984u);
    ctx->pc = 0x190980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19097Cu;
    // 0x190980: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x19097Cu, 0x190984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190984u;
label_190984:
    // 0x190984: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
label_190988:
    if (ctx->pc == 0x190988u) {
        ctx->pc = 0x190988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190984u;
        // 0x190988: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19098Cu;
        goto label_19098c;
    }
    ctx->pc = 0x190984u;
    {
        const bool branch_taken_0x190984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190984u;
        // 0x190988: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190984) {
            ctx->pc = 0x190BB4u;
            goto label_190bb4;
        }
    }
    ctx->pc = 0x19098Cu;
label_19098c:
    // 0x19098c: 0x924302f4  lbu         $v1, 0x2F4($s2)
    ctx->pc = 0x19098cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
label_190990:
    // 0x190990: 0x24473f20  addiu       $a3, $v0, 0x3F20
    ctx->pc = 0x190990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16160));
label_190994:
    // 0x190994: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x190994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_190998:
    // 0x190998: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x190998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_19099c:
    // 0x19099c: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x19099cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1909a0:
    // 0x1909a0: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x1909a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1909a4:
    // 0x1909a4: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x1909a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1909a8:
    // 0x1909a8: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x1909a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1909ac:
    // 0x1909ac: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x1909acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1909b0:
    // 0x1909b0: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x1909b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1909b4:
    // 0x1909b4: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x1909b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1909b8:
    // 0x1909b8: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x1909b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1909bc:
    // 0x1909bc: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x1909bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1909c0:
    // 0x1909c0: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x1909c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1909c4:
    // 0x1909c4: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x1909c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1909c8:
    // 0x1909c8: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x1909c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1909cc:
    // 0x1909cc: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x1909ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1909d0:
    // 0x1909d0: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x1909d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1909d4:
    // 0x1909d4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1909d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1909d8:
    // 0x1909d8: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x1909d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_1909dc:
    // 0x1909dc: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x1909dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1909e0:
    // 0x1909e0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1909e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1909e4:
    // 0x1909e4: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x1909e4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_1909e8:
    // 0x1909e8: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_1909ec:
    if (ctx->pc == 0x1909ECu) {
        ctx->pc = 0x1909ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1909E8u;
        // 0x1909ec: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1909F0u;
        goto label_1909f0;
    }
    ctx->pc = 0x1909E8u;
    {
        const bool branch_taken_0x1909e8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1909ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1909E8u;
        // 0x1909ec: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1909e8) {
            ctx->pc = 0x190A1Cu;
            goto label_190a1c;
        }
    }
    ctx->pc = 0x1909F0u;
label_1909f0:
    // 0x1909f0: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x1909f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1909f4:
    // 0x1909f4: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1909f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1909f8:
    // 0x1909f8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1909f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1909fc:
    // 0x1909fc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1909fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_190a00:
    // 0x190a00: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x190a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_190a04:
    // 0x190a04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x190a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_190a08:
    // 0x190a08: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x190a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_190a0c:
    // 0x190a0c: 0xdc90fff8  ld          $s0, -0x8($a0)
    ctx->pc = 0x190a0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_190a10:
    // 0x190a10: 0x10303f  dsra32      $a2, $s0, 0
    ctx->pc = 0x190a10u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 16) >> (32 + 0));
label_190a14:
    // 0x190a14: 0x10000004  b           . + 4 + (0x4 << 2)
label_190a18:
    if (ctx->pc == 0x190A18u) {
        ctx->pc = 0x190A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A14u;
        // 0x190a18: 0x924202f4  lbu         $v0, 0x2F4($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190A1Cu;
        goto label_190a1c;
    }
    ctx->pc = 0x190A14u;
    {
        const bool branch_taken_0x190a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A14u;
        // 0x190a18: 0x924202f4  lbu         $v0, 0x2F4($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190a14) {
            ctx->pc = 0x190A28u;
            goto label_190a28;
        }
    }
    ctx->pc = 0x190A1Cu;
label_190a1c:
    // 0x190a1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x190a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_190a20:
    // 0x190a20: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x190a20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_190a24:
    // 0x190a24: 0x924202f4  lbu         $v0, 0x2F4($s2)
    ctx->pc = 0x190a24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
label_190a28:
    // 0x190a28: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x190a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_190a2c:
    // 0x190a2c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x190a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_190a30:
    // 0x190a30: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_190a34:
    if (ctx->pc == 0x190A34u) {
        ctx->pc = 0x190A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A30u;
        // 0x190a34: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190A38u;
        goto label_190a38;
    }
    ctx->pc = 0x190A30u;
    {
        const bool branch_taken_0x190a30 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x190A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A30u;
        // 0x190a34: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190a30) {
            ctx->pc = 0x190A4Cu;
            goto label_190a4c;
        }
    }
    ctx->pc = 0x190A38u;
label_190a38:
    // 0x190a38: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x190a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_190a3c:
    // 0x190a3c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x190a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_190a40:
    // 0x190a40: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x190a40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_190a44:
    // 0x190a44: 0x10000002  b           . + 4 + (0x2 << 2)
label_190a48:
    if (ctx->pc == 0x190A48u) {
        ctx->pc = 0x190A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A44u;
        // 0x190a48: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190A4Cu;
        goto label_190a4c;
    }
    ctx->pc = 0x190A44u;
    {
        const bool branch_taken_0x190a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A44u;
        // 0x190a48: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190a44) {
            ctx->pc = 0x190A50u;
            goto label_190a50;
        }
    }
    ctx->pc = 0x190A4Cu;
label_190a4c:
    // 0x190a4c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x190a4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_190a50:
    // 0x190a50: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x190a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_190a54:
    // 0x190a54: 0xc0f809  jalr        $a2
label_190a58:
    if (ctx->pc == 0x190A58u) {
        ctx->pc = 0x190A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A54u;
        // 0x190a58: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190A5Cu;
        goto label_190a5c;
    }
    ctx->pc = 0x190A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x190A5Cu);
        ctx->pc = 0x190A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A54u;
        // 0x190a58: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190A54u, 0x190A5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x190A5Cu;
label_190a5c:
    // 0x190a5c: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x190a5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_190a60:
    // 0x190a60: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_190a64:
    if (ctx->pc == 0x190A64u) {
        ctx->pc = 0x190A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A60u;
        // 0x190a64: 0x27be0030  addiu       $fp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190A68u;
        goto label_190a68;
    }
    ctx->pc = 0x190A60u;
    {
        const bool branch_taken_0x190a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A60u;
        // 0x190a64: 0x27be0030  addiu       $fp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190a60) {
            ctx->pc = 0x190BACu;
            goto label_190bac;
        }
    }
    ctx->pc = 0x190A68u;
label_190a68:
    // 0x190a68: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x190a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_190a6c:
    // 0x190a6c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x190a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_190a70:
    // 0x190a70: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x190a70u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_190a74:
    // 0x190a74: 0x26550660  addiu       $s5, $s2, 0x660
    ctx->pc = 0x190a74u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1632));
label_190a78:
    // 0x190a78: 0x26500630  addiu       $s0, $s2, 0x630
    ctx->pc = 0x190a78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1584));
label_190a7c:
    // 0x190a7c: 0x26540650  addiu       $s4, $s2, 0x650
    ctx->pc = 0x190a7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1616));
label_190a80:
    // 0x190a80: 0x26530640  addiu       $s3, $s2, 0x640
    ctx->pc = 0x190a80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1600));
label_190a84:
    // 0x190a84: 0x26510620  addiu       $s1, $s2, 0x620
    ctx->pc = 0x190a84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1568));
label_190a88:
    // 0x190a88: 0xc05ce40  jal         func_173900
label_190a8c:
    if (ctx->pc == 0x190A8Cu) {
        ctx->pc = 0x190A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A88u;
        // 0x190a8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190A90u;
        goto label_190a90;
    }
    ctx->pc = 0x190A88u;
    SET_GPR_U32(ctx, 31, 0x190A90u);
    ctx->pc = 0x190A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190A88u;
    // 0x190a8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x190A88u, 0x190A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190A90u;
label_190a90:
    // 0x190a90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x190a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_190a94:
    // 0x190a94: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
label_190a98:
    if (ctx->pc == 0x190A98u) {
        ctx->pc = 0x190A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A94u;
        // 0x190a98: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190A9Cu;
        goto label_190a9c;
    }
    ctx->pc = 0x190A94u;
    {
        const bool branch_taken_0x190a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x190a94) {
            ctx->pc = 0x190A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190A94u;
            // 0x190a98: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190B84u;
            goto label_190b84;
        }
    }
    ctx->pc = 0x190A9Cu;
label_190a9c:
    // 0x190a9c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x190a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_190aa0:
    // 0x190aa0: 0xc0a4bd4  jal         func_292F50
label_190aa4:
    if (ctx->pc == 0x190AA4u) {
        ctx->pc = 0x190AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190AA0u;
        // 0x190aa4: 0x24a464f0  addiu       $a0, $a1, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190AA8u;
        goto label_190aa8;
    }
    ctx->pc = 0x190AA0u;
    SET_GPR_U32(ctx, 31, 0x190AA8u);
    ctx->pc = 0x190AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190AA0u;
    // 0x190aa4: 0x24a464f0  addiu       $a0, $a1, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x190AA0u, 0x190AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190AA8u;
label_190aa8:
    // 0x190aa8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x190aa8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_190aac:
    // 0x190aac: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x190aacu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_190ab0:
    // 0x190ab0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x190ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_190ab4:
    // 0x190ab4: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x190ab4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_190ab8:
    // 0x190ab8: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x190ab8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_190abc:
    // 0x190abc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x190abcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_190ac0:
    // 0x190ac0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x190ac0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_190ac4:
    // 0x190ac4: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x190ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_190ac8:
    // 0x190ac8: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x190ac8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_190acc:
    // 0x190acc: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x190accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_190ad0:
    // 0x190ad0: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x190ad0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_190ad4:
    // 0x190ad4: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x190ad4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_190ad8:
    // 0x190ad8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x190ad8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_190adc:
    // 0x190adc: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x190adcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
label_190ae0:
    // 0x190ae0: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x190ae0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_190ae4:
    // 0x190ae4: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x190ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_190ae8:
    // 0x190ae8: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x190ae8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_190aec:
    // 0x190aec: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x190aecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_190af0:
    // 0x190af0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x190af0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_190af4:
    // 0x190af4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x190af4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_190af8:
    // 0x190af8: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x190af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_190afc:
    // 0x190afc: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x190afcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_190b00:
    // 0x190b00: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x190b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_190b04:
    // 0x190b04: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x190b04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_190b08:
    // 0x190b08: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x190b08u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_190b0c:
    // 0x190b0c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x190b0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_190b10:
    // 0x190b10: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x190b10u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_190b14:
    // 0x190b14: 0xc07df68  jal         func_1F7DA0
label_190b18:
    if (ctx->pc == 0x190B18u) {
        ctx->pc = 0x190B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B14u;
        // 0x190b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190B1Cu;
        goto label_190b1c;
    }
    ctx->pc = 0x190B14u;
    SET_GPR_U32(ctx, 31, 0x190B1Cu);
    ctx->pc = 0x190B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190B14u;
    // 0x190b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x190B14u, 0x190B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190B1Cu;
label_190b1c:
    // 0x190b1c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x190b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_190b20:
    // 0x190b20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x190b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190b24:
    // 0x190b24: 0xc051dca  jal         func_147728
label_190b28:
    if (ctx->pc == 0x190B28u) {
        ctx->pc = 0x190B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B24u;
        // 0x190b28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190B2Cu;
        goto label_190b2c;
    }
    ctx->pc = 0x190B24u;
    SET_GPR_U32(ctx, 31, 0x190B2Cu);
    ctx->pc = 0x190B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190B24u;
    // 0x190b28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x190B24u, 0x190B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190B2Cu;
label_190b2c:
    // 0x190b2c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x190b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_190b30:
    // 0x190b30: 0xc051f10  jal         func_147C40
label_190b34:
    if (ctx->pc == 0x190B34u) {
        ctx->pc = 0x190B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B30u;
        // 0x190b34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190B38u;
        goto label_190b38;
    }
    ctx->pc = 0x190B30u;
    SET_GPR_U32(ctx, 31, 0x190B38u);
    ctx->pc = 0x190B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190B30u;
    // 0x190b34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x190B30u, 0x190B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190B38u;
label_190b38:
    // 0x190b38: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x190b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_190b3c:
    // 0x190b3c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x190b3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_190b40:
    // 0x190b40: 0xc051efe  jal         func_147BF8
label_190b44:
    if (ctx->pc == 0x190B44u) {
        ctx->pc = 0x190B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B40u;
        // 0x190b44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190B48u;
        goto label_190b48;
    }
    ctx->pc = 0x190B40u;
    SET_GPR_U32(ctx, 31, 0x190B48u);
    ctx->pc = 0x190B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190B40u;
    // 0x190b44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x190B40u, 0x190B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190B48u;
label_190b48:
    // 0x190b48: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x190b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_190b4c:
    // 0x190b4c: 0xc051d4a  jal         func_147528
label_190b50:
    if (ctx->pc == 0x190B50u) {
        ctx->pc = 0x190B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B4Cu;
        // 0x190b50: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190B54u;
        goto label_190b54;
    }
    ctx->pc = 0x190B4Cu;
    SET_GPR_U32(ctx, 31, 0x190B54u);
    ctx->pc = 0x190B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190B4Cu;
    // 0x190b50: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x190B4Cu, 0x190B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190B54u;
label_190b54:
    // 0x190b54: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x190b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190b58:
    // 0x190b58: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x190b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_190b5c:
    // 0x190b5c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x190b5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_190b60:
    // 0x190b60: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x190b60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_190b64:
    // 0x190b64: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x190b64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190b68:
    // 0x190b68: 0x0  nop
    ctx->pc = 0x190b68u;
    // NOP
label_190b6c:
    // 0x190b6c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_190b70:
    if (ctx->pc == 0x190B70u) {
        ctx->pc = 0x190B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B6Cu;
        // 0x190b70: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x190B74u;
        goto label_190b74;
    }
    ctx->pc = 0x190B6Cu;
    {
        const bool branch_taken_0x190b6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x190B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B6Cu;
        // 0x190b70: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x190b6c) {
            ctx->pc = 0x190B80u;
            goto label_190b80;
        }
    }
    ctx->pc = 0x190B74u;
label_190b74:
    // 0x190b74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x190b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_190b78:
    // 0x190b78: 0xc05bd90  jal         func_16F640
label_190b7c:
    if (ctx->pc == 0x190B7Cu) {
        ctx->pc = 0x190B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B78u;
        // 0x190b7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190B80u;
        goto label_190b80;
    }
    ctx->pc = 0x190B78u;
    SET_GPR_U32(ctx, 31, 0x190B80u);
    ctx->pc = 0x190B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190B78u;
    // 0x190b7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x190B78u, 0x190B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190B80u;
label_190b80:
    // 0x190b80: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x190b80u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_190b84:
    // 0x190b84: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x190b84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_190b88:
    // 0x190b88: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x190b88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_190b8c:
    // 0x190b8c: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x190b8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_190b90:
    // 0x190b90: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x190b90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_190b94:
    // 0x190b94: 0x2ac20019  slti        $v0, $s6, 0x19
    ctx->pc = 0x190b94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)25) ? 1 : 0);
label_190b98:
    // 0x190b98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_190b9c:
    if (ctx->pc == 0x190B9Cu) {
        ctx->pc = 0x190B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B98u;
        // 0x190b9c: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190BA0u;
        goto label_190ba0;
    }
    ctx->pc = 0x190B98u;
    {
        const bool branch_taken_0x190b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B98u;
        // 0x190b9c: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190b98) {
            ctx->pc = 0x190BACu;
            goto label_190bac;
        }
    }
    ctx->pc = 0x190BA0u;
label_190ba0:
    // 0x190ba0: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x190ba0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_190ba4:
    // 0x190ba4: 0x1456ffb8  bne         $v0, $s6, . + 4 + (-0x48 << 2)
label_190ba8:
    if (ctx->pc == 0x190BA8u) {
        ctx->pc = 0x190BACu;
        goto label_190bac;
    }
    ctx->pc = 0x190BA4u;
    {
        const bool branch_taken_0x190ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x190ba4) {
            ctx->pc = 0x190A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190a88;
        }
    }
    ctx->pc = 0x190BACu;
label_190bac:
    // 0x190bac: 0xc06ddb6  jal         func_1B76D8
label_190bb0:
    if (ctx->pc == 0x190BB0u) {
        ctx->pc = 0x190BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BACu;
        // 0x190bb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190BB4u;
        goto label_190bb4;
    }
    ctx->pc = 0x190BACu;
    SET_GPR_U32(ctx, 31, 0x190BB4u);
    ctx->pc = 0x190BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190BACu;
    // 0x190bb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x190BACu, 0x190BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190BB4u;
label_190bb4:
    // 0x190bb4: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x190bb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_190bb8:
    // 0x190bb8: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x190bb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_190bbc:
    // 0x190bbc: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x190bbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_190bc0:
    // 0x190bc0: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x190bc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_190bc4:
    // 0x190bc4: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x190bc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_190bc8:
    // 0x190bc8: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x190bc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_190bcc:
    // 0x190bcc: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x190bccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_190bd0:
    // 0x190bd0: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x190bd0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_190bd4:
    // 0x190bd4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x190bd4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_190bd8:
    // 0x190bd8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x190bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_190bdc:
    // 0x190bdc: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x190bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_190be0:
    // 0x190be0: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x190be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_190be4:
    // 0x190be4: 0x3e00008  jr          $ra
label_190be8:
    if (ctx->pc == 0x190BE8u) {
        ctx->pc = 0x190BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BE4u;
        // 0x190be8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190BECu;
        goto label_190bec;
    }
    ctx->pc = 0x190BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BE4u;
        // 0x190be8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190BECu;
label_190bec:
    // 0x190bec: 0x0  nop
    ctx->pc = 0x190becu;
    // NOP
    ctx->pc = 0x190bf0u;
}
