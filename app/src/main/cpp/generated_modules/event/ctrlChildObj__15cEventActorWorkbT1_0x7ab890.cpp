#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: ctrlChildObj__15cEventActorWorkbT1
// Address: 0x7ab890 - 0x7abde8
void ctrlChildObj__15cEventActorWorkbT1_0x7ab890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ctrlChildObj__15cEventActorWorkbT1_0x7ab890");
#endif

    switch (ctx->pc) {
        case 0x7aba04u: goto label_7aba04;
        case 0x7abab0u: goto label_7abab0;
        case 0x7abc84u: goto label_7abc84;
        case 0x7abca8u: goto label_7abca8;
        case 0x7abcbcu: goto label_7abcbc;
        case 0x7abcd4u: goto label_7abcd4;
        case 0x7abcf8u: goto label_7abcf8;
        case 0x7abd0cu: goto label_7abd0c;
        case 0x7abda0u: goto label_7abda0;
        default: break;
    }

    ctx->pc = 0x7ab890u;

    // 0x7ab890: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x7ab890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x7ab894: 0x3c02007b  lui         $v0, 0x7B
    ctx->pc = 0x7ab894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
    // 0x7ab898: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x7ab898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x7ab89c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x7ab89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x7ab8a0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x7ab8a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ab8a4: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x7ab8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x7ab8a8: 0x24425280  addiu       $v0, $v0, 0x5280
    ctx->pc = 0x7ab8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21120));
    // 0x7ab8ac: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x7ab8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x7ab8b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7ab8b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ab8b4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x7ab8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x7ab8b8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x7ab8b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ab8bc: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x7ab8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x7ab8c0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x7ab8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x7ab8c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x7ab8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x7ab8c8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x7ab8c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7ab8cc: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x7ab8ccu;
    { uint32_t bits = FAST_READ32(0x7B5294u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ab8d0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x7ab8d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7ab8d4: 0x0  nop
    ctx->pc = 0x7ab8d4u;
    // NOP
    // 0x7ab8d8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x7AB8D8u;
    {
        const bool branch_taken_0x7ab8d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x7AB8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB8D8u;
        // 0x7ab8dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab8d8) {
            ctx->pc = 0x7AB8FCu;
            goto label_7ab8fc;
        }
    }
    ctx->pc = 0x7AB8E0u;
    // 0x7ab8e0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x7ab8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x7ab8e4: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x7ab8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x7ab8e8: 0x8e240044  lw          $a0, 0x44($s1)
    ctx->pc = 0x7ab8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x7ab8ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x7ab8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x7ab8f0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x7ab8f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x7ab8f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x7ab8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x7ab8f8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x7ab8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_7ab8fc:
    // 0x7ab8fc: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x7ab8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x7ab900: 0x24020253  addiu       $v0, $zero, 0x253
    ctx->pc = 0x7ab900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
    // 0x7ab904: 0x10620078  beq         $v1, $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x7AB904u;
    {
        const bool branch_taken_0x7ab904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7AB908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB904u;
        // 0x7ab908: 0x2c620254  sltiu       $v0, $v1, 0x254 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)596) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab904) {
            ctx->pc = 0x7ABAE8u;
            goto label_7abae8;
        }
    }
    ctx->pc = 0x7AB90Cu;
    // 0x7ab90c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x7AB90Cu;
    {
        const bool branch_taken_0x7ab90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AB910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB90Cu;
        // 0x7ab910: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab90c) {
            ctx->pc = 0x7AB948u;
            goto label_7ab948;
        }
    }
    ctx->pc = 0x7AB914u;
    // 0x7ab914: 0x10620047  beq         $v1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x7AB914u;
    {
        const bool branch_taken_0x7ab914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7AB918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB914u;
        // 0x7ab918: 0x2c620103  sltiu       $v0, $v1, 0x103 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)259) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab914) {
            ctx->pc = 0x7ABA34u;
            goto label_7aba34;
        }
    }
    ctx->pc = 0x7AB91Cu;
    // 0x7ab91c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7AB91Cu;
    {
        const bool branch_taken_0x7ab91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AB920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB91Cu;
        // 0x7ab920: 0x24020101  addiu       $v0, $zero, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab91c) {
            ctx->pc = 0x7AB934u;
            goto label_7ab934;
        }
    }
    ctx->pc = 0x7AB924u;
    // 0x7ab924: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x7AB924u;
    {
        const bool branch_taken_0x7ab924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7AB928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB924u;
        // 0x7ab928: 0x26d45280  addiu       $s4, $s6, 0x5280 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 21120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab924) {
            ctx->pc = 0x7AB988u;
            goto label_7ab988;
        }
    }
    ctx->pc = 0x7AB92Cu;
    // 0x7ab92c: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x7AB92Cu;
    {
        const bool branch_taken_0x7ab92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ab92c) {
            ctx->pc = 0x7ABC44u;
            goto label_7abc44;
        }
    }
    ctx->pc = 0x7AB934u;
label_7ab934:
    // 0x7ab934: 0x24020212  addiu       $v0, $zero, 0x212
    ctx->pc = 0x7ab934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 530));
    // 0x7ab938: 0x1062009b  beq         $v1, $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x7AB938u;
    {
        const bool branch_taken_0x7ab938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7AB93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB938u;
        // 0x7ab93c: 0x26d45280  addiu       $s4, $s6, 0x5280 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 21120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab938) {
            ctx->pc = 0x7ABBA8u;
            goto label_7abba8;
        }
    }
    ctx->pc = 0x7AB940u;
    // 0x7ab940: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x7AB940u;
    {
        const bool branch_taken_0x7ab940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ab940) {
            ctx->pc = 0x7ABC44u;
            goto label_7abc44;
        }
    }
    ctx->pc = 0x7AB948u;
label_7ab948:
    // 0x7ab948: 0x2402036e  addiu       $v0, $zero, 0x36E
    ctx->pc = 0x7ab948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 878));
    // 0x7ab94c: 0x106200ae  beq         $v1, $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x7AB94Cu;
    {
        const bool branch_taken_0x7ab94c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7AB950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB94Cu;
        // 0x7ab950: 0x2c62036f  sltiu       $v0, $v1, 0x36F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)879) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab94c) {
            ctx->pc = 0x7ABC08u;
            goto label_7abc08;
        }
    }
    ctx->pc = 0x7AB954u;
    // 0x7ab954: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7AB954u;
    {
        const bool branch_taken_0x7ab954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AB958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB954u;
        // 0x7ab958: 0x24020257  addiu       $v0, $zero, 0x257 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 599));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab954) {
            ctx->pc = 0x7AB96Cu;
            goto label_7ab96c;
        }
    }
    ctx->pc = 0x7AB95Cu;
    // 0x7ab95c: 0x1062007a  beq         $v1, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x7AB95Cu;
    {
        const bool branch_taken_0x7ab95c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7AB960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB95Cu;
        // 0x7ab960: 0x26d45280  addiu       $s4, $s6, 0x5280 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 21120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab95c) {
            ctx->pc = 0x7ABB48u;
            goto label_7abb48;
        }
    }
    ctx->pc = 0x7AB964u;
    // 0x7ab964: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x7AB964u;
    {
        const bool branch_taken_0x7ab964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ab964) {
            ctx->pc = 0x7ABC44u;
            goto label_7abc44;
        }
    }
    ctx->pc = 0x7AB96Cu;
label_7ab96c:
    // 0x7ab96c: 0x24020374  addiu       $v0, $zero, 0x374
    ctx->pc = 0x7ab96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 884));
    // 0x7ab970: 0x106200a5  beq         $v1, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x7AB970u;
    {
        const bool branch_taken_0x7ab970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7AB974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB970u;
        // 0x7ab974: 0x2402060d  addiu       $v0, $zero, 0x60D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1549));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab970) {
            ctx->pc = 0x7ABC08u;
            goto label_7abc08;
        }
    }
    ctx->pc = 0x7AB978u;
    // 0x7ab978: 0x1062004f  beq         $v1, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x7AB978u;
    {
        const bool branch_taken_0x7ab978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7AB97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB978u;
        // 0x7ab97c: 0x26d45280  addiu       $s4, $s6, 0x5280 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 21120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab978) {
            ctx->pc = 0x7ABAB8u;
            goto label_7abab8;
        }
    }
    ctx->pc = 0x7AB980u;
    // 0x7ab980: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x7AB980u;
    {
        const bool branch_taken_0x7ab980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ab980) {
            ctx->pc = 0x7ABC44u;
            goto label_7abc44;
        }
    }
    ctx->pc = 0x7AB988u;
label_7ab988:
    // 0x7ab988: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x7ab988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x7ab98c: 0x50a0001e  beql        $a1, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x7AB98Cu;
    {
        const bool branch_taken_0x7ab98c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ab98c) {
            ctx->pc = 0x7AB990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AB98Cu;
            // 0x7ab990: 0x8e25003c  lw          $a1, 0x3C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ABA08u;
            goto label_7aba08;
        }
    }
    ctx->pc = 0x7AB994u;
    // 0x7ab994: 0x5260001c  beql        $s3, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x7AB994u;
    {
        const bool branch_taken_0x7ab994 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ab994) {
            ctx->pc = 0x7AB998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AB994u;
            // 0x7ab998: 0x8e25003c  lw          $a1, 0x3C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ABA08u;
            goto label_7aba08;
        }
    }
    ctx->pc = 0x7AB99Cu;
    // 0x7ab99c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x7ab99cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7ab9a0: 0x0  nop
    ctx->pc = 0x7ab9a0u;
    // NOP
    // 0x7ab9a4: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x7AB9A4u;
    {
        const bool branch_taken_0x7ab9a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x7ab9a4) {
            ctx->pc = 0x7AB9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AB9A4u;
            // 0x7ab9a8: 0x8ca20250  lw          $v0, 0x250($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AB9D8u;
            goto label_7ab9d8;
        }
    }
    ctx->pc = 0x7AB9ACu;
    // 0x7ab9ac: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x7AB9ACu;
    {
        const bool branch_taken_0x7ab9ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ab9ac) {
            ctx->pc = 0x7AB9C0u;
            goto label_7ab9c0;
        }
    }
    ctx->pc = 0x7AB9B4u;
    // 0x7ab9b4: 0x8ca202f0  lw          $v0, 0x2F0($a1)
    ctx->pc = 0x7ab9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 752)));
    // 0x7ab9b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x7AB9B8u;
    {
        const bool branch_taken_0x7ab9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AB9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB9B8u;
        // 0x7ab9bc: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab9b8) {
            ctx->pc = 0x7AB9D0u;
            goto label_7ab9d0;
        }
    }
    ctx->pc = 0x7AB9C0u;
label_7ab9c0:
    // 0x7ab9c0: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7AB9C0u;
    {
        const bool branch_taken_0x7ab9c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ab9c0) {
            ctx->pc = 0x7AB9C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AB9C0u;
            // 0x7ab9c4: 0x8ca20250  lw          $v0, 0x250($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AB9D8u;
            goto label_7ab9d8;
        }
    }
    ctx->pc = 0x7AB9C8u;
    // 0x7ab9c8: 0x8ca202f0  lw          $v0, 0x2F0($a1)
    ctx->pc = 0x7ab9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 752)));
    // 0x7ab9cc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x7ab9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_7ab9d0:
    // 0x7ab9d0: 0xaca202f0  sw          $v0, 0x2F0($a1)
    ctx->pc = 0x7ab9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 752), GPR_U32(ctx, 2));
    // 0x7ab9d4: 0x8ca20250  lw          $v0, 0x250($a1)
    ctx->pc = 0x7ab9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
label_7ab9d8:
    // 0x7ab9d8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x7ab9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x7ab9dc: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x7ab9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x7ab9e0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x7ab9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x7ab9e4: 0x3484fffd  ori         $a0, $a0, 0xFFFD
    ctx->pc = 0x7ab9e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65533);
    // 0x7ab9e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7ab9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7ab9ec: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x7ab9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x7ab9f0: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x7ab9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x7ab9f4: 0xaca20250  sw          $v0, 0x250($a1)
    ctx->pc = 0x7ab9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 592), GPR_U32(ctx, 2));
    // 0x7ab9f8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x7ab9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ab9fc: 0xc0403b6  jal         func_100ED8
    ctx->pc = 0x7AB9FCu;
    SET_GPR_U32(ctx, 31, 0x7ABA04u);
    ctx->pc = 0x7ABA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AB9FCu;
    // 0x7aba00: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100ED8u, 0x7AB9FCu, 0x7ABA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ABA04u;
label_7aba04:
    // 0x7aba04: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x7aba04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_7aba08:
    // 0x7aba08: 0x10a0008e  beqz        $a1, . + 4 + (0x8E << 2)
    ctx->pc = 0x7ABA08u;
    {
        const bool branch_taken_0x7aba08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ABA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABA08u;
        // 0x7aba0c: 0x26d45280  addiu       $s4, $s6, 0x5280 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 21120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aba08) {
            ctx->pc = 0x7ABC44u;
            goto label_7abc44;
        }
    }
    ctx->pc = 0x7ABA10u;
    // 0x7aba10: 0x12600089  beqz        $s3, . + 4 + (0x89 << 2)
    ctx->pc = 0x7ABA10u;
    {
        const bool branch_taken_0x7aba10 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ABA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABA10u;
        // 0x7aba14: 0x8ca20250  lw          $v0, 0x250($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aba10) {
            ctx->pc = 0x7ABC38u;
            goto label_7abc38;
        }
    }
    ctx->pc = 0x7ABA18u;
    // 0x7aba18: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x7aba18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x7aba1c: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x7aba1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x7aba20: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x7aba20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x7aba24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7aba24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7aba28: 0x3484fffd  ori         $a0, $a0, 0xFFFD
    ctx->pc = 0x7aba28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65533);
    // 0x7aba2c: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x7ABA2Cu;
    {
        const bool branch_taken_0x7aba2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ABA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABA2Cu;
        // 0x7aba30: 0x441024  and         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aba2c) {
            ctx->pc = 0x7ABC3Cu;
            goto label_7abc3c;
        }
    }
    ctx->pc = 0x7ABA34u;
label_7aba34:
    // 0x7aba34: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x7aba34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x7aba38: 0x10a00082  beqz        $a1, . + 4 + (0x82 << 2)
    ctx->pc = 0x7ABA38u;
    {
        const bool branch_taken_0x7aba38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ABA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABA38u;
        // 0x7aba3c: 0x26d45280  addiu       $s4, $s6, 0x5280 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 21120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aba38) {
            ctx->pc = 0x7ABC44u;
            goto label_7abc44;
        }
    }
    ctx->pc = 0x7ABA40u;
    // 0x7aba40: 0x12600080  beqz        $s3, . + 4 + (0x80 << 2)
    ctx->pc = 0x7ABA40u;
    {
        const bool branch_taken_0x7aba40 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x7aba40) {
            ctx->pc = 0x7ABC44u;
            goto label_7abc44;
        }
    }
    ctx->pc = 0x7ABA48u;
    // 0x7aba48: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x7aba48u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7aba4c: 0x0  nop
    ctx->pc = 0x7aba4cu;
    // NOP
    // 0x7aba50: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x7ABA50u;
    {
        const bool branch_taken_0x7aba50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x7aba50) {
            ctx->pc = 0x7ABA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ABA50u;
            // 0x7aba54: 0x8ca20250  lw          $v0, 0x250($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ABA84u;
            goto label_7aba84;
        }
    }
    ctx->pc = 0x7ABA58u;
    // 0x7aba58: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x7ABA58u;
    {
        const bool branch_taken_0x7aba58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x7aba58) {
            ctx->pc = 0x7ABA6Cu;
            goto label_7aba6c;
        }
    }
    ctx->pc = 0x7ABA60u;
    // 0x7aba60: 0x8ca202f0  lw          $v0, 0x2F0($a1)
    ctx->pc = 0x7aba60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 752)));
    // 0x7aba64: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x7ABA64u;
    {
        const bool branch_taken_0x7aba64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ABA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABA64u;
        // 0x7aba68: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aba64) {
            ctx->pc = 0x7ABA7Cu;
            goto label_7aba7c;
        }
    }
    ctx->pc = 0x7ABA6Cu;
label_7aba6c:
    // 0x7aba6c: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7ABA6Cu;
    {
        const bool branch_taken_0x7aba6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x7aba6c) {
            ctx->pc = 0x7ABA70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ABA6Cu;
            // 0x7aba70: 0x8ca20250  lw          $v0, 0x250($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ABA84u;
            goto label_7aba84;
        }
    }
    ctx->pc = 0x7ABA74u;
    // 0x7aba74: 0x8ca202f0  lw          $v0, 0x2F0($a1)
    ctx->pc = 0x7aba74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 752)));
    // 0x7aba78: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x7aba78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_7aba7c:
    // 0x7aba7c: 0xaca202f0  sw          $v0, 0x2F0($a1)
    ctx->pc = 0x7aba7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 752), GPR_U32(ctx, 2));
    // 0x7aba80: 0x8ca20250  lw          $v0, 0x250($a1)
    ctx->pc = 0x7aba80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
label_7aba84:
    // 0x7aba84: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x7aba84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x7aba88: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x7aba88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x7aba8c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x7aba8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x7aba90: 0x3484fffd  ori         $a0, $a0, 0xFFFD
    ctx->pc = 0x7aba90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65533);
    // 0x7aba94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7aba94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7aba98: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x7aba98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x7aba9c: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x7aba9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x7abaa0: 0xaca20250  sw          $v0, 0x250($a1)
    ctx->pc = 0x7abaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 592), GPR_U32(ctx, 2));
    // 0x7abaa4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x7abaa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7abaa8: 0xc0403b6  jal         func_100ED8
    ctx->pc = 0x7ABAA8u;
    SET_GPR_U32(ctx, 31, 0x7ABAB0u);
    ctx->pc = 0x7ABAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ABAA8u;
    // 0x7abaac: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100ED8u, 0x7ABAA8u, 0x7ABAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ABAB0u;
label_7abab0:
    // 0x7abab0: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x7ABAB0u;
    {
        const bool branch_taken_0x7abab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ABAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABAB0u;
        // 0x7abab4: 0x26d45280  addiu       $s4, $s6, 0x5280 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 21120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7abab0) {
            ctx->pc = 0x7ABC44u;
            goto label_7abc44;
        }
    }
    ctx->pc = 0x7ABAB8u;
label_7abab8:
    // 0x7abab8: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x7abab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x7ababc: 0x10a00061  beqz        $a1, . + 4 + (0x61 << 2)
    ctx->pc = 0x7ABABCu;
    {
        const bool branch_taken_0x7ababc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ababc) {
            ctx->pc = 0x7ABC44u;
            goto label_7abc44;
        }
    }
    ctx->pc = 0x7ABAC4u;
    // 0x7abac4: 0x1260005c  beqz        $s3, . + 4 + (0x5C << 2)
    ctx->pc = 0x7ABAC4u;
    {
        const bool branch_taken_0x7abac4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ABAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABAC4u;
        // 0x7abac8: 0x8ca20250  lw          $v0, 0x250($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7abac4) {
            ctx->pc = 0x7ABC38u;
            goto label_7abc38;
        }
    }
    ctx->pc = 0x7ABACCu;
    // 0x7abacc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x7abaccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x7abad0: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x7abad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x7abad4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x7abad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x7abad8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7abad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7abadc: 0x3484fffd  ori         $a0, $a0, 0xFFFD
    ctx->pc = 0x7abadcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65533);
    // 0x7abae0: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x7ABAE0u;
    {
        const bool branch_taken_0x7abae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ABAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABAE0u;
        // 0x7abae4: 0x441024  and         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7abae0) {
            ctx->pc = 0x7ABC3Cu;
            goto label_7abc3c;
        }
    }
    ctx->pc = 0x7ABAE8u;
label_7abae8:
    // 0x7abae8: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x7abae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x7abaec: 0x10a00055  beqz        $a1, . + 4 + (0x55 << 2)
    ctx->pc = 0x7ABAECu;
    {
        const bool branch_taken_0x7abaec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ABAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABAECu;
        // 0x7abaf0: 0x26d45280  addiu       $s4, $s6, 0x5280 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 21120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7abaec) {
            ctx->pc = 0x7ABC44u;
            goto label_7abc44;
        }
    }
    ctx->pc = 0x7ABAF4u;
    // 0x7abaf4: 0x52600050  beql        $s3, $zero, . + 4 + (0x50 << 2)
    ctx->pc = 0x7ABAF4u;
    {
        const bool branch_taken_0x7abaf4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x7abaf4) {
            ctx->pc = 0x7ABAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ABAF4u;
            // 0x7abaf8: 0x8ca20250  lw          $v0, 0x250($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ABC38u;
            goto label_7abc38;
        }
    }
    ctx->pc = 0x7ABAFCu;
    // 0x7abafc: 0x50c00004  beql        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x7ABAFCu;
    {
        const bool branch_taken_0x7abafc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x7abafc) {
            ctx->pc = 0x7ABB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ABAFCu;
            // 0x7abb00: 0x8ca20250  lw          $v0, 0x250($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ABB10u;
            goto label_7abb10;
        }
    }
    ctx->pc = 0x7ABB04u;
    // 0x7abb04: 0x8ca202f0  lw          $v0, 0x2F0($a1)
    ctx->pc = 0x7abb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 752)));
    // 0x7abb08: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x7ABB08u;
    {
        const bool branch_taken_0x7abb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ABB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABB08u;
        // 0x7abb0c: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7abb08) {
            ctx->pc = 0x7ABB24u;
            goto label_7abb24;
        }
    }
    ctx->pc = 0x7ABB10u;
label_7abb10:
    // 0x7abb10: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x7abb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x7abb14: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7ABB14u;
    {
        const bool branch_taken_0x7abb14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7abb14) {
            ctx->pc = 0x7ABB18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ABB14u;
            // 0x7abb18: 0x8ca20250  lw          $v0, 0x250($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ABB2Cu;
            goto label_7abb2c;
        }
    }
    ctx->pc = 0x7ABB1Cu;
    // 0x7abb1c: 0x8ca202f0  lw          $v0, 0x2F0($a1)
    ctx->pc = 0x7abb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 752)));
    // 0x7abb20: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x7abb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_7abb24:
    // 0x7abb24: 0xaca202f0  sw          $v0, 0x2F0($a1)
    ctx->pc = 0x7abb24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 752), GPR_U32(ctx, 2));
    // 0x7abb28: 0x8ca20250  lw          $v0, 0x250($a1)
    ctx->pc = 0x7abb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
label_7abb2c:
    // 0x7abb2c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x7abb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x7abb30: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x7abb30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x7abb34: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x7abb34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x7abb38: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7abb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7abb3c: 0x3484fffd  ori         $a0, $a0, 0xFFFD
    ctx->pc = 0x7abb3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65533);
    // 0x7abb40: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x7ABB40u;
    {
        const bool branch_taken_0x7abb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ABB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABB40u;
        // 0x7abb44: 0x441024  and         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7abb40) {
            ctx->pc = 0x7ABC3Cu;
            goto label_7abc3c;
        }
    }
    ctx->pc = 0x7ABB48u;
label_7abb48:
    // 0x7abb48: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x7abb48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x7abb4c: 0x10a0003d  beqz        $a1, . + 4 + (0x3D << 2)
    ctx->pc = 0x7ABB4Cu;
    {
        const bool branch_taken_0x7abb4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x7abb4c) {
            ctx->pc = 0x7ABC44u;
            goto label_7abc44;
        }
    }
    ctx->pc = 0x7ABB54u;
    // 0x7abb54: 0x52600038  beql        $s3, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x7ABB54u;
    {
        const bool branch_taken_0x7abb54 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x7abb54) {
            ctx->pc = 0x7ABB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ABB54u;
            // 0x7abb58: 0x8ca20250  lw          $v0, 0x250($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ABC38u;
            goto label_7abc38;
        }
    }
    ctx->pc = 0x7ABB5Cu;
    // 0x7abb5c: 0x50c00004  beql        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x7ABB5Cu;
    {
        const bool branch_taken_0x7abb5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x7abb5c) {
            ctx->pc = 0x7ABB60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ABB5Cu;
            // 0x7abb60: 0x8ca20250  lw          $v0, 0x250($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ABB70u;
            goto label_7abb70;
        }
    }
    ctx->pc = 0x7ABB64u;
    // 0x7abb64: 0x8ca202f0  lw          $v0, 0x2F0($a1)
    ctx->pc = 0x7abb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 752)));
    // 0x7abb68: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x7ABB68u;
    {
        const bool branch_taken_0x7abb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ABB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABB68u;
        // 0x7abb6c: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7abb68) {
            ctx->pc = 0x7ABB84u;
            goto label_7abb84;
        }
    }
    ctx->pc = 0x7ABB70u;
label_7abb70:
    // 0x7abb70: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x7abb70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x7abb74: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7ABB74u;
    {
        const bool branch_taken_0x7abb74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7abb74) {
            ctx->pc = 0x7ABB78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ABB74u;
            // 0x7abb78: 0x8ca20250  lw          $v0, 0x250($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ABB8Cu;
            goto label_7abb8c;
        }
    }
    ctx->pc = 0x7ABB7Cu;
    // 0x7abb7c: 0x8ca202f0  lw          $v0, 0x2F0($a1)
    ctx->pc = 0x7abb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 752)));
    // 0x7abb80: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x7abb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_7abb84:
    // 0x7abb84: 0xaca202f0  sw          $v0, 0x2F0($a1)
    ctx->pc = 0x7abb84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 752), GPR_U32(ctx, 2));
    // 0x7abb88: 0x8ca20250  lw          $v0, 0x250($a1)
    ctx->pc = 0x7abb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
label_7abb8c:
    // 0x7abb8c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x7abb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x7abb90: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x7abb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x7abb94: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x7abb94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x7abb98: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7abb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7abb9c: 0x3484fffd  ori         $a0, $a0, 0xFFFD
    ctx->pc = 0x7abb9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65533);
    // 0x7abba0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x7ABBA0u;
    {
        const bool branch_taken_0x7abba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ABBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABBA0u;
        // 0x7abba4: 0x441024  and         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7abba0) {
            ctx->pc = 0x7ABC3Cu;
            goto label_7abc3c;
        }
    }
    ctx->pc = 0x7ABBA8u;
label_7abba8:
    // 0x7abba8: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x7abba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x7abbac: 0x10a00025  beqz        $a1, . + 4 + (0x25 << 2)
    ctx->pc = 0x7ABBACu;
    {
        const bool branch_taken_0x7abbac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x7abbac) {
            ctx->pc = 0x7ABC44u;
            goto label_7abc44;
        }
    }
    ctx->pc = 0x7ABBB4u;
    // 0x7abbb4: 0x52600020  beql        $s3, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x7ABBB4u;
    {
        const bool branch_taken_0x7abbb4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x7abbb4) {
            ctx->pc = 0x7ABBB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ABBB4u;
            // 0x7abbb8: 0x8ca20250  lw          $v0, 0x250($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ABC38u;
            goto label_7abc38;
        }
    }
    ctx->pc = 0x7ABBBCu;
    // 0x7abbbc: 0x50c00004  beql        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x7ABBBCu;
    {
        const bool branch_taken_0x7abbbc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x7abbbc) {
            ctx->pc = 0x7ABBC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ABBBCu;
            // 0x7abbc0: 0x8ca20250  lw          $v0, 0x250($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ABBD0u;
            goto label_7abbd0;
        }
    }
    ctx->pc = 0x7ABBC4u;
    // 0x7abbc4: 0x8ca202f0  lw          $v0, 0x2F0($a1)
    ctx->pc = 0x7abbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 752)));
    // 0x7abbc8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x7ABBC8u;
    {
        const bool branch_taken_0x7abbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ABBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABBC8u;
        // 0x7abbcc: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7abbc8) {
            ctx->pc = 0x7ABBE4u;
            goto label_7abbe4;
        }
    }
    ctx->pc = 0x7ABBD0u;
label_7abbd0:
    // 0x7abbd0: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x7abbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x7abbd4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7ABBD4u;
    {
        const bool branch_taken_0x7abbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7abbd4) {
            ctx->pc = 0x7ABBD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ABBD4u;
            // 0x7abbd8: 0x8ca20250  lw          $v0, 0x250($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ABBECu;
            goto label_7abbec;
        }
    }
    ctx->pc = 0x7ABBDCu;
    // 0x7abbdc: 0x8ca202f0  lw          $v0, 0x2F0($a1)
    ctx->pc = 0x7abbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 752)));
    // 0x7abbe0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x7abbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_7abbe4:
    // 0x7abbe4: 0xaca202f0  sw          $v0, 0x2F0($a1)
    ctx->pc = 0x7abbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 752), GPR_U32(ctx, 2));
    // 0x7abbe8: 0x8ca20250  lw          $v0, 0x250($a1)
    ctx->pc = 0x7abbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
label_7abbec:
    // 0x7abbec: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x7abbecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x7abbf0: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x7abbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x7abbf4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x7abbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x7abbf8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7abbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7abbfc: 0x3484fffd  ori         $a0, $a0, 0xFFFD
    ctx->pc = 0x7abbfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65533);
    // 0x7abc00: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x7ABC00u;
    {
        const bool branch_taken_0x7abc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ABC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABC00u;
        // 0x7abc04: 0x441024  and         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7abc00) {
            ctx->pc = 0x7ABC3Cu;
            goto label_7abc3c;
        }
    }
    ctx->pc = 0x7ABC08u;
label_7abc08:
    // 0x7abc08: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x7abc08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x7abc0c: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x7ABC0Cu;
    {
        const bool branch_taken_0x7abc0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ABC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABC0Cu;
        // 0x7abc10: 0x26d45280  addiu       $s4, $s6, 0x5280 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 21120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7abc0c) {
            ctx->pc = 0x7ABC44u;
            goto label_7abc44;
        }
    }
    ctx->pc = 0x7ABC14u;
    // 0x7abc14: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x7ABC14u;
    {
        const bool branch_taken_0x7abc14 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ABC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABC14u;
        // 0x7abc18: 0x8ca20250  lw          $v0, 0x250($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7abc14) {
            ctx->pc = 0x7ABC38u;
            goto label_7abc38;
        }
    }
    ctx->pc = 0x7ABC1Cu;
    // 0x7abc1c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x7abc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x7abc20: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x7abc20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x7abc24: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x7abc24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x7abc28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7abc28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7abc2c: 0x3484fffd  ori         $a0, $a0, 0xFFFD
    ctx->pc = 0x7abc2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65533);
    // 0x7abc30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7ABC30u;
    {
        const bool branch_taken_0x7abc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ABC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABC30u;
        // 0x7abc34: 0x441024  and         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7abc30) {
            ctx->pc = 0x7ABC3Cu;
            goto label_7abc3c;
        }
    }
    ctx->pc = 0x7ABC38u;
label_7abc38:
    // 0x7abc38: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x7abc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
label_7abc3c:
    // 0x7abc3c: 0xaca20250  sw          $v0, 0x250($a1)
    ctx->pc = 0x7abc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 592), GPR_U32(ctx, 2));
    // 0x7abc40: 0x26d45280  addiu       $s4, $s6, 0x5280
    ctx->pc = 0x7abc40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 21120));
label_7abc44:
    // 0x7abc44: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x7abc44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7abc48: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x7abc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7abc4c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x7abc4cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7abc50: 0x0  nop
    ctx->pc = 0x7abc50u;
    // NOP
    // 0x7abc54: 0x45000052  bc1f        . + 4 + (0x52 << 2)
    ctx->pc = 0x7ABC54u;
    {
        const bool branch_taken_0x7abc54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x7ABC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABC54u;
        // 0x7abc58: 0x24020603  addiu       $v0, $zero, 0x603 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1539));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7abc54) {
            ctx->pc = 0x7ABDA0u;
            goto label_7abda0;
        }
    }
    ctx->pc = 0x7ABC5Cu;
    // 0x7abc5c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x7abc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x7abc60: 0x54620050  bnel        $v1, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x7ABC60u;
    {
        const bool branch_taken_0x7abc60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x7abc60) {
            ctx->pc = 0x7ABC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ABC60u;
            // 0x7abc64: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ABDA4u;
            goto label_7abda4;
        }
    }
    ctx->pc = 0x7ABC68u;
    // 0x7abc68: 0x3c02007b  lui         $v0, 0x7B
    ctx->pc = 0x7abc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
    // 0x7abc6c: 0x24050600  addiu       $a1, $zero, 0x600
    ctx->pc = 0x7abc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x7abc70: 0x24504f80  addiu       $s0, $v0, 0x4F80
    ctx->pc = 0x7abc70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 20352));
    // 0x7abc74: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x7abc74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7abc78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7abc78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7abc7c: 0xc1ea59a  jal         func_7A9668
    ctx->pc = 0x7ABC7Cu;
    SET_GPR_U32(ctx, 31, 0x7ABC84u);
    ctx->pc = 0x7ABC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ABC7Cu;
    // 0x7abc80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A9668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A9668u, 0x7ABC7Cu, 0x7ABC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ABC84u;
label_7abc84:
    // 0x7abc84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7abc84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7abc88: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x7abc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x7abc8c: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x7ABC8Cu;
    {
        const bool branch_taken_0x7abc8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x7ABC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABC8Cu;
        // 0x7abc90: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7abc8c) {
            ctx->pc = 0x7ABCC0u;
            goto label_7abcc0;
        }
    }
    ctx->pc = 0x7ABC94u;
    // 0x7abc94: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x7abc94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x7abc98: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x7abc98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x7abc9c: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x7abc9cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x7abca0: 0xc1ea668  jal         func_7A99A0
    ctx->pc = 0x7ABCA0u;
    SET_GPR_U32(ctx, 31, 0x7ABCA8u);
    ctx->pc = 0x7ABCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ABCA0u;
    // 0x7abca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A99A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A99A0u, 0x7ABCA0u, 0x7ABCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ABCA8u;
label_7abca8:
    // 0x7abca8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7ABCA8u;
    {
        const bool branch_taken_0x7abca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ABCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABCA8u;
        // 0x7abcac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7abca8) {
            ctx->pc = 0x7ABCC0u;
            goto label_7abcc0;
        }
    }
    ctx->pc = 0x7ABCB0u;
    // 0x7abcb0: 0x24050600  addiu       $a1, $zero, 0x600
    ctx->pc = 0x7abcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x7abcb4: 0xc1ea5b0  jal         func_7A96C0
    ctx->pc = 0x7ABCB4u;
    SET_GPR_U32(ctx, 31, 0x7ABCBCu);
    ctx->pc = 0x7ABCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ABCB4u;
    // 0x7abcb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A96C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A96C0u, 0x7ABCB4u, 0x7ABCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ABCBCu;
label_7abcbc:
    // 0x7abcbc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7abcbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7abcc0:
    // 0x7abcc0: 0x26b04f80  addiu       $s0, $s5, 0x4F80
    ctx->pc = 0x7abcc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 20352));
    // 0x7abcc4: 0x24050605  addiu       $a1, $zero, 0x605
    ctx->pc = 0x7abcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1541));
    // 0x7abcc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7abcc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7abccc: 0xc1ea59a  jal         func_7A9668
    ctx->pc = 0x7ABCCCu;
    SET_GPR_U32(ctx, 31, 0x7ABCD4u);
    ctx->pc = 0x7ABCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ABCCCu;
    // 0x7abcd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A9668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A9668u, 0x7ABCCCu, 0x7ABCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ABCD4u;
label_7abcd4:
    // 0x7abcd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7abcd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7abcd8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x7abcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x7abcdc: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x7ABCDCu;
    {
        const bool branch_taken_0x7abcdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x7ABCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABCDCu;
        // 0x7abce0: 0x26c25280  addiu       $v0, $s6, 0x5280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 21120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7abcdc) {
            ctx->pc = 0x7ABD10u;
            goto label_7abd10;
        }
    }
    ctx->pc = 0x7ABCE4u;
    // 0x7abce4: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x7abce4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x7abce8: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x7abce8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x7abcec: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x7abcecu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x7abcf0: 0xc1ea668  jal         func_7A99A0
    ctx->pc = 0x7ABCF0u;
    SET_GPR_U32(ctx, 31, 0x7ABCF8u);
    ctx->pc = 0x7ABCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ABCF0u;
    // 0x7abcf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A99A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A99A0u, 0x7ABCF0u, 0x7ABCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ABCF8u;
label_7abcf8:
    // 0x7abcf8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7ABCF8u;
    {
        const bool branch_taken_0x7abcf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ABCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABCF8u;
        // 0x7abcfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7abcf8) {
            ctx->pc = 0x7ABD10u;
            goto label_7abd10;
        }
    }
    ctx->pc = 0x7ABD00u;
    // 0x7abd00: 0x24050605  addiu       $a1, $zero, 0x605
    ctx->pc = 0x7abd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1541));
    // 0x7abd04: 0xc1ea5b0  jal         func_7A96C0
    ctx->pc = 0x7ABD04u;
    SET_GPR_U32(ctx, 31, 0x7ABD0Cu);
    ctx->pc = 0x7ABD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ABD04u;
    // 0x7abd08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A96C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A96C0u, 0x7ABD04u, 0x7ABD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ABD0Cu;
label_7abd0c:
    // 0x7abd0c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7abd0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7abd10:
    // 0x7abd10: 0x12400023  beqz        $s2, . + 4 + (0x23 << 2)
    ctx->pc = 0x7ABD10u;
    {
        const bool branch_taken_0x7abd10 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ABD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABD10u;
        // 0x7abd14: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7abd10) {
            ctx->pc = 0x7ABDA0u;
            goto label_7abda0;
        }
    }
    ctx->pc = 0x7ABD18u;
    // 0x7abd18: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x7abd18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x7abd1c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x7abd1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7abd20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7ABD20u;
    {
        const bool branch_taken_0x7abd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ABD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABD20u;
        // 0x7abd24: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7abd20) {
            ctx->pc = 0x7ABD34u;
            goto label_7abd34;
        }
    }
    ctx->pc = 0x7ABD28u;
    // 0x7abd28: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x7abd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x7abd2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7ABD2Cu;
    {
        const bool branch_taken_0x7abd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ABD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABD2Cu;
        // 0x7abd30: 0x8c420044  lw          $v0, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7abd2c) {
            ctx->pc = 0x7ABD38u;
            goto label_7abd38;
        }
    }
    ctx->pc = 0x7ABD34u;
label_7abd34:
    // 0x7abd34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7abd34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7abd38:
    // 0x7abd38: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x7abd38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x7abd3c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x7abd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7abd40: 0x906202b4  lbu         $v0, 0x2B4($v1)
    ctx->pc = 0x7abd40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 692)));
    // 0x7abd44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7ABD44u;
    {
        const bool branch_taken_0x7abd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ABD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABD44u;
        // 0x7abd48: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7abd44) {
            ctx->pc = 0x7ABD58u;
            goto label_7abd58;
        }
    }
    ctx->pc = 0x7ABD4Cu;
    // 0x7abd4c: 0x8c620278  lw          $v0, 0x278($v1)
    ctx->pc = 0x7abd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
    // 0x7abd50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7ABD50u;
    {
        const bool branch_taken_0x7abd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ABD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABD50u;
        // 0x7abd54: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7abd50) {
            ctx->pc = 0x7ABD5Cu;
            goto label_7abd5c;
        }
    }
    ctx->pc = 0x7ABD58u;
label_7abd58:
    // 0x7abd58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7abd58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7abd5c:
    // 0x7abd5c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x7abd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7abd60: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7ABD60u;
    {
        const bool branch_taken_0x7abd60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ABD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABD60u;
        // 0x7abd64: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7abd60) {
            ctx->pc = 0x7ABD70u;
            goto label_7abd70;
        }
    }
    ctx->pc = 0x7ABD68u;
    // 0x7abd68: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7ABD68u;
    {
        const bool branch_taken_0x7abd68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7abd68) {
            ctx->pc = 0x7ABD6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ABD68u;
            // 0x7abd6c: 0xac430148  sw          $v1, 0x148($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ABD70u;
            goto label_7abd70;
        }
    }
    ctx->pc = 0x7ABD70u;
label_7abd70:
    // 0x7abd70: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7abd70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x7abd74: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x7abd74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x7abd78: 0x24427b00  addiu       $v0, $v0, 0x7B00
    ctx->pc = 0x7abd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31488));
    // 0x7abd7c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x7abd7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x747B00u));
    // 0x7abd80: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x7abd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7abd84: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x7abd84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x7abd88: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x7abd88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x747B00u));
    // 0x7abd8c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x7abd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7abd90: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7abd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7abd94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x7abd94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7abd98: 0xc0ae162  jal         func_2B8588
    ctx->pc = 0x7ABD98u;
    SET_GPR_U32(ctx, 31, 0x7ABDA0u);
    ctx->pc = 0x7ABD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ABD98u;
    // 0x7abd9c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8588u, 0x7ABD98u, 0x7ABDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ABDA0u;
label_7abda0:
    // 0x7abda0: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x7abda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_7abda4:
    // 0x7abda4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7ABDA4u;
    {
        const bool branch_taken_0x7abda4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ABDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABDA4u;
        // 0x7abda8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7abda4) {
            ctx->pc = 0x7ABDC4u;
            goto label_7abdc4;
        }
    }
    ctx->pc = 0x7ABDACu;
    // 0x7abdac: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x7ABDACu;
    {
        const bool branch_taken_0x7abdac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ABDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABDACu;
        // 0x7abdb0: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7abdac) {
            ctx->pc = 0x7ABDC8u;
            goto label_7abdc8;
        }
    }
    ctx->pc = 0x7ABDB4u;
    // 0x7abdb4: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x7abdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x7abdb8: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x7abdb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x7abdbc: 0xac820250  sw          $v0, 0x250($a0)
    ctx->pc = 0x7abdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
    // 0x7abdc0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x7abdc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_7abdc4:
    // 0x7abdc4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x7abdc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_7abdc8:
    // 0x7abdc8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x7abdc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x7abdcc: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x7abdccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7abdd0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x7abdd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7abdd4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x7abdd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7abdd8: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x7abdd8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7abddc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x7abddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7abde0: 0x3e00008  jr          $ra
    ctx->pc = 0x7ABDE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7ABDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABDE0u;
        // 0x7abde4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7ABDE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7ABDE8u;
}
} // namespace gh_event
