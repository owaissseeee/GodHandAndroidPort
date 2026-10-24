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

// Function: func_00358AA8
// Address: 0x358aa8 - 0x358e78
void func_00358AA8_0x358aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00358AA8_0x358aa8");
#endif

    switch (ctx->pc) {
        case 0x358aa8u: goto label_358aa8;
        case 0x358aacu: goto label_358aac;
        case 0x358ab0u: goto label_358ab0;
        case 0x358ab4u: goto label_358ab4;
        case 0x358ab8u: goto label_358ab8;
        case 0x358abcu: goto label_358abc;
        case 0x358ac0u: goto label_358ac0;
        case 0x358ac4u: goto label_358ac4;
        case 0x358ac8u: goto label_358ac8;
        case 0x358accu: goto label_358acc;
        case 0x358ad0u: goto label_358ad0;
        case 0x358ad4u: goto label_358ad4;
        case 0x358ad8u: goto label_358ad8;
        case 0x358adcu: goto label_358adc;
        case 0x358ae0u: goto label_358ae0;
        case 0x358ae4u: goto label_358ae4;
        case 0x358ae8u: goto label_358ae8;
        case 0x358aecu: goto label_358aec;
        case 0x358af0u: goto label_358af0;
        case 0x358af4u: goto label_358af4;
        case 0x358af8u: goto label_358af8;
        case 0x358afcu: goto label_358afc;
        case 0x358b00u: goto label_358b00;
        case 0x358b04u: goto label_358b04;
        case 0x358b08u: goto label_358b08;
        case 0x358b0cu: goto label_358b0c;
        case 0x358b10u: goto label_358b10;
        case 0x358b14u: goto label_358b14;
        case 0x358b18u: goto label_358b18;
        case 0x358b1cu: goto label_358b1c;
        case 0x358b20u: goto label_358b20;
        case 0x358b24u: goto label_358b24;
        case 0x358b28u: goto label_358b28;
        case 0x358b2cu: goto label_358b2c;
        case 0x358b30u: goto label_358b30;
        case 0x358b34u: goto label_358b34;
        case 0x358b38u: goto label_358b38;
        case 0x358b3cu: goto label_358b3c;
        case 0x358b40u: goto label_358b40;
        case 0x358b44u: goto label_358b44;
        case 0x358b48u: goto label_358b48;
        case 0x358b4cu: goto label_358b4c;
        case 0x358b50u: goto label_358b50;
        case 0x358b54u: goto label_358b54;
        case 0x358b58u: goto label_358b58;
        case 0x358b5cu: goto label_358b5c;
        case 0x358b60u: goto label_358b60;
        case 0x358b64u: goto label_358b64;
        case 0x358b68u: goto label_358b68;
        case 0x358b6cu: goto label_358b6c;
        case 0x358b70u: goto label_358b70;
        case 0x358b74u: goto label_358b74;
        case 0x358b78u: goto label_358b78;
        case 0x358b7cu: goto label_358b7c;
        case 0x358b80u: goto label_358b80;
        case 0x358b84u: goto label_358b84;
        case 0x358b88u: goto label_358b88;
        case 0x358b8cu: goto label_358b8c;
        case 0x358b90u: goto label_358b90;
        case 0x358b94u: goto label_358b94;
        case 0x358b98u: goto label_358b98;
        case 0x358b9cu: goto label_358b9c;
        case 0x358ba0u: goto label_358ba0;
        case 0x358ba4u: goto label_358ba4;
        case 0x358ba8u: goto label_358ba8;
        case 0x358bacu: goto label_358bac;
        case 0x358bb0u: goto label_358bb0;
        case 0x358bb4u: goto label_358bb4;
        case 0x358bb8u: goto label_358bb8;
        case 0x358bbcu: goto label_358bbc;
        case 0x358bc0u: goto label_358bc0;
        case 0x358bc4u: goto label_358bc4;
        case 0x358bc8u: goto label_358bc8;
        case 0x358bccu: goto label_358bcc;
        case 0x358bd0u: goto label_358bd0;
        case 0x358bd4u: goto label_358bd4;
        case 0x358bd8u: goto label_358bd8;
        case 0x358bdcu: goto label_358bdc;
        case 0x358be0u: goto label_358be0;
        case 0x358be4u: goto label_358be4;
        case 0x358be8u: goto label_358be8;
        case 0x358becu: goto label_358bec;
        case 0x358bf0u: goto label_358bf0;
        case 0x358bf4u: goto label_358bf4;
        case 0x358bf8u: goto label_358bf8;
        case 0x358bfcu: goto label_358bfc;
        case 0x358c00u: goto label_358c00;
        case 0x358c04u: goto label_358c04;
        case 0x358c08u: goto label_358c08;
        case 0x358c0cu: goto label_358c0c;
        case 0x358c10u: goto label_358c10;
        case 0x358c14u: goto label_358c14;
        case 0x358c18u: goto label_358c18;
        case 0x358c1cu: goto label_358c1c;
        case 0x358c20u: goto label_358c20;
        case 0x358c24u: goto label_358c24;
        case 0x358c28u: goto label_358c28;
        case 0x358c2cu: goto label_358c2c;
        case 0x358c30u: goto label_358c30;
        case 0x358c34u: goto label_358c34;
        case 0x358c38u: goto label_358c38;
        case 0x358c3cu: goto label_358c3c;
        case 0x358c40u: goto label_358c40;
        case 0x358c44u: goto label_358c44;
        case 0x358c48u: goto label_358c48;
        case 0x358c4cu: goto label_358c4c;
        case 0x358c50u: goto label_358c50;
        case 0x358c54u: goto label_358c54;
        case 0x358c58u: goto label_358c58;
        case 0x358c5cu: goto label_358c5c;
        case 0x358c60u: goto label_358c60;
        case 0x358c64u: goto label_358c64;
        case 0x358c68u: goto label_358c68;
        case 0x358c6cu: goto label_358c6c;
        case 0x358c70u: goto label_358c70;
        case 0x358c74u: goto label_358c74;
        case 0x358c78u: goto label_358c78;
        case 0x358c7cu: goto label_358c7c;
        case 0x358c80u: goto label_358c80;
        case 0x358c84u: goto label_358c84;
        case 0x358c88u: goto label_358c88;
        case 0x358c8cu: goto label_358c8c;
        case 0x358c90u: goto label_358c90;
        case 0x358c94u: goto label_358c94;
        case 0x358c98u: goto label_358c98;
        case 0x358c9cu: goto label_358c9c;
        case 0x358ca0u: goto label_358ca0;
        case 0x358ca4u: goto label_358ca4;
        case 0x358ca8u: goto label_358ca8;
        case 0x358cacu: goto label_358cac;
        case 0x358cb0u: goto label_358cb0;
        case 0x358cb4u: goto label_358cb4;
        case 0x358cb8u: goto label_358cb8;
        case 0x358cbcu: goto label_358cbc;
        case 0x358cc0u: goto label_358cc0;
        case 0x358cc4u: goto label_358cc4;
        case 0x358cc8u: goto label_358cc8;
        case 0x358cccu: goto label_358ccc;
        case 0x358cd0u: goto label_358cd0;
        case 0x358cd4u: goto label_358cd4;
        case 0x358cd8u: goto label_358cd8;
        case 0x358cdcu: goto label_358cdc;
        case 0x358ce0u: goto label_358ce0;
        case 0x358ce4u: goto label_358ce4;
        case 0x358ce8u: goto label_358ce8;
        case 0x358cecu: goto label_358cec;
        case 0x358cf0u: goto label_358cf0;
        case 0x358cf4u: goto label_358cf4;
        case 0x358cf8u: goto label_358cf8;
        case 0x358cfcu: goto label_358cfc;
        case 0x358d00u: goto label_358d00;
        case 0x358d04u: goto label_358d04;
        case 0x358d08u: goto label_358d08;
        case 0x358d0cu: goto label_358d0c;
        case 0x358d10u: goto label_358d10;
        case 0x358d14u: goto label_358d14;
        case 0x358d18u: goto label_358d18;
        case 0x358d1cu: goto label_358d1c;
        case 0x358d20u: goto label_358d20;
        case 0x358d24u: goto label_358d24;
        case 0x358d28u: goto label_358d28;
        case 0x358d2cu: goto label_358d2c;
        case 0x358d30u: goto label_358d30;
        case 0x358d34u: goto label_358d34;
        case 0x358d38u: goto label_358d38;
        case 0x358d3cu: goto label_358d3c;
        case 0x358d40u: goto label_358d40;
        case 0x358d44u: goto label_358d44;
        case 0x358d48u: goto label_358d48;
        case 0x358d4cu: goto label_358d4c;
        case 0x358d50u: goto label_358d50;
        case 0x358d54u: goto label_358d54;
        case 0x358d58u: goto label_358d58;
        case 0x358d5cu: goto label_358d5c;
        case 0x358d60u: goto label_358d60;
        case 0x358d64u: goto label_358d64;
        case 0x358d68u: goto label_358d68;
        case 0x358d6cu: goto label_358d6c;
        case 0x358d70u: goto label_358d70;
        case 0x358d74u: goto label_358d74;
        case 0x358d78u: goto label_358d78;
        case 0x358d7cu: goto label_358d7c;
        case 0x358d80u: goto label_358d80;
        case 0x358d84u: goto label_358d84;
        case 0x358d88u: goto label_358d88;
        case 0x358d8cu: goto label_358d8c;
        case 0x358d90u: goto label_358d90;
        case 0x358d94u: goto label_358d94;
        case 0x358d98u: goto label_358d98;
        case 0x358d9cu: goto label_358d9c;
        case 0x358da0u: goto label_358da0;
        case 0x358da4u: goto label_358da4;
        case 0x358da8u: goto label_358da8;
        case 0x358dacu: goto label_358dac;
        case 0x358db0u: goto label_358db0;
        case 0x358db4u: goto label_358db4;
        case 0x358db8u: goto label_358db8;
        case 0x358dbcu: goto label_358dbc;
        case 0x358dc0u: goto label_358dc0;
        case 0x358dc4u: goto label_358dc4;
        case 0x358dc8u: goto label_358dc8;
        case 0x358dccu: goto label_358dcc;
        case 0x358dd0u: goto label_358dd0;
        case 0x358dd4u: goto label_358dd4;
        case 0x358dd8u: goto label_358dd8;
        case 0x358ddcu: goto label_358ddc;
        case 0x358de0u: goto label_358de0;
        case 0x358de4u: goto label_358de4;
        case 0x358de8u: goto label_358de8;
        case 0x358decu: goto label_358dec;
        case 0x358df0u: goto label_358df0;
        case 0x358df4u: goto label_358df4;
        case 0x358df8u: goto label_358df8;
        case 0x358dfcu: goto label_358dfc;
        case 0x358e00u: goto label_358e00;
        case 0x358e04u: goto label_358e04;
        case 0x358e08u: goto label_358e08;
        case 0x358e0cu: goto label_358e0c;
        case 0x358e10u: goto label_358e10;
        case 0x358e14u: goto label_358e14;
        case 0x358e18u: goto label_358e18;
        case 0x358e1cu: goto label_358e1c;
        case 0x358e20u: goto label_358e20;
        case 0x358e24u: goto label_358e24;
        case 0x358e28u: goto label_358e28;
        case 0x358e2cu: goto label_358e2c;
        case 0x358e30u: goto label_358e30;
        case 0x358e34u: goto label_358e34;
        case 0x358e38u: goto label_358e38;
        case 0x358e3cu: goto label_358e3c;
        case 0x358e40u: goto label_358e40;
        case 0x358e44u: goto label_358e44;
        case 0x358e48u: goto label_358e48;
        case 0x358e4cu: goto label_358e4c;
        case 0x358e50u: goto label_358e50;
        case 0x358e54u: goto label_358e54;
        case 0x358e58u: goto label_358e58;
        case 0x358e5cu: goto label_358e5c;
        case 0x358e60u: goto label_358e60;
        case 0x358e64u: goto label_358e64;
        case 0x358e68u: goto label_358e68;
        case 0x358e6cu: goto label_358e6c;
        case 0x358e70u: goto label_358e70;
        case 0x358e74u: goto label_358e74;
        default: break;
    }

    ctx->pc = 0x358aa8u;

label_358aa8:
    // 0x358aa8: 0x27bdfd20  addiu       $sp, $sp, -0x2E0
    ctx->pc = 0x358aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966560));
label_358aac:
    // 0x358aac: 0xffb00290  sd          $s0, 0x290($sp)
    ctx->pc = 0x358aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 16));
label_358ab0:
    // 0x358ab0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x358ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_358ab4:
    // 0x358ab4: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x358ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
label_358ab8:
    // 0x358ab8: 0xffb10298  sd          $s1, 0x298($sp)
    ctx->pc = 0x358ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 664), GPR_U64(ctx, 17));
label_358abc:
    // 0x358abc: 0xffb202a0  sd          $s2, 0x2A0($sp)
    ctx->pc = 0x358abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 18));
label_358ac0:
    // 0x358ac0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x358ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_358ac4:
    // 0x358ac4: 0xffb302a8  sd          $s3, 0x2A8($sp)
    ctx->pc = 0x358ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 680), GPR_U64(ctx, 19));
label_358ac8:
    // 0x358ac8: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x358ac8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_358acc:
    // 0x358acc: 0xffb402b0  sd          $s4, 0x2B0($sp)
    ctx->pc = 0x358accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 20));
label_358ad0:
    // 0x358ad0: 0xffb502b8  sd          $s5, 0x2B8($sp)
    ctx->pc = 0x358ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 696), GPR_U64(ctx, 21));
label_358ad4:
    // 0x358ad4: 0xffb602c0  sd          $s6, 0x2C0($sp)
    ctx->pc = 0x358ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 22));
label_358ad8:
    // 0x358ad8: 0xffb702c8  sd          $s7, 0x2C8($sp)
    ctx->pc = 0x358ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 712), GPR_U64(ctx, 23));
label_358adc:
    // 0x358adc: 0xffbe02d0  sd          $fp, 0x2D0($sp)
    ctx->pc = 0x358adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 30));
label_358ae0:
    // 0x358ae0: 0xffbf02d8  sd          $ra, 0x2D8($sp)
    ctx->pc = 0x358ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 728), GPR_U64(ctx, 31));
label_358ae4:
    // 0x358ae4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_358ae8:
    if (ctx->pc == 0x358AE8u) {
        ctx->pc = 0x358AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358AE4u;
        // 0x358ae8: 0xafa00250  sw          $zero, 0x250($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358AECu;
        goto label_358aec;
    }
    ctx->pc = 0x358AE4u;
    {
        const bool branch_taken_0x358ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x358AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358AE4u;
        // 0x358ae8: 0xafa00250  sw          $zero, 0x250($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358ae4) {
            ctx->pc = 0x358B50u;
            goto label_358b50;
        }
    }
    ctx->pc = 0x358AECu;
label_358aec:
    // 0x358aec: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x358aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_358af0:
    // 0x358af0: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x358af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_358af4:
    // 0x358af4: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x358af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_358af8:
    // 0x358af8: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x358af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_358afc:
    // 0x358afc: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x358afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_358b00:
    // 0x358b00: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x358b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_358b04:
    // 0x358b04: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x358b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_358b08:
    // 0x358b08: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x358b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_358b0c:
    // 0x358b0c: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x358b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_358b10:
    // 0x358b10: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x358b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_358b14:
    // 0x358b14: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x358b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_358b18:
    // 0x358b18: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x358b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_358b1c:
    // 0x358b1c: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x358b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_358b20:
    // 0x358b20: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x358b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_358b24:
    // 0x358b24: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x358b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_358b28:
    // 0x358b28: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x358b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_358b2c:
    // 0x358b2c: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x358b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_358b30:
    // 0x358b30: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x358b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_358b34:
    // 0x358b34: 0x0  nop
    ctx->pc = 0x358b34u;
    // NOP
label_358b38:
    // 0x358b38: 0x0  nop
    ctx->pc = 0x358b38u;
    // NOP
label_358b3c:
    // 0x358b3c: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
label_358b40:
    if (ctx->pc == 0x358B40u) {
        ctx->pc = 0x358B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358B3Cu;
        // 0x358b40: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358B44u;
        goto label_358b44;
    }
    ctx->pc = 0x358B3Cu;
    {
        const bool branch_taken_0x358b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x358B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358B3Cu;
        // 0x358b40: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358b3c) {
            ctx->pc = 0x358AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358af0;
        }
    }
    ctx->pc = 0x358B44u;
label_358b44:
    // 0x358b44: 0x10000010  b           . + 4 + (0x10 << 2)
label_358b48:
    if (ctx->pc == 0x358B48u) {
        ctx->pc = 0x358B4Cu;
        goto label_358b4c;
    }
    ctx->pc = 0x358B44u;
    {
        const bool branch_taken_0x358b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358b44) {
            ctx->pc = 0x358B88u;
            goto label_358b88;
        }
    }
    ctx->pc = 0x358B4Cu;
label_358b4c:
    // 0x358b4c: 0x0  nop
    ctx->pc = 0x358b4cu;
    // NOP
label_358b50:
    // 0x358b50: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x358b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_358b54:
    // 0x358b54: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x358b54u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_358b58:
    // 0x358b58: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x358b58u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_358b5c:
    // 0x358b5c: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x358b5cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_358b60:
    // 0x358b60: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x358b60u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
label_358b64:
    // 0x358b64: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x358b64u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
label_358b68:
    // 0x358b68: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x358b68u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
label_358b6c:
    // 0x358b6c: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x358b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
label_358b70:
    // 0x358b70: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x358b70u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
label_358b74:
    // 0x358b74: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x358b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_358b78:
    // 0x358b78: 0x0  nop
    ctx->pc = 0x358b78u;
    // NOP
label_358b7c:
    // 0x358b7c: 0x0  nop
    ctx->pc = 0x358b7cu;
    // NOP
label_358b80:
    // 0x358b80: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
label_358b84:
    if (ctx->pc == 0x358B84u) {
        ctx->pc = 0x358B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358B80u;
        // 0x358b84: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358B88u;
        goto label_358b88;
    }
    ctx->pc = 0x358B80u;
    {
        const bool branch_taken_0x358b80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x358B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358B80u;
        // 0x358b84: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358b80) {
            ctx->pc = 0x358B54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358b54;
        }
    }
    ctx->pc = 0x358B88u;
label_358b88:
    // 0x358b88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x358b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_358b8c:
    // 0x358b8c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x358b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_358b90:
    // 0x358b90: 0x8e150a2c  lw          $s5, 0xA2C($s0)
    ctx->pc = 0x358b90u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2604)));
label_358b94:
    // 0x358b94: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_358b98:
    if (ctx->pc == 0x358B98u) {
        ctx->pc = 0x358B9Cu;
        goto label_358b9c;
    }
    ctx->pc = 0x358B94u;
    {
        const bool branch_taken_0x358b94 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x358b94) {
            ctx->pc = 0x358BB0u;
            goto label_358bb0;
        }
    }
    ctx->pc = 0x358B9Cu;
label_358b9c:
    // 0x358b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x358b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_358ba0:
    // 0x358ba0: 0xc0d639e  jal         func_358E78
label_358ba4:
    if (ctx->pc == 0x358BA4u) {
        ctx->pc = 0x358BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358BA0u;
        // 0x358ba4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358BA8u;
        goto label_358ba8;
    }
    ctx->pc = 0x358BA0u;
    SET_GPR_U32(ctx, 31, 0x358BA8u);
    ctx->pc = 0x358BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358BA0u;
    // 0x358ba4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358E78u, 0x358BA0u, 0x358BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358BA8u;
label_358ba8:
    // 0x358ba8: 0x8fa80064  lw          $t0, 0x64($sp)
    ctx->pc = 0x358ba8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_358bac:
    // 0x358bac: 0xafa80250  sw          $t0, 0x250($sp)
    ctx->pc = 0x358bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 8));
label_358bb0:
    // 0x358bb0: 0xc0d3426  jal         func_34D098
label_358bb4:
    if (ctx->pc == 0x358BB4u) {
        ctx->pc = 0x358BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358BB0u;
        // 0x358bb4: 0x26040078  addiu       $a0, $s0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358BB8u;
        goto label_358bb8;
    }
    ctx->pc = 0x358BB0u;
    SET_GPR_U32(ctx, 31, 0x358BB8u);
    ctx->pc = 0x358BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358BB0u;
    // 0x358bb4: 0x26040078  addiu       $a0, $s0, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D098u, 0x358BB0u, 0x358BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358BB8u;
label_358bb8:
    // 0x358bb8: 0xc0d2f56  jal         func_34BD58
label_358bbc:
    if (ctx->pc == 0x358BBCu) {
        ctx->pc = 0x358BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358BB8u;
        // 0x358bbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358BC0u;
        goto label_358bc0;
    }
    ctx->pc = 0x358BB8u;
    SET_GPR_U32(ctx, 31, 0x358BC0u);
    ctx->pc = 0x358BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358BB8u;
    // 0x358bbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BD58u, 0x358BB8u, 0x358BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358BC0u;
label_358bc0:
    // 0x358bc0: 0x8e1609f8  lw          $s6, 0x9F8($s0)
    ctx->pc = 0x358bc0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2552)));
label_358bc4:
    // 0x358bc4: 0x8e0609fc  lw          $a2, 0x9FC($s0)
    ctx->pc = 0x358bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2556)));
label_358bc8:
    // 0x358bc8: 0x6a0212e7  ldl         $v0, 0x12E7($s0)
    ctx->pc = 0x358bc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4839); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_358bcc:
    // 0x358bcc: 0x6e0212e0  ldr         $v0, 0x12E0($s0)
    ctx->pc = 0x358bccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4832); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_358bd0:
    // 0x358bd0: 0x8e0312e8  lw          $v1, 0x12E8($s0)
    ctx->pc = 0x358bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4840)));
label_358bd4:
    // 0x358bd4: 0xb3a20247  sdl         $v0, 0x247($sp)
    ctx->pc = 0x358bd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 583); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_358bd8:
    // 0x358bd8: 0xb7a20240  sdr         $v0, 0x240($sp)
    ctx->pc = 0x358bd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 576); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_358bdc:
    // 0x358bdc: 0xafa30248  sw          $v1, 0x248($sp)
    ctx->pc = 0x358bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 3));
label_358be0:
    // 0x358be0: 0x8e1236b0  lw          $s2, 0x36B0($s0)
    ctx->pc = 0x358be0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14000)));
label_358be4:
    // 0x358be4: 0xafa60254  sw          $a2, 0x254($sp)
    ctx->pc = 0x358be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 6));
label_358be8:
    // 0x358be8: 0x8e071014  lw          $a3, 0x1014($s0)
    ctx->pc = 0x358be8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4116)));
label_358bec:
    // 0x358bec: 0x8e170d40  lw          $s7, 0xD40($s0)
    ctx->pc = 0x358becu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3392)));
label_358bf0:
    // 0x358bf0: 0x8e1e1004  lw          $fp, 0x1004($s0)
    ctx->pc = 0x358bf0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
label_358bf4:
    // 0x358bf4: 0xafa70258  sw          $a3, 0x258($sp)
    ctx->pc = 0x358bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 7));
label_358bf8:
    // 0x358bf8: 0x8e081018  lw          $t0, 0x1018($s0)
    ctx->pc = 0x358bf8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4120)));
label_358bfc:
    // 0x358bfc: 0xafa8025c  sw          $t0, 0x25C($sp)
    ctx->pc = 0x358bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 8));
label_358c00:
    // 0x358c00: 0x8e020d48  lw          $v0, 0xD48($s0)
    ctx->pc = 0x358c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3400)));
label_358c04:
    // 0x358c04: 0xafa20260  sw          $v0, 0x260($sp)
    ctx->pc = 0x358c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
label_358c08:
    // 0x358c08: 0x8e030fdc  lw          $v1, 0xFDC($s0)
    ctx->pc = 0x358c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4060)));
label_358c0c:
    // 0x358c0c: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_358c10:
    if (ctx->pc == 0x358C10u) {
        ctx->pc = 0x358C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358C0Cu;
        // 0x358c10: 0xafa30264  sw          $v1, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358C14u;
        goto label_358c14;
    }
    ctx->pc = 0x358C0Cu;
    {
        const bool branch_taken_0x358c0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x358C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358C0Cu;
        // 0x358c10: 0xafa30264  sw          $v1, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358c0c) {
            ctx->pc = 0x358C40u;
            goto label_358c40;
        }
    }
    ctx->pc = 0x358C14u;
label_358c14:
    // 0x358c14: 0x8e440dd0  lw          $a0, 0xDD0($s2)
    ctx->pc = 0x358c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3536)));
label_358c18:
    // 0x358c18: 0xafa40268  sw          $a0, 0x268($sp)
    ctx->pc = 0x358c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 4));
label_358c1c:
    // 0x358c1c: 0x8e450dc4  lw          $a1, 0xDC4($s2)
    ctx->pc = 0x358c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3524)));
label_358c20:
    // 0x358c20: 0xafa5026c  sw          $a1, 0x26C($sp)
    ctx->pc = 0x358c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 5));
label_358c24:
    // 0x358c24: 0x8e460dc8  lw          $a2, 0xDC8($s2)
    ctx->pc = 0x358c24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3528)));
label_358c28:
    // 0x358c28: 0xafa60270  sw          $a2, 0x270($sp)
    ctx->pc = 0x358c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 6));
label_358c2c:
    // 0x358c2c: 0x8e470dcc  lw          $a3, 0xDCC($s2)
    ctx->pc = 0x358c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3532)));
label_358c30:
    // 0x358c30: 0xafa70274  sw          $a3, 0x274($sp)
    ctx->pc = 0x358c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 7));
label_358c34:
    // 0x358c34: 0x8e480dd4  lw          $t0, 0xDD4($s2)
    ctx->pc = 0x358c34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3540)));
label_358c38:
    // 0x358c38: 0x10000006  b           . + 4 + (0x6 << 2)
label_358c3c:
    if (ctx->pc == 0x358C3Cu) {
        ctx->pc = 0x358C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358C38u;
        // 0x358c3c: 0xafa80278  sw          $t0, 0x278($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358C40u;
        goto label_358c40;
    }
    ctx->pc = 0x358C38u;
    {
        const bool branch_taken_0x358c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358C38u;
        // 0x358c3c: 0xafa80278  sw          $t0, 0x278($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358c38) {
            ctx->pc = 0x358C54u;
            goto label_358c54;
        }
    }
    ctx->pc = 0x358C40u;
label_358c40:
    // 0x358c40: 0xafa00278  sw          $zero, 0x278($sp)
    ctx->pc = 0x358c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 0));
label_358c44:
    // 0x358c44: 0xafa00274  sw          $zero, 0x274($sp)
    ctx->pc = 0x358c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 0));
label_358c48:
    // 0x358c48: 0xafa00270  sw          $zero, 0x270($sp)
    ctx->pc = 0x358c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 0));
label_358c4c:
    // 0x358c4c: 0xafa0026c  sw          $zero, 0x26C($sp)
    ctx->pc = 0x358c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 0));
label_358c50:
    // 0x358c50: 0xafa00268  sw          $zero, 0x268($sp)
    ctx->pc = 0x358c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 0));
label_358c54:
    // 0x358c54: 0x260313bc  addiu       $v1, $s0, 0x13BC
    ctx->pc = 0x358c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5052));
label_358c58:
    // 0x358c58: 0x27b40200  addiu       $s4, $sp, 0x200
    ctx->pc = 0x358c58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_358c5c:
    // 0x358c5c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x358c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_358c60:
    // 0x358c60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x358c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_358c64:
    // 0x358c64: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x358c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_358c68:
    // 0x358c68: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x358c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_358c6c:
    // 0x358c6c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x358c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_358c70:
    // 0x358c70: 0xafa20280  sw          $v0, 0x280($sp)
    ctx->pc = 0x358c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 2));
label_358c74:
    // 0x358c74: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x358c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_358c78:
    // 0x358c78: 0xc0d40e4  jal         func_350390
label_358c7c:
    if (ctx->pc == 0x358C7Cu) {
        ctx->pc = 0x358C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358C78u;
        // 0x358c7c: 0xafa3027c  sw          $v1, 0x27C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358C80u;
        goto label_358c80;
    }
    ctx->pc = 0x358C78u;
    SET_GPR_U32(ctx, 31, 0x358C80u);
    ctx->pc = 0x358C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358C78u;
    // 0x358c7c: 0xafa3027c  sw          $v1, 0x27C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350390u, 0x358C78u, 0x358C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358C80u;
label_358c80:
    // 0x358c80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x358c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_358c84:
    // 0x358c84: 0xc0d6222  jal         func_358888
label_358c88:
    if (ctx->pc == 0x358C88u) {
        ctx->pc = 0x358C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358C84u;
        // 0x358c88: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358C8Cu;
        goto label_358c8c;
    }
    ctx->pc = 0x358C84u;
    SET_GPR_U32(ctx, 31, 0x358C8Cu);
    ctx->pc = 0x358C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358C84u;
    // 0x358c88: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358888u, 0x358C84u, 0x358C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358C8Cu;
label_358c8c:
    // 0x358c8c: 0x5440006e  bnel        $v0, $zero, . + 4 + (0x6E << 2)
label_358c90:
    if (ctx->pc == 0x358C90u) {
        ctx->pc = 0x358C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358C8Cu;
        // 0x358c90: 0xdfb00290  ld          $s0, 0x290($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358C94u;
        goto label_358c94;
    }
    ctx->pc = 0x358C8Cu;
    {
        const bool branch_taken_0x358c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x358c8c) {
            ctx->pc = 0x358C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x358C8Cu;
            // 0x358c90: 0xdfb00290  ld          $s0, 0x290($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358E48u;
            goto label_358e48;
        }
    }
    ctx->pc = 0x358C94u;
label_358c94:
    // 0x358c94: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x358c94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_358c98:
    // 0x358c98: 0x26050b9c  addiu       $a1, $s0, 0xB9C
    ctx->pc = 0x358c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2972));
label_358c9c:
    // 0x358c9c: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x358c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_358ca0:
    // 0x358ca0: 0xc0d9a58  jal         func_366960
label_358ca4:
    if (ctx->pc == 0x358CA4u) {
        ctx->pc = 0x358CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358CA0u;
        // 0x358ca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358CA8u;
        goto label_358ca8;
    }
    ctx->pc = 0x358CA0u;
    SET_GPR_U32(ctx, 31, 0x358CA8u);
    ctx->pc = 0x358CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358CA0u;
    // 0x358ca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366960u, 0x358CA0u, 0x358CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358CA8u;
label_358ca8:
    // 0x358ca8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x358ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_358cac:
    // 0x358cac: 0xc0d60da  jal         func_358368
label_358cb0:
    if (ctx->pc == 0x358CB0u) {
        ctx->pc = 0x358CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358CACu;
        // 0x358cb0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358CB4u;
        goto label_358cb4;
    }
    ctx->pc = 0x358CACu;
    SET_GPR_U32(ctx, 31, 0x358CB4u);
    ctx->pc = 0x358CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358CACu;
    // 0x358cb0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358368u, 0x358CACu, 0x358CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358CB4u;
label_358cb4:
    // 0x358cb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x358cb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_358cb8:
    // 0x358cb8: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
label_358cbc:
    if (ctx->pc == 0x358CBCu) {
        ctx->pc = 0x358CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358CB8u;
        // 0x358cbc: 0x26040a0c  addiu       $a0, $s0, 0xA0C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2572));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358CC0u;
        goto label_358cc0;
    }
    ctx->pc = 0x358CB8u;
    {
        const bool branch_taken_0x358cb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x358CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358CB8u;
        // 0x358cbc: 0x26040a0c  addiu       $a0, $s0, 0xA0C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2572));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358cb8) {
            ctx->pc = 0x358CD8u;
            goto label_358cd8;
        }
    }
    ctx->pc = 0x358CC0u;
label_358cc0:
    // 0x358cc0: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x358cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_358cc4:
    // 0x358cc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x358cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_358cc8:
    // 0x358cc8: 0xc0d375c  jal         func_34DD70
label_358ccc:
    if (ctx->pc == 0x358CCCu) {
        ctx->pc = 0x358CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358CC8u;
        // 0x358ccc: 0x34a50202  ori         $a1, $a1, 0x202 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)514);
        ctx->in_delay_slot = false;
        ctx->pc = 0x358CD0u;
        goto label_358cd0;
    }
    ctx->pc = 0x358CC8u;
    SET_GPR_U32(ctx, 31, 0x358CD0u);
    ctx->pc = 0x358CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358CC8u;
    // 0x358ccc: 0x34a50202  ori         $a1, $a1, 0x202 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)514);
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x358CC8u, 0x358CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358CD0u;
label_358cd0:
    // 0x358cd0: 0x1000005d  b           . + 4 + (0x5D << 2)
label_358cd4:
    if (ctx->pc == 0x358CD4u) {
        ctx->pc = 0x358CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358CD0u;
        // 0x358cd4: 0xdfb00290  ld          $s0, 0x290($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358CD8u;
        goto label_358cd8;
    }
    ctx->pc = 0x358CD0u;
    {
        const bool branch_taken_0x358cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358CD0u;
        // 0x358cd4: 0xdfb00290  ld          $s0, 0x290($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358cd0) {
            ctx->pc = 0x358E48u;
            goto label_358e48;
        }
    }
    ctx->pc = 0x358CD8u;
label_358cd8:
    // 0x358cd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x358cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_358cdc:
    // 0x358cdc: 0xc0d9a58  jal         func_366960
label_358ce0:
    if (ctx->pc == 0x358CE0u) {
        ctx->pc = 0x358CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358CDCu;
        // 0x358ce0: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358CE4u;
        goto label_358ce4;
    }
    ctx->pc = 0x358CDCu;
    SET_GPR_U32(ctx, 31, 0x358CE4u);
    ctx->pc = 0x358CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358CDCu;
    // 0x358ce0: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366960u, 0x358CDCu, 0x358CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358CE4u;
label_358ce4:
    // 0x358ce4: 0x26040b9c  addiu       $a0, $s0, 0xB9C
    ctx->pc = 0x358ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2972));
label_358ce8:
    // 0x358ce8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x358ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_358cec:
    // 0x358cec: 0xc0d9a58  jal         func_366960
label_358cf0:
    if (ctx->pc == 0x358CF0u) {
        ctx->pc = 0x358CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358CECu;
        // 0x358cf0: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358CF4u;
        goto label_358cf4;
    }
    ctx->pc = 0x358CECu;
    SET_GPR_U32(ctx, 31, 0x358CF4u);
    ctx->pc = 0x358CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358CECu;
    // 0x358cf0: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366960u, 0x358CECu, 0x358CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358CF4u;
label_358cf4:
    // 0x358cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x358cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_358cf8:
    // 0x358cf8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x358cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_358cfc:
    // 0x358cfc: 0xc0d4106  jal         func_350418
label_358d00:
    if (ctx->pc == 0x358D00u) {
        ctx->pc = 0x358D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358CFCu;
        // 0x358d00: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358D04u;
        goto label_358d04;
    }
    ctx->pc = 0x358CFCu;
    SET_GPR_U32(ctx, 31, 0x358D04u);
    ctx->pc = 0x358D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358CFCu;
    // 0x358d00: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350418u, 0x358CFCu, 0x358D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358D04u;
label_358d04:
    // 0x358d04: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
label_358d08:
    if (ctx->pc == 0x358D08u) {
        ctx->pc = 0x358D0Cu;
        goto label_358d0c;
    }
    ctx->pc = 0x358D04u;
    {
        const bool branch_taken_0x358d04 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x358d04) {
            ctx->pc = 0x358D40u;
            goto label_358d40;
        }
    }
    ctx->pc = 0x358D0Cu;
label_358d0c:
    // 0x358d0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x358d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_358d10:
    // 0x358d10: 0xc0d639e  jal         func_358E78
label_358d14:
    if (ctx->pc == 0x358D14u) {
        ctx->pc = 0x358D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358D10u;
        // 0x358d14: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358D18u;
        goto label_358d18;
    }
    ctx->pc = 0x358D10u;
    SET_GPR_U32(ctx, 31, 0x358D18u);
    ctx->pc = 0x358D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358D10u;
    // 0x358d14: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358E78u, 0x358D10u, 0x358D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358D18u;
label_358d18:
    // 0x358d18: 0x5440004b  bnel        $v0, $zero, . + 4 + (0x4B << 2)
label_358d1c:
    if (ctx->pc == 0x358D1Cu) {
        ctx->pc = 0x358D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358D18u;
        // 0x358d1c: 0xdfb00290  ld          $s0, 0x290($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358D20u;
        goto label_358d20;
    }
    ctx->pc = 0x358D18u;
    {
        const bool branch_taken_0x358d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x358d18) {
            ctx->pc = 0x358D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x358D18u;
            // 0x358d1c: 0xdfb00290  ld          $s0, 0x290($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358E48u;
            goto label_358e48;
        }
    }
    ctx->pc = 0x358D20u;
label_358d20:
    // 0x358d20: 0x8fa60064  lw          $a2, 0x64($sp)
    ctx->pc = 0x358d20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_358d24:
    // 0x358d24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x358d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_358d28:
    // 0x358d28: 0xc0d63ba  jal         func_358EE8
label_358d2c:
    if (ctx->pc == 0x358D2Cu) {
        ctx->pc = 0x358D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358D28u;
        // 0x358d2c: 0x8fa50250  lw          $a1, 0x250($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358D30u;
        goto label_358d30;
    }
    ctx->pc = 0x358D28u;
    SET_GPR_U32(ctx, 31, 0x358D30u);
    ctx->pc = 0x358D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358D28u;
    // 0x358d2c: 0x8fa50250  lw          $a1, 0x250($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358EE8u, 0x358D28u, 0x358D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358D30u;
label_358d30:
    // 0x358d30: 0x54400045  bnel        $v0, $zero, . + 4 + (0x45 << 2)
label_358d34:
    if (ctx->pc == 0x358D34u) {
        ctx->pc = 0x358D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358D30u;
        // 0x358d34: 0xdfb00290  ld          $s0, 0x290($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358D38u;
        goto label_358d38;
    }
    ctx->pc = 0x358D30u;
    {
        const bool branch_taken_0x358d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x358d30) {
            ctx->pc = 0x358D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x358D30u;
            // 0x358d34: 0xdfb00290  ld          $s0, 0x290($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358E48u;
            goto label_358e48;
        }
    }
    ctx->pc = 0x358D38u;
label_358d38:
    // 0x358d38: 0xc0d63da  jal         func_358F68
label_358d3c:
    if (ctx->pc == 0x358D3Cu) {
        ctx->pc = 0x358D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358D38u;
        // 0x358d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358D40u;
        goto label_358d40;
    }
    ctx->pc = 0x358D38u;
    SET_GPR_U32(ctx, 31, 0x358D40u);
    ctx->pc = 0x358D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358D38u;
    // 0x358d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358F68u, 0x358D38u, 0x358D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358D40u;
label_358d40:
    // 0x358d40: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
label_358d44:
    if (ctx->pc == 0x358D44u) {
        ctx->pc = 0x358D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358D40u;
        // 0x358d44: 0x8fa60254  lw          $a2, 0x254($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358D48u;
        goto label_358d48;
    }
    ctx->pc = 0x358D40u;
    {
        const bool branch_taken_0x358d40 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x358D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358D40u;
        // 0x358d44: 0x8fa60254  lw          $a2, 0x254($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358d40) {
            ctx->pc = 0x358D54u;
            goto label_358d54;
        }
    }
    ctx->pc = 0x358D48u;
label_358d48:
    // 0x358d48: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x358d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_358d4c:
    // 0x358d4c: 0xc0d3788  jal         func_34DE20
label_358d50:
    if (ctx->pc == 0x358D50u) {
        ctx->pc = 0x358D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358D4Cu;
        // 0x358d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358D54u;
        goto label_358d54;
    }
    ctx->pc = 0x358D4Cu;
    SET_GPR_U32(ctx, 31, 0x358D54u);
    ctx->pc = 0x358D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358D4Cu;
    // 0x358d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DE20u, 0x358D4Cu, 0x358D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358D54u;
label_358d54:
    // 0x358d54: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
label_358d58:
    if (ctx->pc == 0x358D58u) {
        ctx->pc = 0x358D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358D54u;
        // 0x358d58: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358D5Cu;
        goto label_358d5c;
    }
    ctx->pc = 0x358D54u;
    {
        const bool branch_taken_0x358d54 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x358D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358D54u;
        // 0x358d58: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358d54) {
            ctx->pc = 0x358D64u;
            goto label_358d64;
        }
    }
    ctx->pc = 0x358D5Cu;
label_358d5c:
    // 0x358d5c: 0xc0d6bb8  jal         func_35AEE0
label_358d60:
    if (ctx->pc == 0x358D60u) {
        ctx->pc = 0x358D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358D5Cu;
        // 0x358d60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358D64u;
        goto label_358d64;
    }
    ctx->pc = 0x358D5Cu;
    SET_GPR_U32(ctx, 31, 0x358D64u);
    ctx->pc = 0x358D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358D5Cu;
    // 0x358d60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AEE0u, 0x358D5Cu, 0x358D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358D64u;
label_358d64:
    // 0x358d64: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
label_358d68:
    if (ctx->pc == 0x358D68u) {
        ctx->pc = 0x358D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358D64u;
        // 0x358d68: 0x8fa60258  lw          $a2, 0x258($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358D6Cu;
        goto label_358d6c;
    }
    ctx->pc = 0x358D64u;
    {
        const bool branch_taken_0x358d64 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x358D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358D64u;
        // 0x358d68: 0x8fa60258  lw          $a2, 0x258($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358d64) {
            ctx->pc = 0x358D7Cu;
            goto label_358d7c;
        }
    }
    ctx->pc = 0x358D6Cu;
label_358d6c:
    // 0x358d6c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x358d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_358d70:
    // 0x358d70: 0x8fa7025c  lw          $a3, 0x25C($sp)
    ctx->pc = 0x358d70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_358d74:
    // 0x358d74: 0xc0d6bda  jal         func_35AF68
label_358d78:
    if (ctx->pc == 0x358D78u) {
        ctx->pc = 0x358D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358D74u;
        // 0x358d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358D7Cu;
        goto label_358d7c;
    }
    ctx->pc = 0x358D74u;
    SET_GPR_U32(ctx, 31, 0x358D7Cu);
    ctx->pc = 0x358D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358D74u;
    // 0x358d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AF68u, 0x358D74u, 0x358D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358D7Cu;
label_358d7c:
    // 0x358d7c: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x358d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_358d80:
    // 0x358d80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_358d84:
    if (ctx->pc == 0x358D84u) {
        ctx->pc = 0x358D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358D80u;
        // 0x358d84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358D88u;
        goto label_358d88;
    }
    ctx->pc = 0x358D80u;
    {
        const bool branch_taken_0x358d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x358D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358D80u;
        // 0x358d84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358d80) {
            ctx->pc = 0x358D90u;
            goto label_358d90;
        }
    }
    ctx->pc = 0x358D88u;
label_358d88:
    // 0x358d88: 0xc0d6b9c  jal         func_35AE70
label_358d8c:
    if (ctx->pc == 0x358D8Cu) {
        ctx->pc = 0x358D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358D88u;
        // 0x358d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358D90u;
        goto label_358d90;
    }
    ctx->pc = 0x358D88u;
    SET_GPR_U32(ctx, 31, 0x358D90u);
    ctx->pc = 0x358D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358D88u;
    // 0x358d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE70u, 0x358D88u, 0x358D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358D90u;
label_358d90:
    // 0x358d90: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x358d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_358d94:
    // 0x358d94: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x358d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_358d98:
    // 0x358d98: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_358d9c:
    if (ctx->pc == 0x358D9Cu) {
        ctx->pc = 0x358D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358D98u;
        // 0x358d9c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358DA0u;
        goto label_358da0;
    }
    ctx->pc = 0x358D98u;
    {
        const bool branch_taken_0x358d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x358D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358D98u;
        // 0x358d9c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358d98) {
            ctx->pc = 0x358DA8u;
            goto label_358da8;
        }
    }
    ctx->pc = 0x358DA0u;
label_358da0:
    // 0x358da0: 0xc0d5c54  jal         func_357150
label_358da4:
    if (ctx->pc == 0x358DA4u) {
        ctx->pc = 0x358DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358DA0u;
        // 0x358da4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358DA8u;
        goto label_358da8;
    }
    ctx->pc = 0x358DA0u;
    SET_GPR_U32(ctx, 31, 0x358DA8u);
    ctx->pc = 0x358DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358DA0u;
    // 0x358da4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357150u, 0x358DA0u, 0x358DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358DA8u;
label_358da8:
    // 0x358da8: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x358da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_358dac:
    // 0x358dac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_358db0:
    if (ctx->pc == 0x358DB0u) {
        ctx->pc = 0x358DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358DACu;
        // 0x358db0: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358DB4u;
        goto label_358db4;
    }
    ctx->pc = 0x358DACu;
    {
        const bool branch_taken_0x358dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x358DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358DACu;
        // 0x358db0: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358dac) {
            ctx->pc = 0x358DE0u;
            goto label_358de0;
        }
    }
    ctx->pc = 0x358DB4u;
label_358db4:
    // 0x358db4: 0x6ba40247  ldl         $a0, 0x247($sp)
    ctx->pc = 0x358db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 583); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_358db8:
    // 0x358db8: 0x6fa40240  ldr         $a0, 0x240($sp)
    ctx->pc = 0x358db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 576); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_358dbc:
    // 0x358dbc: 0x8fa50248  lw          $a1, 0x248($sp)
    ctx->pc = 0x358dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
label_358dc0:
    // 0x358dc0: 0xb20412e7  sdl         $a0, 0x12E7($s0)
    ctx->pc = 0x358dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4839); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_358dc4:
    // 0x358dc4: 0xb60412e0  sdr         $a0, 0x12E0($s0)
    ctx->pc = 0x358dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4832); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_358dc8:
    // 0x358dc8: 0xae0512e8  sw          $a1, 0x12E8($s0)
    ctx->pc = 0x358dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4840), GPR_U32(ctx, 5));
label_358dcc:
    // 0x358dcc: 0x8c42e2f8  lw          $v0, -0x1D08($v0)
    ctx->pc = 0x358dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959864)));
label_358dd0:
    // 0x358dd0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_358dd4:
    if (ctx->pc == 0x358DD4u) {
        ctx->pc = 0x358DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358DD0u;
        // 0x358dd4: 0x27a80240  addiu       $t0, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358DD8u;
        goto label_358dd8;
    }
    ctx->pc = 0x358DD0u;
    {
        const bool branch_taken_0x358dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x358DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358DD0u;
        // 0x358dd4: 0x27a80240  addiu       $t0, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358dd0) {
            ctx->pc = 0x358DE0u;
            goto label_358de0;
        }
    }
    ctx->pc = 0x358DD8u;
label_358dd8:
    // 0x358dd8: 0x40f809  jalr        $v0
label_358ddc:
    if (ctx->pc == 0x358DDCu) {
        ctx->pc = 0x358DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358DD8u;
        // 0x358ddc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358DE0u;
        goto label_358de0;
    }
    ctx->pc = 0x358DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x358DE0u);
        ctx->pc = 0x358DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358DD8u;
        // 0x358ddc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358DD8u, 0x358DE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x358DE0u;
label_358de0:
    // 0x358de0: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
label_358de4:
    if (ctx->pc == 0x358DE4u) {
        ctx->pc = 0x358DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358DE0u;
        // 0x358de4: 0x8fa2027c  lw          $v0, 0x27C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358DE8u;
        goto label_358de8;
    }
    ctx->pc = 0x358DE0u;
    {
        const bool branch_taken_0x358de0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x358DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358DE0u;
        // 0x358de4: 0x8fa2027c  lw          $v0, 0x27C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358de0) {
            ctx->pc = 0x358E2Cu;
            goto label_358e2c;
        }
    }
    ctx->pc = 0x358DE8u;
label_358de8:
    // 0x358de8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x358de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_358dec:
    // 0x358dec: 0xc0d65d6  jal         func_359758
label_358df0:
    if (ctx->pc == 0x358DF0u) {
        ctx->pc = 0x358DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358DECu;
        // 0x358df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358DF4u;
        goto label_358df4;
    }
    ctx->pc = 0x358DECu;
    SET_GPR_U32(ctx, 31, 0x358DF4u);
    ctx->pc = 0x358DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358DECu;
    // 0x358df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359758u, 0x358DECu, 0x358DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358DF4u;
label_358df4:
    // 0x358df4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x358df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_358df8:
    // 0x358df8: 0xc0d66fa  jal         func_359BE8
label_358dfc:
    if (ctx->pc == 0x358DFCu) {
        ctx->pc = 0x358DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358DF8u;
        // 0x358dfc: 0x8fa50268  lw          $a1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358E00u;
        goto label_358e00;
    }
    ctx->pc = 0x358DF8u;
    SET_GPR_U32(ctx, 31, 0x358E00u);
    ctx->pc = 0x358DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358DF8u;
    // 0x358dfc: 0x8fa50268  lw          $a1, 0x268($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359BE8u, 0x358DF8u, 0x358E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358E00u;
label_358e00:
    // 0x358e00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x358e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_358e04:
    // 0x358e04: 0xc0d66bc  jal         func_359AF0
label_358e08:
    if (ctx->pc == 0x358E08u) {
        ctx->pc = 0x358E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358E04u;
        // 0x358e08: 0x8fa5026c  lw          $a1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358E0Cu;
        goto label_358e0c;
    }
    ctx->pc = 0x358E04u;
    SET_GPR_U32(ctx, 31, 0x358E0Cu);
    ctx->pc = 0x358E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358E04u;
    // 0x358e08: 0x8fa5026c  lw          $a1, 0x26C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359AF0u, 0x358E04u, 0x358E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358E0Cu;
label_358e0c:
    // 0x358e0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x358e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_358e10:
    // 0x358e10: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x358e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_358e14:
    // 0x358e14: 0xc0d66d8  jal         func_359B60
label_358e18:
    if (ctx->pc == 0x358E18u) {
        ctx->pc = 0x358E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358E14u;
        // 0x358e18: 0x8fa60274  lw          $a2, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358E1Cu;
        goto label_358e1c;
    }
    ctx->pc = 0x358E14u;
    SET_GPR_U32(ctx, 31, 0x358E1Cu);
    ctx->pc = 0x358E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358E14u;
    // 0x358e18: 0x8fa60274  lw          $a2, 0x274($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359B60u, 0x358E14u, 0x358E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358E1Cu;
label_358e1c:
    // 0x358e1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x358e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_358e20:
    // 0x358e20: 0xc0d6716  jal         func_359C58
label_358e24:
    if (ctx->pc == 0x358E24u) {
        ctx->pc = 0x358E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358E20u;
        // 0x358e24: 0x8fa50278  lw          $a1, 0x278($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358E28u;
        goto label_358e28;
    }
    ctx->pc = 0x358E20u;
    SET_GPR_U32(ctx, 31, 0x358E28u);
    ctx->pc = 0x358E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358E20u;
    // 0x358e24: 0x8fa50278  lw          $a1, 0x278($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359C58u, 0x358E20u, 0x358E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358E28u;
label_358e28:
    // 0x358e28: 0x8fa2027c  lw          $v0, 0x27C($sp)
    ctx->pc = 0x358e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
label_358e2c:
    // 0x358e2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_358e30:
    if (ctx->pc == 0x358E30u) {
        ctx->pc = 0x358E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358E2Cu;
        // 0x358e30: 0x8fa60280  lw          $a2, 0x280($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358E34u;
        goto label_358e34;
    }
    ctx->pc = 0x358E2Cu;
    {
        const bool branch_taken_0x358e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x358E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358E2Cu;
        // 0x358e30: 0x8fa60280  lw          $a2, 0x280($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358e2c) {
            ctx->pc = 0x358E40u;
            goto label_358e40;
        }
    }
    ctx->pc = 0x358E34u;
label_358e34:
    // 0x358e34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x358e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_358e38:
    // 0x358e38: 0xc0d64ba  jal         func_3592E8
label_358e3c:
    if (ctx->pc == 0x358E3Cu) {
        ctx->pc = 0x358E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358E38u;
        // 0x358e3c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358E40u;
        goto label_358e40;
    }
    ctx->pc = 0x358E38u;
    SET_GPR_U32(ctx, 31, 0x358E40u);
    ctx->pc = 0x358E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358E38u;
    // 0x358e3c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3592E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3592E8u, 0x358E38u, 0x358E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358E40u;
label_358e40:
    // 0x358e40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x358e40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_358e44:
    // 0x358e44: 0xdfb00290  ld          $s0, 0x290($sp)
    ctx->pc = 0x358e44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
label_358e48:
    // 0x358e48: 0xdfb10298  ld          $s1, 0x298($sp)
    ctx->pc = 0x358e48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 664)));
label_358e4c:
    // 0x358e4c: 0xdfb202a0  ld          $s2, 0x2A0($sp)
    ctx->pc = 0x358e4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 672)));
label_358e50:
    // 0x358e50: 0xdfb302a8  ld          $s3, 0x2A8($sp)
    ctx->pc = 0x358e50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 680)));
label_358e54:
    // 0x358e54: 0xdfb402b0  ld          $s4, 0x2B0($sp)
    ctx->pc = 0x358e54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 688)));
label_358e58:
    // 0x358e58: 0xdfb502b8  ld          $s5, 0x2B8($sp)
    ctx->pc = 0x358e58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 696)));
label_358e5c:
    // 0x358e5c: 0xdfb602c0  ld          $s6, 0x2C0($sp)
    ctx->pc = 0x358e5cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 704)));
label_358e60:
    // 0x358e60: 0xdfb702c8  ld          $s7, 0x2C8($sp)
    ctx->pc = 0x358e60u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 712)));
label_358e64:
    // 0x358e64: 0xdfbe02d0  ld          $fp, 0x2D0($sp)
    ctx->pc = 0x358e64u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 720)));
label_358e68:
    // 0x358e68: 0xdfbf02d8  ld          $ra, 0x2D8($sp)
    ctx->pc = 0x358e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 728)));
label_358e6c:
    // 0x358e6c: 0x3e00008  jr          $ra
label_358e70:
    if (ctx->pc == 0x358E70u) {
        ctx->pc = 0x358E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358E6Cu;
        // 0x358e70: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358E74u;
        goto label_358e74;
    }
    ctx->pc = 0x358E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358E6Cu;
        // 0x358e70: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358E74u;
label_358e74:
    // 0x358e74: 0x0  nop
    ctx->pc = 0x358e74u;
    // NOP
    ctx->pc = 0x358e78u;
}
