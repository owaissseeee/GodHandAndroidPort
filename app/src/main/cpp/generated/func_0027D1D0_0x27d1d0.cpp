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

// Function: func_0027D1D0
// Address: 0x27d1d0 - 0x27d300
void func_0027D1D0_0x27d1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027D1D0_0x27d1d0");
#endif

    ctx->pc = 0x27d1d0u;

    // 0x27d1d0: 0x90a302b4  lbu         $v1, 0x2B4($a1)
    ctx->pc = 0x27d1d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x27d1d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27d1d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27d1d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27d1d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d1dc: 0x4c00002  bltz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x27D1DCu;
    {
        const bool branch_taken_0x27d1dc = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x27D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D1DCu;
        // 0x27d1e0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d1dc) {
            ctx->pc = 0x27D1E8u;
            goto label_27d1e8;
        }
    }
    ctx->pc = 0x27D1E4u;
    // 0x27d1e4: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x27d1e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27d1e8:
    // 0x27d1e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27d1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27d1ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27D1ECu;
    {
        const bool branch_taken_0x27d1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D1ECu;
        // 0x27d1f0: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d1ec) {
            ctx->pc = 0x27D204u;
            goto label_27d204;
        }
    }
    ctx->pc = 0x27D1F4u;
    // 0x27d1f4: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x27d1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x27d1f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27d1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d1fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27D1FCu;
    {
        const bool branch_taken_0x27d1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D1FCu;
        // 0x27d200: 0x8c490000  lw          $t1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d1fc) {
            ctx->pc = 0x27D208u;
            goto label_27d208;
        }
    }
    ctx->pc = 0x27D204u;
label_27d204:
    // 0x27d204: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27d204u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27d208:
    // 0x27d208: 0x1120003b  beqz        $t1, . + 4 + (0x3B << 2)
    ctx->pc = 0x27D208u;
    {
        const bool branch_taken_0x27d208 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d208) {
            ctx->pc = 0x27D2F8u;
            goto label_27d2f8;
        }
    }
    ctx->pc = 0x27D210u;
    // 0x27d210: 0x908202b4  lbu         $v0, 0x2B4($a0)
    ctx->pc = 0x27d210u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x27d214: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27D214u;
    {
        const bool branch_taken_0x27d214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D214u;
        // 0x27d218: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d214) {
            ctx->pc = 0x27D228u;
            goto label_27d228;
        }
    }
    ctx->pc = 0x27D21Cu;
    // 0x27d21c: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x27d21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x27d220: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27D220u;
    {
        const bool branch_taken_0x27d220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D220u;
        // 0x27d224: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d220) {
            ctx->pc = 0x27D22Cu;
            goto label_27d22c;
        }
    }
    ctx->pc = 0x27D228u;
label_27d228:
    // 0x27d228: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27d228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27d22c:
    // 0x27d22c: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x27D22Cu;
    {
        const bool branch_taken_0x27d22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d22c) {
            ctx->pc = 0x27D2F8u;
            goto label_27d2f8;
        }
    }
    ctx->pc = 0x27D234u;
    // 0x27d234: 0x8c4300d0  lw          $v1, 0xD0($v0)
    ctx->pc = 0x27d234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x27d238: 0xac490148  sw          $t1, 0x148($v0)
    ctx->pc = 0x27d238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 9));
    // 0x27d23c: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x27d23cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
    // 0x27d240: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x27d240u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
    // 0x27d244: 0x10670007  beq         $v1, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x27D244u;
    {
        const bool branch_taken_0x27d244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x27D248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D244u;
        // 0x27d248: 0xac400108  sw          $zero, 0x108($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d244) {
            ctx->pc = 0x27D264u;
            goto label_27d264;
        }
    }
    ctx->pc = 0x27D24Cu;
    // 0x27d24c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x27d24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d250: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x27d250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x27d254: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x27d254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d258: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x27d258u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x27d25c: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x27d25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d260: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x27d260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_27d264:
    // 0x27d264: 0x24430100  addiu       $v1, $v0, 0x100
    ctx->pc = 0x27d264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x27d268: 0x50680008  beql        $v1, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27D268u;
    {
        const bool branch_taken_0x27d268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x27d268) {
            ctx->pc = 0x27D26Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D268u;
            // 0x27d26c: 0xac861584  sw          $a2, 0x1584($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 5508), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D28Cu;
            goto label_27d28c;
        }
    }
    ctx->pc = 0x27D270u;
    // 0x27d270: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x27d270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d274: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x27d274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x27d278: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x27d278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d27c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x27d27cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x27d280: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x27d280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d284: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x27d284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x27d288: 0xac861584  sw          $a2, 0x1584($a0)
    ctx->pc = 0x27d288u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5508), GPR_U32(ctx, 6));
label_27d28c:
    // 0x27d28c: 0x24821590  addiu       $v0, $a0, 0x1590
    ctx->pc = 0x27d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 5520));
    // 0x27d290: 0x10470007  beq         $v0, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x27D290u;
    {
        const bool branch_taken_0x27d290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x27D294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D290u;
        // 0x27d294: 0xac851580  sw          $a1, 0x1580($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5504), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d290) {
            ctx->pc = 0x27D2B0u;
            goto label_27d2b0;
        }
    }
    ctx->pc = 0x27D298u;
    // 0x27d298: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x27d298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d29c: 0xe4801590  swc1        $f0, 0x1590($a0)
    ctx->pc = 0x27d29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5520), bits); }
    // 0x27d2a0: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x27d2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d2a4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x27d2a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x27d2a8: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x27d2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d2ac: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x27d2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_27d2b0:
    // 0x27d2b0: 0x248215a0  addiu       $v0, $a0, 0x15A0
    ctx->pc = 0x27d2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 5536));
    // 0x27d2b4: 0x10480007  beq         $v0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27D2B4u;
    {
        const bool branch_taken_0x27d2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x27D2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D2B4u;
        // 0x27d2b8: 0x24830110  addiu       $v1, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d2b4) {
            ctx->pc = 0x27D2D4u;
            goto label_27d2d4;
        }
    }
    ctx->pc = 0x27D2BCu;
    // 0x27d2bc: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x27d2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d2c0: 0xe48015a0  swc1        $f0, 0x15A0($a0)
    ctx->pc = 0x27d2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5536), bits); }
    // 0x27d2c4: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x27d2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d2c8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x27d2c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x27d2cc: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x27d2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d2d0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x27d2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_27d2d4:
    // 0x27d2d4: 0x24a20110  addiu       $v0, $a1, 0x110
    ctx->pc = 0x27d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    // 0x27d2d8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27D2D8u;
    {
        const bool branch_taken_0x27d2d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27d2d8) {
            ctx->pc = 0x27D2F8u;
            goto label_27d2f8;
        }
    }
    ctx->pc = 0x27D2E0u;
    // 0x27d2e0: 0xc4a00110  lwc1        $f0, 0x110($a1)
    ctx->pc = 0x27d2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d2e4: 0xe4800110  swc1        $f0, 0x110($a0)
    ctx->pc = 0x27d2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 272), bits); }
    // 0x27d2e8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x27d2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d2ec: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x27d2ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x27d2f0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27d2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d2f4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x27d2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_27d2f8:
    // 0x27d2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x27D2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D2F8u;
        // 0x27d2fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D2F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D300u;
}
